#!/usr/bin/perl
##
# flail2 - flail v.2
#
# copyright (C) 1997-2000 by attila <attila@stalphonsos.com>.
# all rights reserved.
#
# Copyright (C) 2000-2006 by Sean Levy <snl@cluefactory.
# All Rights Reserved.
#
# Time-stamp: <2006-12-01 14:57:30 attila@stalphonsos.com>
# $Id$
#
# author: Sean Levy <snl@cluefactory.com> aka attila <attila@stalphonsos.com>
#
# See POD at EOF, or invoke with -help -verbose
##
use strict;
use vars qw($P $VERSION $Verbose $Quiet $DEFAULTS $Interrupted);
use POSIX;
use Pod::Usage;
package Flail;
package Flail::AddressBook;
package Flail::CLI;
package Flail::Config;
package Flail::ConnectionCache;
package Flail::Exec;
 
 
## qchomp - trim leading and trailing whitespace and deal with quoted strings
##
sub qchomp {
    my $str = shift(@_);
    while ($str =~ /^\s*([\"\'])(.*)\1\s*$/) {
        $str = $2;
    }
    $str =~ s/^\s+//;
    $str =~ s/\s+$//;
    return $str;
}
 
## parse_argv - simplistic and effective CLA parser
##
sub parse_argv {
    my $args;
    if (@_ && (ref($_[0]) eq 'HASH')) {
        $args = shift(@_);
    } else {
        $args = {};
    }
    my @argv = @_;
    foreach my $arg (@argv) {
        $arg =~ s/^\s+//;
        $arg =~ s/\s+$//;
        next unless length $arg;
        if ($arg =~ /^(-{1,2}[^=]+?)[=](.*)$/) {
            my($k,$v,$d) = ($1,qchomp($2),'');
            ($d,$k) = ($1,$2) if $k =~ /^(-+)(.*)$/;
            if ($k ne '_') {
                my @klist;
                if ($d eq '-') {
                    @klist = split('',$k);
                } elsif ($d eq '--') {
                    @klist = ($k);
                }
                foreach $k (@klist) {
                    if (!exists($args->{$k}) || (ref($args->{$k}) !~ /^(ARRAY|HASH)$/)) {
                        $args->{$k} = $v;
                    } elsif (ref($args->{$k}) eq 'HASH') {
                        my($kk,$vv) = split(/:/,$v,2);
                        $args->{$k}->{$kk} = $vv;
                    } else {
                        push(@{$args->{$k}}, $v);
                    }
                }
            } else {
                $args->{$k} = [] unless defined $args->{$k};
                push(@{$args->{$k}}, $v);
            }
        } elsif ($arg =~ /^(-{1,2}.*)$/) {
            my($k,$d) = (qchomp($1),'');
            ($d,$k) = ($1,$2) if $k =~ /^(-+)(.*)$/;
            if ($k ne '_') {
                my @klist;
                if ($d eq '-') {
                    @klist = split('',$k);
                } else {
                    @klist = ($k);
                }
                ++$args->{$_} foreach (@klist);
            } else {
                usage(qq{Cannot have an option named underscore});
            }
        } else {
            $args->{'_'} = [] unless defined $args->{'_'};
            push(@{$args->{'_'}}, $arg);
        }
    }
    ## Shortcuts: -v = -verbose, -V = -verbosity, -n = noexec
    $args->{'help'} = $args->{'h'}
        if (defined($args->{'h'}) && !defined($args->{'help'}));
    $args->{'verbose'} = $args->{'v'}
        if (defined($args->{'v'}) && !defined($args->{'verbose'}));
    $args->{'verbosity'} = $args->{'V'}
        if (defined($args->{'V'}) && !defined($args->{'verbosity'}));
    $args->{'quiet'} = $args->{'q'}
        if (defined($args->{'q'}) && !defined($args->{'quiet'}));
    $args->{'single'} = $args->{'1'}
        if (defined($args->{'1'}) && !defined($args->{'single'}));
    return $args;
}
 
## usage - dump a usage message and die
##
 
## mumble - interstitial, random messages that should go somewhere
##
 
## ts - return formatted timestamp
##
sub ts {
    my $when = shift(@_) || POSIX::ceil(time());
    my $fmt = shift(@_) || "%Y-%m-%d %H:%M:%S";
    return POSIX::strftime($fmt, localtime($when));
}
 
## copyright - print our version and copyright
##
 
## license - print our modified BSD license
##

 
##
## Main Program
##
 
MAIN: {
    my $args = parse_argv({'_' => []}, @ARGV);
    $::Verbose = $args->{'verbosity'} || $args->{'verbose'} || 0;
    $::Quiet = $args->{'quiet'} || 0;
    $::SingleCommand = $args->{'single'} || 0;
    license()   if $args->{'license'};
    copyright() if $args->{'version'} || $args->{'copyright'};
    usage()     if $args->{'help'};
    my $cfg = Flail::Config->new(args => $args);
    $cfg->load_globals_in_main();
    $cfg->load();
    my $fdir = $cfg->get('FolderDir');
    $cfg->set('CryptoSignCmd' => $cfg->get('GPGBinary') . ' --clearsign');
    $cfg->set('CryptoCryptCmd' => $cfg->get('GPGBinary') . ' --armor -se');
    $ENV{'TMPDIR'} = $cfg->get('TempDir') if defined($cfg->get('TempDir'));
    $::Quiet = 0 if $::Verbose;
    $cfg->load_globals_in_main();
    Flail::AddressBook->Load(cfg => $cfg);
    my $exec = Flail::Exec->new(cfg => $cfg);
    my $cli = Flail::CLI->new('cfg' => $cfg, 'exec' => $exec);
    $cli->init_signals();
    $cli->print_banner() unless $::Quiet;
    my $line = undef;
    $line = join(' ', @{$args->{'_'}}) if @{$args->{'_'}};
    while (!$::Interrupted) {
        $line = $cli->readline() unless defined($line);
        last unless defined($line);
        chomp($line);
        if (!length($line)) {
            $line = undef;
            next;
        }
        last if $exec->interpret($cli,$line) < 0;
        last if $::SingleCommand;
        $line = undef;
    }
    $exec->cleanup();
    $cli->cleanup();
    Flail::AddressBook->Checkpoint(cfg => $cfg);
    Flail::ConnectionCache->Clear(cfg => $cfg);
    exit(0);
}
 
__END__

 
=head1 NAME
 
name of program - one-line summary
 
=head1 SYNOPSIS
 
usage summary
 
=head1 DESCRIPTION
 
description of program
 
=head1 OPTIONS
 
=over 4
 
=item -verbose (or -v)
 
=item -verbosity=int (or -V=int)
 
The first form increments the verbosity level every time it is seen.
The second form sets the verbosity level to the integer specified.
Higher verbosity levels mean more output.
 
=item -quiet
 
Be quiet about everything but errors.
 
=item -help
 
Print a short usage message.  If you specify -verbose, you get this
man page.
 
=item -version (also -copyright)
 
=item -license
 
Print our version and copyright, or our license.
 
=back
 
=head1 VERSION HISTORY
 
B<Alice>: Well I must say I've never heard it that way before...
 
B<Caterpillar>: I know, I have improved it. 
 
Z<>
 
  0.1.0   01 Dec 06     snl     started on the ashes of flail1
 
=cut
 
##
# Local variables:
# mode: perl
# tab-width: 4
# perl-indent-level: 4
# cperl-indent-level: 4
# cperl-continued-statement-offset: 4
# indent-tabs-mode: nil
# comment-column: 40
# End:
##