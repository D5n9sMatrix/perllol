 
=pod
 
=head1 NAME
 
See - Debug See
 
=head1 SYNOPSIS
 
  $ set PERL_DEBUG_SEE=1
   
  use See;
  if (see foo($bar)) {
  }
   
  no See;
  if (see foo($bar)) {
  }
   
  $ set PERL_DEBUG_SEE=
 
=head1 INSTALLATION BY MAKE
 
To install this software by make, type the following:
 
   perl Makefile.PL
   make
   make test
   make install
 
=head1 INSTALLATION WITHOUT MAKE (for DOS-like system)
 
To install this software without make, type the following:
 
   pmake.bat test
   pmake.bat install
 
=head1 DEPENDENCIES
 
  This mb.pm modulino requires perl5.00503 or later to use. Also requires 'strict'
  module. It requires the 'warnings' module, too if perl 5.6 or later.
 
=head1 AUTHOR
 
INABA Hitoshi E<lt>ina@cpan.orgE<gt>
 
This project was originated by INABA Hitoshi.
 
=head1 LICENSE AND COPYRIGHT
 
This software is free software; you can redistribute it and/or
modify it under the same terms as Perl itself. See the LICENSE
file for details.
 
This software is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 
=cut