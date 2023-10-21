#ifdef EXE_DEBUG
#elif defined(EXE_DEBUG) && defined(EXE_DEBUG)
/****************************************************************************
**
** Copyright (C) 2017 Pier Luigi Fiorini <pierluigi.fiorini@gmail.com>
** Contact: https://www.qt.io/licensing/
**
** This file is part of the plugins of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see https://www.qt.io/terms-conditions. For further
** information use the contact form at https://www.qt.io/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 3 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL3 included in the
** packaging of this file. Please review the following information to
** ensure the GNU Lesser General Public License version 3 requirements
** will be met: https://www.gnu.org/licenses/lgpl-3.0.html.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 2.0 or (at your option) the GNU General
** Public license version 3 or any later version approved by the KDE Free
** Qt Foundation. The licenses are as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL2 and LICENSE.GPL3
** included in the packaging of this file. Please review the following
** information to ensure the GNU General Public License requirements will
** be met: https://www.gnu.org/licenses/gpl-2.0.html and
** https://www.gnu.org/licenses/gpl-3.0.html.
**
** $QT_END_LICENSE$
**
****************************************************************************/
/*
 * This lookup table was generated from https://github.com/vcrhonek/hwdata/raw/master/pnp.ids
 *
 * Do not change this file directly, instead edit the
 * qtbase/util/edid/qedidvendortable.py script and regenerate this file.
 */
#ifndef QEDIDVENDORTABLE_P_H
#define QEDIDVENDORTABLE_P_H
//
//  W A R N I N G
//  -------------
//
// This file is not part of the Qt API. It exists purely as an
// implementation detail. This header file may change from version to
// version without notice, or even be removed.
//
// We mean it.
//
QT_BEGIN_NAMESPACE
typedef struct VendorTable {
    const char id[4];
    const char name[78];
} VendorTable;
static const struct VendorTable q_edidVendorTable[] = {
    { "AAA", "Avolites Ltd" },
    { "AAE", "Anatek Electronics Inc." },
    { "AAT", "Ann Arbor Technologies" },
    { "ABA", "ABBAHOME INC." },
    { "ABC", "AboCom System Inc" },
    { "ABD", "Allen Bradley Company" },
    { "ABE", "Alcatel Bell" },
    { "ABO", "D-Link Systems Inc" },
    { "ABT", "Anchor Bay Technologies, Inc." },
    { "ABV", "Advanced Research Technology" },
    { "ACA", "Ariel Corporation" },
    { "ACB", "Aculab Ltd" },
    { "ACC", "Accton Technology Corporation" },
    { "ACD", "AWETA BV" },
    { "ACE", "Actek Engineering Pty Ltd" },
    { "ACG", "A&R Cambridge Ltd" },
    { "ACH", "Archtek Telecom Corporation" },
    { "ACI", "Ancor Communications Inc" },
    { "ACK", "Acksys" },
    { "ACL", "Apricot Computers" },
    { "ACM", "Acroloop Motion Control Systems Inc" },
    { "ACO", "Allion Computer Inc." },
    { "ACP", "Aspen Tech Inc" },
    { "ACR", "Acer Technologies" },
    { "ACS", "Altos Computer Systems" },
    { "ACT", "Applied Creative Technology" },
    { "ACU", "Acculogic" },
    { "ACV", "ActivCard S.A" },
    { "ADA", "Addi-Data GmbH" },
    { "ADB", "Aldebbaron" },
    { "ADC", "Acnhor Datacomm" },
    { "ADD", "Advanced Peripheral Devices Inc" },
    { "ADE", "Arithmos, Inc." },
    { "ADH", "Aerodata Holdings Ltd" },
    { "ADI", "ADI Systems Inc" },
    { "ADK", "Adtek System Science Company Ltd" },
    { "ADL", "ASTRA Security Products Ltd" },
    { "ADM", "Ad Lib MultiMedia Inc" },
    { "ADN", "Analog & Digital Devices Tel. Inc" },
    { "ADP", "Adaptec Inc" },
    { "ADR", "Nasa Ames Research Center" },
    { "ADS", "Analog Devices Inc" },
    { "ADT", "Aved Display Technologies" },
    { "ADV", "Advanced Micro Devices Inc" },
    { "ADX", "Adax Inc" },
    { "AEC", "Antex Electronics Corporation" },
    { "AED", "Advanced Electronic Designs, Inc." },
    { "AEI", "Actiontec Electric Inc" },
    { "AEJ", "Alpha Electronics Company" },
    { "AEM", "ASEM S.p.A." },
    { "AEN", "Avencall" },
    { "AEP", "Aetas Peripheral International" },
    { "AET", "Aethra Telecomunicazioni S.r.l." },
    { "AFA", "Alfa Inc" },
    { "AGC", "Beijing Aerospace Golden Card Electronic Engineering Co.,Ltd." },
    { "AGI", "Artish Graphics Inc" },
    { "AGL", "Argolis" },
    { "AGM", "Advan Int'l Corporation" },
    { "AGT", "Agilent Technologies" },
    { "AHC", "Advantech Co., Ltd." },
    { "AIC", "Arnos Insturments & Computer Systems" },
    { "AIE", "Altmann Industrieelektronik" },
    { "AII", "Amptron International Inc." },
    { "AIL", "Altos India Ltd" },
    { "AIM", "AIMS Lab Inc" },
    { "AIR", "Advanced Integ. Research Inc" },
    { "AIS", "Alien Internet Services" },
    { "AIW", "Aiwa Company Ltd" },
    { "AIX", "ALTINEX, INC." },
    { "AJA", "AJA Video Systems, Inc." },
    { "AKB", "Akebia Ltd" },
    { "AKE", "AKAMI Electric Co.,Ltd" },
    { "AKI", "AKIA Corporation" },
    { "AKL", "AMiT Ltd" },
    { "AKM", "Asahi Kasei Microsystems Company Ltd" },
    { "AKP", "Atom Komplex Prylad" },
    { "AKY", "Askey Computer Corporation" },
    { "ALA", "Alacron Inc" },
    { "ALC", "Altec Corporation" },
    { "ALD", "In4S Inc" },
    { "ALG", "Realtek Semiconductor Corp." },
    { "ALH", "AL Systems" },
    { "ALI", "Acer Labs" },
    { "ALJ", "Altec Lansing" },
    { "ALK", "Acrolink Inc" },
    { "ALL", "Alliance Semiconductor Corporation" },
    { "ALM", "Acutec Ltd." },
    { "ALN", "Alana Technologies" },
    { "ALO", "Algolith Inc." },
    { "ALP", "Alps Electric Company Ltd" },
    { "ALR", "Advanced Logic" },
    { "ALS", "Texas Advanced optoelectronics Solutions, Inc" },
    { "ALT", "Altra" },
    { "ALV", "AlphaView LCD" },
    { "ALX", "ALEXON Co.,Ltd." },
    { "AMA", "Asia Microelectronic Development Inc" },
    { "AMB", "Ambient Technologies, Inc." },
    { "AMC", "Attachmate Corporation" },
    { "AMD", "Amdek Corporation" },
    { "AMI", "American Megatrends Inc" },
    { "AML", "Anderson Multimedia Communications (HK) Limited" },
    { "AMN", "Amimon LTD." },
    { "AMO", "Amino Technologies PLC and Amino Communications Limited" },
    { "AMP", "AMP Inc" },
    { "AMS", "ARMSTEL, Inc." },
    { "AMT", "AMT International Industry" },
    { "AMX", "AMX LLC" },
    { "ANA", "Anakron" },
    { "ANC", "Ancot" },
    { "AND", "Adtran Inc" },
    { "ANI", "Anigma Inc" },
    { "ANK", "Anko Electronic Company Ltd" },
    { "ANL", "Analogix Semiconductor, Inc" },
    { "ANO", "Anorad Corporation" },
    { "ANP", "Andrew Network Production" },
    { "ANR", "ANR Ltd" },
    { "ANS", "Ansel Communication Company" },
    { "ANT", "Ace CAD Enterprise Company Ltd" },
    { "ANX", "Acer Netxus Inc" },
    { "AOA", "AOpen Inc." },
    { "AOE", "Advanced Optics Electronics, Inc." },
    { "AOL", "America OnLine" },
    { "AOT", "Alcatel" },
    { "APC", "American Power Conversion" },
    { "APD", "AppliAdata" },
    { "APE", "Alpine Electronics, Inc." },
    { "APG", "Horner Electric Inc" },
    { "API", "A Plus Info Corporation" },
    { "APL", "Aplicom Oy" },
    { "APM", "Applied Memory Tech" },
    { "APN", "Appian Tech Inc" },
    { "APP", "Apple Computer Inc" },
    { "APR", "Aprilia s.p.a." },
    { "APS", "Autologic Inc" },
    { "APT", "Audio Processing Technology Ltd" },
    { "APV", "A+V Link" },
    { "APX", "AP Designs Ltd" },
    { "ARC", "Alta Research Corporation" },
    { "ARE", "ICET S.p.A." },
    { "ARG", "Argus Electronics Co., LTD" },
    { "ARI", "Argosy Research Inc" },
    { "ARK", "Ark Logic Inc" },
    { "ARL", "Arlotto Comnet Inc" },
    { "ARM", "Arima" },
    { "ARO", "Poso International B.V." },
    { "ARS", "Arescom Inc" },
    { "ART", "Corion Industrial Corporation" },
    { "ASC", "Ascom Strategic Technology Unit" },
    { "ASD", "USC Information Sciences Institute" },
    { "ASE", "AseV Display Labs" },
    { "ASI", "Ahead Systems" },
    { "ASK", "Ask A/S" },
    { "ASL", "AccuScene Corporation Ltd" },
    { "ASM", "ASEM S.p.A." },
    { "ASN", "Asante Tech Inc" },
    { "ASP", "ASP Microelectronics Ltd" },
    { "AST", "AST Research Inc" },
    { "ASU", "Asuscom Network Inc" },
    { "ASX", "AudioScience" },
    { "ASY", "Rockwell Collins / Airshow Systems" },
    { "ATA", "Allied Telesyn International (Asia) Pte Ltd" },
    { "ATC", "Ably-Tech Corporation" },
    { "ATD", "Alpha Telecom Inc" },
    { "ATE", "Innovate Ltd" },
    { "ATH", "Athena Informatica S.R.L." },
    { "ATI", "Allied Telesis KK" },
    { "ATK", "Allied Telesyn Int'l" },
    { "ATL", "Arcus Technology Ltd" },
    { "ATM", "ATM Ltd" },
    { "ATN", "Athena Smartcard Solutions Ltd." },
    { "ATO", "ASTRO DESIGN, INC." },
    { "ATP", "Alpha-Top Corporation" },
    { "ATT", "AT&T" },
    { "ATV", "Office Depot, Inc." },
    { "ATX", "Athenix Corporation" },
    { "AUI", "Alps Electric Inc" },
    { "AUO", "AU Optronics" },
    { "AUR", "Aureal Semiconductor" },
    { "AUT", "Autotime Corporation" },
    { "AVA", "Avaya Communication" },
    { "AVC", "Auravision Corporation" },
    { "AVD", "Avid Electronics Corporation" },
    { "AVE", "Add Value Enterpises (Asia) Pte Ltd" },
    { "AVI", "Nippon Avionics Co.,Ltd" },
    { "AVL", "Avalue Technology Inc." },
    { "AVM", "AVM GmbH" },
    { "AVN", "Advance Computer Corporation" },
    { "AVO", "Avocent Corporation" },
    { "AVR", "AVer Information Inc." },
    { "AVT", "Avtek (Electronics) Pty Ltd" },
    { "AVV", "SBS Technologies (Canada), Inc. (was Avvida Systems, Inc.)" },
    { "AVX", "AVerMedia Technologies, Inc." },
    { "AWC", "Access Works Comm Inc" },
    { "AWL", "Aironet Wireless Communications, Inc" },
    { "AWS", "Wave Systems" },
    { "AXB", "Adrienne Electronics Corporation" },
    { "AXC", "AXIOMTEK CO., LTD." },
    { "AXE", "D-Link Systems Inc" },
    { "AXI", "American Magnetics" },
    { "AXL", "Axel" },
    { "AXO", "Axonic Labs LLC" },
    { "AXP", "American Express" },
    { "AXT", "Axtend Technologies Inc" },
    { "AXX", "Axxon Computer Corporation" },
    { "AXY", "AXYZ Automation Services, Inc" },
    { "AYD", "Aydin Displays" },
    { "AYR", "Airlib, Inc" },
    { "AZM", "AZ Middelheim - Radiotherapy" },
    { "AZT", "Aztech Systems Ltd" },
    { "BAC", "Biometric Access Corporation" },
    { "BAN", "Banyan" },
    { "BBB", "an-najah university" },
    { "BBH", "B&Bh" },
    { "BBL", "Brain Boxes Limited" },
    { "BCC", "Beaver Computer Corporaton" },
    { "BCD", "Barco GmbH" },
    { "BCM", "Broadcom" },
    { "BCQ", "Deutsche Telekom Berkom GmbH" },
    { "BCS", "Booria CAD/CAM systems" },
    { "BDO", "Brahler ICS" },
    { "BDR", "Blonder Tongue Labs, Inc." },
    { "BDS", "Barco Display Systems" },
    { "BEC", "Elektro Beckhoff GmbH" },
    { "BEI", "Beckworth Enterprises Inc" },
    { "BEK", "Beko Elektronik A.S." },
    { "BEL", "Beltronic Industrieelektronik GmbH" },
    { "BEO", "Baug & Olufsen" },
    { "BFE", "B.F. Engineering Corporation" },
    { "BGB", "Barco Graphics N.V" },
    { "BGT", "Budzetron Inc" },
    { "BHZ", "BitHeadz, Inc." },
    { "BIC", "Big Island Communications" },
    { "BII", "Boeckeler Instruments Inc" },
    { "BIL", "Billion Electric Company Ltd" },
    { "BIO", "BioLink Technologies International, Inc." },
    { "BIT", "Bit 3 Computer" },
    { "BLI", "Busicom" },
    { "BLN", "BioLink Technologies" },
    { "BLP", "Bloomberg L.P." },
    { "BMD", "Blackmagic Design" },
    { "BMI", "Benson Medical Instruments Company" },
    { "BML", "BIOMED Lab" },
    { "BMS", "BIOMEDISYS" },
    { "BNE", "Bull AB" },
    { "BNK", "Banksia Tech Pty Ltd" },
    { "BNO", "Bang & Olufsen" },
    { "BNS", "Boulder Nonlinear Systems" },
    { "BOB", "Rainy Orchard" },
    { "BOE", "BOE" },
    { "BOI", "NINGBO BOIGLE DIGITAL TECHNOLOGY CO.,LTD" },
    { "BOS", "BOS" },
    { "BPD", "Micro Solutions, Inc." },
    { "BPU", "Best Power" },
    { "BRA", "Braemac Pty Ltd" },
    { "BRC", "BARC" },
    { "BRG", "Bridge Information Co., Ltd" },
    { "BRI", "Boca Research Inc" },
    { "BRM", "Braemar Inc" },
    { "BRO", "BROTHER INDUSTRIES,LTD." },
    { "BSE", "Bose Corporation" },
    { "BSL", "Biomedical Systems Laboratory" },
    { "BSN", "BRIGHTSIGN, LLC" },
    { "BST", "BodySound Technologies, Inc." },
    { "BTC", "Bit 3 Computer" },
    { "BTE", "Brilliant Technology" },
    { "BTF", "Bitfield Oy" },
    { "BTI", "BusTech Inc" },
    { "BTO", "BioTao Ltd" },
    { "BUF", "Yasuhiko Shirai Melco Inc" },
    { "BUG", "B.U.G., Inc." },
    { "BUJ", "ATI Tech Inc" },
    { "BUL", "Bull" },
    { "BUR", "Bernecker & Rainer Ind-Eletronik GmbH" },
    { "BUS", "BusTek" },
    { "BUT", "21ST CENTURY ENTERTAINMENT" },
    { "BWK", "Bitworks Inc." },
    { "BXE", "Buxco Electronics" },
    { "BYD", "byd:sign corporation" },
    { "CAA", "Castles Automation Co., Ltd" },
    { "CAC", "CA & F Elettronica" },
    { "CAG", "CalComp" },
    { "CAI", "Canon Inc." },
    { "CAL", "Acon" },
    { "CAM", "Cambridge Audio" },
    { "CAN", "CORNEA" },
    { "CAR", "Cardinal Company Ltd" },
    { "CAS", "CASIO COMPUTER CO.,LTD" },
    { "CAT", "Consultancy in Advanced Technology" },
    { "CAV", "Cavium Networks, Inc" },
    { "CBI", "ComputerBoards Inc" },
    { "CBR", "Cebra Tech A/S" },
    { "CBT", "Cabletime Ltd" },
    { "CBX", "Cybex Computer Products Corporation" },
    { "CCC", "C-Cube Microsystems" },
    { "CCI", "Cache" },
    { "CCJ", "CONTEC CO.,LTD." },
    { "CCL", "CCL/ITRI" },
    { "CCP", "Capetronic USA Inc" },
    { "CDC", "Core Dynamics Corporation" },
    { "CDD", "Convergent Data Devices" },
    { "CDE", "Colin.de" },
    { "CDG", "Christie Digital Systems Inc" },
    { "CDI", "Concept Development Inc" },
    { "CDK", "Cray Communications" },
    { "CDN", "Codenoll Technical Corporation" },
    { "CDP", "CalComp" },
    { "CDS", "Computer Diagnostic Systems" },
    { "CDT", "IBM Corporation" },
    { "CDV", "Convergent Design Inc." },
    { "CEA", "Consumer Electronics Association" },
    { "CEC", "Chicony Electronics Company Ltd" },
    { "CED", "Cambridge Electronic Design Ltd" },
    { "CEF", "Cefar Digital Vision" },
    { "CEI", "Crestron Electronics, Inc." },
    { "CEM", "MEC Electronics GmbH" },
    { "CEN", "Centurion Technologies P/L" },
    { "CEP", "C-DAC" },
    { "CER", "Ceronix" },
    { "CET", "TEC CORPORATION" },
    { "CFG", "Atlantis" },
    { "CGA", "Chunghwa Picture Tubes, LTD" },
    { "CGS", "Chyron Corp" },
    { "CGT", "congatec AG" },
    { "CHA", "Chase Research PLC" },
    { "CHC", "Chic Technology Corp." },
    { "CHD", "ChangHong Electric Co.,Ltd" },
    { "CHE", "Acer Inc" },
    { "CHG", "Sichuan Changhong Electric CO, LTD." },
    { "CHI", "Chrontel Inc" },
    { "CHL", "Chloride-R&D" },
    { "CHM", "CHIC TECHNOLOGY CORP." },
    { "CHO", "Sichuang Changhong Corporation" },
    { "CHP", "CH Products" },
    { "CHS", "Agentur Chairos" },
    { "CHT", "Chunghwa Picture Tubes,LTD." },
    { "CHY", "Cherry GmbH" },
    { "CIC", "Comm. Intelligence Corporation" },
    { "CII", "Cromack Industries Inc" },
    { "CIL", "Citicom Infotech Private Limited" },
    { "CIN", "Citron GmbH" },
    { "CIP", "Ciprico Inc" },
    { "CIR", "Cirrus Logic Inc" },
    { "CIS", "Cisco Systems Inc" },
    { "CIT", "Citifax Limited" },
    { "CKC", "The Concept Keyboard Company Ltd" },
    { "CKJ", "Carina System Co., Ltd." },
    { "CLA", "Clarion Company Ltd" },
    { "CLD", "COMMAT L.t.d." },
    { "CLE", "Classe Audio" },
    { "CLG", "CoreLogic" },
    { "CLI", "Cirrus Logic Inc" },
    { "CLM", "CrystaLake Multimedia" },
    { "CLO", "Clone Computers" },
    { "CLT", "automated computer control systems" },
    { "CLV", "Clevo Company" },
    { "CLX", "CardLogix" },
    { "CMC", "CMC Ltd" },
    { "CMD", "Colorado MicroDisplay, Inc." },
    { "CMG", "Chenming Mold Ind. Corp." },
    { "CMI", "C-Media Electronics" },
    { "CMM", "Comtime GmbH" },
    { "CMN", "Chimei Innolux Corporation" },
    { "CMO", "Chi Mei Optoelectronics corp." },
    { "CMR", "Cambridge Research Systems Ltd" },
    { "CMS", "CompuMaster Srl" },
    { "CMX", "Comex Electronics AB" },
    { "CNB", "American Power Conversion" },
    { "CNC", "Alvedon Computers Ltd" },
    { "CNE", "Cine-tal" },
    { "CNI", "Connect Int'l A/S" },
    { "CNN", "Canon Inc" },
    { "CNT", "COINT Multimedia Systems" },
    { "COB", "COBY Electronics Co., Ltd" },
    { "COD", "CODAN Pty. Ltd." },
    { "COI", "Codec Inc." },
    { "COL", "Rockwell Collins, Inc." },
    { "COM", "Comtrol Corporation" },
    { "CON", "Contec Company Ltd" },
    { "COO", "coolux GmbH" },
    { "COR", "Corollary Inc" },
    { "COS", "CoStar Corporation" },
    { "COT", "Core Technology Inc" },
    { "COW", "Polycow Productions" },
    { "COX", "Comrex" },
    { "CPC", "Ciprico Inc" },
    { "CPD", "CompuAdd" },
    { "CPI", "Computer Peripherals Inc" },
    { "CPL", "Compal Electronics Inc" },
    { "CPM", "Capella Microsystems Inc." },
    { "CPQ", "Compaq Computer Company" },
    { "CPT", "cPATH" },
    { "CPX", "Powermatic Data Systems" },
    { "CRC", "CONRAC GmbH" },
    { "CRD", "Cardinal Technical Inc" },
    { "CRE", "Creative Labs Inc" },
    { "CRI", "Crio Inc." },
    { "CRL", "Creative Logic" },
    { "CRN", "Cornerstone Imaging" },
    { "CRO", "Extraordinary Technologies PTY Limited" },
    { "CRQ", "Cirque Corporation" },
    { "CRS", "Crescendo Communication Inc" },
    { "CRV", "Cerevo Inc." },
    { "CRX", "Cyrix Corporation" },
    { "CSB", "Transtex SA" },
    { "CSC", "Crystal Semiconductor" },
    { "CSD", "Cresta Systems Inc" },
    { "CSE", "Concept Solutions & Engineering" },
    { "CSI", "Cabletron System Inc" },
    { "CSM", "Cosmic Engineering Inc." },
    { "CSO", "California Institute of Technology" },
    { "CSS", "CSS Laboratories" },
    { "CST", "CSTI Inc" },
    { "CTA", "CoSystems Inc" },
    { "CTC", "CTC Communication Development Company Ltd" },
    { "CTE", "Chunghwa Telecom Co., Ltd." },
    { "CTL", "Creative Technology Ltd" },
    { "CTM", "Computerm Corporation" },
    { "CTN", "Computone Products" },
    { "CTP", "Computer Technology Corporation" },
    { "CTS", "Comtec Systems Co., Ltd." },
    { "CTX", "Creatix Polymedia GmbH" },
    { "CUB", "Cubix Corporation" },
    { "CUK", "Calibre UK Ltd" },
    { "CVA", "Covia Inc." },
    { "CVI", "Colorado Video, Inc." },
    { "CVS", "Clarity Visual Systems" },
    { "CWR", "Connectware Inc" },
    { "CXT", "Conexant Systems" },
    { "CYB", "CyberVision" },
    { "CYC", "Cylink Corporation" },
    { "CYD", "Cyclades Corporation" },
    { "CYL", "Cyberlabs" },
    { "CYT", "Cytechinfo Inc" },
    { "CYV", "Cyviz AS" },
    { "CYW", "Cyberware" },
    { "CYX", "Cyrix Corporation" },
    { "CZE", "Carl Zeiss AG" },
    { "DAC", "Digital Acoustics Corporation" },
    { "DAE", "Digatron Industrie Elektronik GmbH" },
    { "DAI", "DAIS SET Ltd." },
    { "DAK", "Daktronics" },
    { "DAL", "Digital Audio Labs Inc" },
    { "DAN", "Danelec Marine A/S" },
    { "DAS", "DAVIS AS" },
    { "DAT", "Datel Inc" },
    { "DAU", "Daou Tech Inc" },
    { "DAV", "Davicom Semiconductor Inc" },
    { "DAW", "DA2 Technologies Inc" },
    { "DAX", "Data Apex Ltd" },
    { "DBD", "Diebold Inc." },
    { "DBI", "DigiBoard Inc" },
    { "DBK", "Databook Inc" },
    { "DBL", "Doble Engineering Company" },
    { "DBN", "DB Networks Inc" },
    { "DCA", "Digital Communications Association" },
    { "DCC", "Dale Computer Corporation" },
    { "DCD", "Datacast LLC" },
    { "DCE", "dSPACE GmbH" },
    { "DCI", "Concepts Inc" },
    { "DCL", "Dynamic Controls Ltd" },
    { "DCM", "DCM Data Products" },
    { "DCO", "Dialogue Technology Corporation" },
    { "DCR", "Decros Ltd" },
    { "DCS", "Diamond Computer Systems Inc" },
    { "DCT", "Dancall Telecom A/S" },
    { "DCV", "Datatronics Technology Inc" },
    { "DDA", "DA2 Technologies Corporation" },
    { "DDD", "Danka Data Devices" },
    { "DDE", "Datasat Digital Entertainment" },
    { "DDI", "Data Display AG" },
    { "DDS", "Barco, n.v." },
    { "DDT", "Datadesk Technologies Inc" },
    { "DDV", "Delta Information Systems, Inc" },
    { "DEC", "Digital Equipment Corporation" },
    { "DEI", "Deico Electronics" },
    { "DEL", "Dell Inc." },
    { "DEN", "Densitron Computers Ltd" },
    { "DEX", "idex displays" },
    { "DFI", "DFI" },
    { "DFK", "SharkTec A/S" },
    { "DFT", "DEI Holdings dba Definitive Technology" },
    { "DGA", "Digiital Arts Inc" },
    { "DGC", "Data General Corporation" },
    { "DGI", "DIGI International" },
    { "DGK", "DugoTech Co., LTD" },
    { "DGP", "Digicorp European sales S.A." },
    { "DGS", "Diagsoft Inc" },
    { "DGT", "The Dearborn Group" },
    { "DHP", "DH Print" },
    { "DHQ", "Quadram" },
    { "DHT", "Projectavision Inc" },
    { "DIA", "Diadem" },
    { "DIG", "Digicom S.p.A." },
    { "DII", "Dataq Instruments Inc" },
    { "DIM", "dPict Imaging, Inc." },
    { "DIN", "Daintelecom Co., Ltd" },
    { "DIS", "Diseda S.A." },
    { "DIT", "Dragon Information Technology" },
    { "DJE", "Capstone Visual Product Development" },
    { "DJP", "Maygay Machines, Ltd" },
    { "DKY", "Datakey Inc" },
    { "DLB", "Dolby Laboratories Inc." },
    { "DLC", "Diamond Lane Comm. Corporation" },
    { "DLG", "Digital-Logic GmbH" },
    { "DLK", "D-Link Systems Inc" },
    { "DLL", "Dell Inc" },
    { "DLT", "Digitelec Informatique Park Cadera" },
    { "DMB", "Digicom Systems Inc" },
    { "DMC", "Dune Microsystems Corporation" },
    { "DMM", "Dimond Multimedia Systems Inc" },
    { "DMP", "D&M Holdings Inc, Professional Business Company" },
    { "DMS", "DOME imaging systems" },
    { "DMT", "Distributed Management Task Force, Inc. (DMTF)" },
    { "DMV", "NDS Ltd" },
    { "DNA", "DNA Enterprises, Inc." },
    { "DNG", "Apache Micro Peripherals Inc" },
    { "DNI", "Deterministic Networks Inc." },
    { "DNT", "Dr. Neuhous Telekommunikation GmbH" },
    { "DNV", "DiCon" },
    { "DOL", "Dolman Technologies Group Inc" },
    { "DOM", "Dome Imaging Systems" },
    { "DON", "DENON, Ltd." },
    { "DOT", "Dotronic Mikroelektronik GmbH" },
    { "DPA", "DigiTalk Pro AV" },
    { "DPC", "Delta Electronics Inc" },
    { "DPI", "DocuPoint" },
    { "DPL", "Digital Projection Limited" },
    { "DPM", "ADPM Synthesis sas" },
    { "DPS", "Digital Processing Systems" },
    { "DPT", "DPT" },
    { "DPX", "DpiX, Inc." },
    { "DQB", "Datacube Inc" },
    { "DRB", "Dr. Bott KG" },
    { "DRC", "Data Ray Corp." },
    { "DRD", "DIGITAL REFLECTION INC." },
    { "DRI", "Data Race Inc" },
    { "DRS", "DRS Defense Solutions, LLC" },
    { "DSD", "DS Multimedia Pte Ltd" },
    { "DSI", "Digitan Systems Inc" },
    { "DSM", "DSM Digital Services GmbH" },
    { "DSP", "Domain Technology Inc" },
    { "DTA", "DELTATEC" },
    { "DTC", "DTC Tech Corporation" },
    { "DTE", "Dimension Technologies, Inc." },
    { "DTI", "Diversified Technology, Inc." },
    { "DTK", "Dynax Electronics (HK) Ltd" },
    { "DTL", "e-Net Inc" },
    { "DTN", "Datang Telephone Co" },
    { "DTO", "Deutsche Thomson OHG" },
    { "DTT", "Design & Test Technology, Inc." },
    { "DTX", "Data Translation" },
    { "DUA", "Dosch & Amand GmbH & Company KG" },
    { "DUN", "NCR Corporation" },
    { "DVD", "Dictaphone Corporation" },
    { "DVL", "Devolo AG" },
    { "DVS", "Digital Video System" },
    { "DVT", "Data Video" },
    { "DWE", "Daewoo Electronics Company Ltd" },
    { "DXC", "Digipronix Control Systems" },
    { "DXD", "DECIMATOR DESIGN PTY LTD" },
    { "DXL", "Dextera Labs Inc" },
    { "DXP", "Data Expert Corporation" },
    { "DXS", "Signet" },
    { "DYC", "Dycam Inc" },
    { "DYM", "Dymo-CoStar Corporation" },
    { "DYN", "Askey Computer Corporation" },
    { "DYX", "Dynax Electronics (HK) Ltd" },
    { "EAS", "Evans and Sutherland Computer" },
    { "EBH", "Data Price Informatica" },
    { "EBT", "HUALONG TECHNOLOGY CO., LTD" },
    { "ECA", "Electro Cam Corp." },
    { "ECC", "ESSential Comm. Corporation" },
    { "ECI", "Enciris Technologies" },
    { "ECK", "Eugene Chukhlomin Sole Proprietorship, d.b.a." },
    { "ECL", "Excel Company Ltd" },
    { "ECM", "E-Cmos Tech Corporation" },
    { "ECO", "Echo Speech Corporation" },
    { "ECP", "Elecom Company Ltd" },
    { "ECS", "Elitegroup Computer Systems Company Ltd" },
    { "ECT", "Enciris Technologies" },
    { "EDC", "e.Digital Corporation" },
    { "EDG", "Electronic-Design GmbH" },
    { "EDI", "Edimax Tech. Company Ltd" },
    { "EDM", "EDMI" },
    { "EDT", "Emerging Display Technologies Corp" },
    { "EEE", "ET&T Technology Company Ltd" },
    { "EEH", "EEH Datalink GmbH" },
    { "EEP", "E.E.P.D. GmbH" },
    { "EES", "EE Solutions, Inc." },
    { "EGA", "Elgato Systems LLC" },
    { "EGD", "EIZO GmbH Display Technologies" },
    { "EGL", "Eagle Technology" },
    { "EGN", "Egenera, Inc." },
    { "EGO", "Ergo Electronics" },
    { "EHJ", "Epson Research" },
    { "EHN", "Enhansoft" },
    { "EIC", "Eicon Technology Corporation" },
    { "EKA", "MagTek Inc." },
    { "EKC", "Eastman Kodak Company" },
    { "EKS", "EKSEN YAZILIM" },
    { "ELA", "ELAD srl" },
    { "ELC", "Electro Scientific Ind" },
    { "ELE", "Elecom Company Ltd" },
    { "ELG", "Elmeg GmbH Kommunikationstechnik" },
    { "ELI", "Edsun Laboratories" },
    { "ELL", "Electrosonic Ltd" },
    { "ELM", "Elmic Systems Inc" },
    { "ELO", "Tyco Electronics" },
    { "ELS", "ELSA GmbH" },
    { "ELT", "Element Labs, Inc." },
    { "ELX", "Elonex PLC" },
    { "EMB", "Embedded computing inc ltd" },
    { "EMC", "eMicro Corporation" },
    { "EME", "EMiNE TECHNOLOGY COMPANY, LTD." },
    { "EMG", "EMG Consultants Inc" },
    { "EMI", "Ex Machina Inc" },
    { "EMK", "Emcore Corporation" },
    { "EMO", "ELMO COMPANY, LIMITED" },
    { "EMU", "Emulex Corporation" },
    { "ENC", "Eizo Nanao Corporation" },
    { "END", "ENIDAN Technologies Ltd" },
    { "ENE", "ENE Technology Inc." },
    { "ENI", "Efficient Networks" },
    { "ENS", "Ensoniq Corporation" },
    { "ENT", "Enterprise Comm. & Computing Inc" },
    { "EPC", "Empac" },
    { "EPH", "Epiphan Systems Inc." },
    { "EPI", "Envision Peripherals, Inc" },
    { "EPN", "EPiCON Inc." },
    { "EPS", "KEPS" },
    { "EQP", "Equipe Electronics Ltd." },
    { "EQX", "Equinox Systems Inc" },
    { "ERG", "Ergo System" },
    { "ERI", "Ericsson Mobile Communications AB" },
    { "ERN", "Ericsson, Inc." },
    { "ERP", "Euraplan GmbH" },
    { "ERT", "Escort Insturments Corporation" },
    { "ESA", "Elbit Systems of America" },
    { "ESC", "Eden Sistemas de Computacao S/A" },
    { "ESD", "Ensemble Designs, Inc" },
    { "ESG", "ELCON Systemtechnik GmbH" },
    { "ESI", "Extended Systems, Inc." },
    { "ESK", "ES&S" },
    { "ESL", "Esterline Technologies" },
    { "ESN", "eSATURNUS" },
    { "ESS", "ESS Technology Inc" },
    { "EST", "Embedded Solution Technology" },
    { "ESY", "E-Systems Inc" },
    { "ETC", "Everton Technology Company Ltd" },
    { "ETD", "ELAN MICROELECTRONICS CORPORATION" },
    { "ETH", "Etherboot Project" },
    { "ETI", "Eclipse Tech Inc" },
    { "ETK", "eTEK Labs Inc." },
    { "ETL", "Evertz Microsystems Ltd." },
    { "ETS", "Electronic Trade Solutions Ltd" },
    { "ETT", "E-Tech Inc" },
    { "EUT", "Ericsson Mobile Networks B.V." },
    { "EVE", "Advanced Micro Peripherals Ltd" },
    { "EVI", "eviateg GmbH" },
    { "EVX", "Everex" },
    { "EXA", "Exabyte" },
    { "EXC", "Excession Audio" },
    { "EXI", "Exide Electronics" },
    { "EXN", "RGB Systems, Inc. dba Extron Electronics" },
    { "EXP", "Data Export Corporation" },
    { "EXT", "Exatech Computadores & Servicos Ltda" },
    { "EXX", "Exxact GmbH" },
    { "EXY", "Exterity Ltd" },
    { "EYE", "eyevis GmbH" },
    { "EZE", "EzE Technologies" },
    { "EZP", "Storm Technology" },
    { "FAR", "Farallon Computing" },
    { "FBI", "Interface Corporation" },
    { "FCB", "Furukawa Electric Company Ltd" },
    { "FCG", "First International Computer Ltd" },
    { "FCS", "Focus Enhancements, Inc." },
    { "FDC", "Future Domain" },
    { "FDT", "Fujitsu Display Technologies Corp." },
    { "FEC", "FURUNO ELECTRIC CO., LTD." },
    { "FEL", "Fellowes & Questec" },
    { "FEN", "Fen Systems Ltd." },
    { "FER", "Ferranti Int'L" },
    { "FFC", "FUJIFILM Corporation" },
    { "FFI", "Fairfield Industries" },
    { "FGD", "Lisa Draexlmaier GmbH" },
    { "FGL", "Fujitsu General Limited." },
    { "FHL", "FHLP" },
    { "FIC", "Formosa Industrial Computing Inc" },
    { "FIL", "Forefront Int'l Ltd" },
    { "FIN", "Finecom Co., Ltd." },
    { "FIR", "Chaplet Systems Inc" },
    { "FIS", "FLY-IT Simulators" },
    { "FIT", "Feature Integration Technology Inc." },
    { "FJC", "Fujitsu Takamisawa Component Limited" },
    { "FJS", "Fujitsu Spain" },
    { "FJT", "F.J. Tieman BV" },
    { "FLE", "ADTI Media, Inc" },
    { "FLI", "Faroudja Laboratories" },
    { "FLY", "Butterfly Communications" },
    { "FMA", "Fast Multimedia AG" },
    { "FMC", "Ford Microelectronics Inc" },
    { "FMI", "Fujitsu Microelect Inc" },
    { "FML", "Fujitsu Microelect Ltd" },
    { "FMZ", "Formoza-Altair" },
    { "FNC", "Fanuc LTD" },
    { "FNI", "Funai Electric Co., Ltd." },
    { "FOA", "FOR-A Company Limited" },
    { "FOS", "Foss Tecator" },
    { "FOX", "HON HAI PRECISON IND.CO.,LTD." },
    { "FPE", "Fujitsu Peripherals Ltd" },
    { "FPS", "Deltec Corporation" },
    { "FPX", "Cirel Systemes" },
    { "FRC", "Force Computers" },
    { "FRD", "Freedom Scientific BLV" },
    { "FRE", "Forvus Research Inc" },
    { "FRI", "Fibernet Research Inc" },
    { "FRO", "FARO Technologies" },
    { "FRS", "South Mountain Technologies, LTD" },
    { "FSC", "Future Systems Consulting KK" },
    { "FSI", "Fore Systems Inc" },
    { "FST", "Modesto PC Inc" },
    { "FTC", "Futuretouch Corporation" },
    { "FTE", "Frontline Test Equipment Inc." },
    { "FTG", "FTG Data Systems" },
    { "FTI", "FastPoint Technologies, Inc." },
    { "FTL", "FUJITSU TEN LIMITED" },
    { "FTN", "Fountain Technologies Inc" },
    { "FTR", "Mediasonic" },
    { "FTW", "MindTribe Product Engineering, Inc." },
    { "FUJ", "Fujitsu Ltd" },
    { "FUN", "sisel muhendislik" },
    { "FUS", "Fujitsu Siemens Computers GmbH" },
    { "FVC", "First Virtual Corporation" },
    { "FVX", "C-C-C Group Plc" },
    { "FWA", "Attero Tech, LLC" },
    { "FWR", "Flat Connections Inc" },
    { "FXX", "Fuji Xerox" },
    { "FZC", "Founder Group Shenzhen Co." },
    { "FZI", "FZI Forschungszentrum Informatik" },
    { "GAG", "Gage Applied Sciences Inc" },
    { "GAL", "Galil Motion Control" },
    { "GAU", "Gaudi Co., Ltd." },
    { "GCC", "GCC Technologies Inc" },
    { "GCI", "Gateway Comm. Inc" },
    { "GCS", "Grey Cell Systems Ltd" },
    { "GDC", "General Datacom" },
    { "GDI", "G. Diehl ISDN GmbH" },
    { "GDS", "GDS" },
    { "GDT", "Vortex Computersysteme GmbH" },
    { "GED", "General Dynamics C4 Systems" },
    { "GEF", "GE Fanuc Embedded Systems" },
    { "GEH", "GE Intelligent Platforms - Huntsville" },
    { "GEM", "Gem Plus" },
    { "GEN", "Genesys ATE Inc" },
    { "GEO", "GEO Sense" },
    { "GER", "GERMANEERS GmbH" },
    { "GES", "GES Singapore Pte Ltd" },
    { "GET", "Getac Technology Corporation" },
    { "GFM", "GFMesstechnik GmbH" },
    { "GFN", "Gefen Inc." },
    { "GGL", "Google Inc." },
    { "GIC", "General Inst. Corporation" },
    { "GIM", "Guillemont International" },
    { "GIP", "GI Provision Ltd" },
    { "GIS", "AT&T Global Info Solutions" },
    { "GJN", "Grand Junction Networks" },
    { "GLD", "Goldmund - Digital Audio SA" },
    { "GLE", "AD electronics" },
    { "GLM", "Genesys Logic" },
    { "GLS", "Gadget Labs LLC" },
    { "GMK", "GMK Electronic Design GmbH" },
    { "GML", "General Information Systems" },
    { "GMM", "GMM Research Inc" },
    { "GMN", "GEMINI 2000 Ltd" },
    { "GMX", "GMX Inc" },
    { "GND", "Gennum Corporation" },
    { "GNN", "GN Nettest Inc" },
    { "GNZ", "Gunze Ltd" },
    { "GRA", "Graphica Computer" },
    { "GRE", "GOLD RAIN ENTERPRISES CORP." },
    { "GRH", "Granch Ltd" },
    { "GRM", "Garmin International" },
    { "GRV", "Advanced Gravis" },
    { "GRY", "Robert Gray Company" },
    { "GSB", "NIPPONDENCHI CO,.LTD" },
    { "GSC", "General Standards Corporation" },
    { "GSM", "LG Electronics" },
    { "GST", "Graphic SystemTechnology" },
    { "GSY", "Grossenbacher Systeme AG" },
    { "GTC", "Graphtec Corporation" },
    { "GTI", "Goldtouch" },
    { "GTK", "G-Tech Corporation" },
    { "GTM", "Garnet System Company Ltd" },
    { "GTS", "Geotest Marvin Test Systems Inc" },
    { "GTT", "General Touch Technology Co., Ltd." },
    { "GUD", "Guntermann & Drunck GmbH" },
    { "GUZ", "Guzik Technical Enterprises" },
    { "GVC", "GVC Corporation" },
    { "GVL", "Global Village Communication" },
    { "GWI", "GW Instruments" },
    { "GWY", "Gateway 2000" },
    { "GZE", "GUNZE Limited" },
    { "HAE", "Haider electronics" },
    { "HAI", "Haivision Systems Inc." },
    { "HAL", "Halberthal" },
    { "HAN", "Hanchang System Corporation" },
    { "HAR", "Harris Corporation" },
    { "HAY", "Hayes Microcomputer Products Inc" },
    { "HCA", "DAT" },
    { "HCE", "Hitachi Consumer Electronics Co., Ltd" },
    { "HCL", "HCL America Inc" },
    { "HCM", "HCL Peripherals" },
    { "HCP", "Hitachi Computer Products Inc" },
    { "HCW", "Hauppauge Computer Works Inc" },
    { "HDC", "HardCom Elektronik & Datateknik" },
    { "HDI", "HD-INFO d.o.o." },
    { "HDV", "Holografika kft." },
    { "HEC", "Hitachi Engineering Company Ltd" },
    { "HEL", "Hitachi Micro Systems Europe Ltd" },
    { "HER", "Ascom Business Systems" },
    { "HET", "HETEC Datensysteme GmbH" },
    { "HHC", "HIRAKAWA HEWTECH CORP." },
    { "HHI", "Fraunhofer Heinrich-Hertz-Institute" },
    { "HIB", "Hibino Corporation" },
    { "HIC", "Hitachi Information Technology Co., Ltd." },
    { "HIK", "Hikom Co., Ltd." },
    { "HIL", "Hilevel Technology" },
    { "HIQ", "Kaohsiung Opto Electronics Americas, Inc." },
    { "HIT", "Hitachi America Ltd" },
    { "HJI", "Harris & Jeffries Inc" },
    { "HKA", "HONKO MFG. CO., LTD." },
    { "HKG", "Josef Heim KG" },
    { "HMC", "Hualon Microelectric Corporation" },
    { "HMK", "hmk Daten-System-Technik BmbH" },
    { "HMX", "HUMAX Co., Ltd." },
    { "HNS", "Hughes Network Systems" },
    { "HOB", "HOB Electronic GmbH" },
    { "HOE", "Hosiden Corporation" },
    { "HOL", "Holoeye Photonics AG" },
    { "HON", "Sonitronix" },
    { "HPA", "Zytor Communications" },
    { "HPC", "Hewlett Packard Co." },
    { "HPD", "Hewlett Packard" },
    { "HPI", "Headplay, Inc." },
    { "HPK", "HAMAMATSU PHOTONICS K.K." },
    { "HPQ", "HP" },
    { "HPR", "H.P.R. Electronics GmbH" },
    { "HRC", "Hercules" },
    { "HRE", "Qingdao Haier Electronics Co., Ltd." },
    { "HRI", "Hall Research" },
    { "HRL", "Herolab GmbH" },
    { "HRS", "Harris Semiconductor" },
    { "HRT", "HERCULES" },
    { "HSC", "Hagiwara Sys-Com Company Ltd" },
    { "HSD", "HannStar Display Corp" },
    { "HSM", "AT&T Microelectronics" },
    { "HSP", "HannStar Display Corp" },
    { "HTC", "Hitachi Ltd" },
    { "HTI", "Hampshire Company, Inc." },
    { "HTK", "Holtek Microelectronics Inc" },
    { "HTX", "Hitex Systementwicklung GmbH" },
    { "HUB", "GAI-Tronics, A Hubbell Company" },
    { "HUM", "IMP Electronics Ltd." },
    { "HWA", "Harris Canada Inc" },
    { "HWC", "DBA Hans Wedemeyer" },
    { "HWD", "Highwater Designs Ltd" },
    { "HWP", "Hewlett Packard" },
    { "HXM", "Hexium Ltd." },
    { "HYC", "Hypercope Gmbh Aachen" },
    { "HYD", "Hydis Technologies.Co.,LTD" },
    { "HYO", "HYC CO., LTD." },
    { "HYP", "Hyphen Ltd" },
    { "HYR", "Hypertec Pty Ltd" },
    { "HYT", "Heng Yu Technology (HK) Limited" },
    { "HYV", "Hynix Semiconductor" },
    { "IAF", "Institut f r angewandte Funksystemtechnik GmbH" },
    { "IAI", "Integration Associates, Inc." },
    { "IAT", "IAT Germany GmbH" },
    { "IBC", "Integrated Business Systems" },
    { "IBI", "INBINE.CO.LTD" },
    { "IBM", "IBM France" },
    { "IBP", "IBP Instruments GmbH" },
    { "IBR", "IBR GmbH" },
    { "ICA", "ICA Inc" },
    { "ICC", "BICC Data Networks Ltd" },
    { "ICD", "ICD Inc" },
    { "ICE", "IC Ensemble" },
    { "ICI", "Infotek Communication Inc" },
    { "ICM", "Intracom SA" },
    { "ICN", "Sanyo Icon" },
    { "ICO", "Intel Corp" },
    { "ICP", "ICP Electronics, Inc./iEi Technology Corp." },
    { "ICS", "Integrated Circuit Systems" },
    { "ICV", "Inside Contactless" },
    { "ICX", "ICCC A/S" },
    { "IDC", "International Datacasting Corporation" },
    { "IDE", "IDE Associates" },
    { "IDK", "IDK Corporation" },
    { "IDN", "Idneo Technologies" },
    { "IDO", "IDEO Product Development" },
    { "IDP", "Integrated Device Technology, Inc." },
    { "IDS", "Interdigital Sistemas de Informacao" },
    { "IDT", "International Display Technology" },
    { "IDX", "IDEXX Labs" },
    { "IEC", "Interlace Engineering Corporation" },
    { "IEE", "IEE" },
    { "IEI", "Interlink Electronics" },
    { "IFS", "In Focus Systems Inc" },
    { "IFT", "Informtech" },
    { "IFX", "Infineon Technologies AG" },
    { "IFZ", "Infinite Z" },
    { "IGC", "Intergate Pty Ltd" },
    { "IGM", "IGM Communi" },
    { "IHE", "InHand Electronics" },
    { "IIC", "ISIC Innoscan Industrial Computers A/S" },
    { "III", "Intelligent Instrumentation" },
    { "IIN", "IINFRA Co., Ltd" },
    { "IKS", "Ikos Systems Inc" },
    { "ILC", "Image Logic Corporation" },
    { "ILS", "Innotech Corporation" },
    { "IMA", "Imagraph" },
    { "IMB", "ART s.r.l." },
    { "IMC", "IMC Networks" },
    { "IMD", "ImasDe Canarias S.A." },
    { "IME", "Imagraph" },
    { "IMG", "IMAGENICS Co., Ltd." },
    { "IMI", "International Microsystems Inc" },
    { "IMM", "Immersion Corporation" },
    { "IMN", "Impossible Production" },
    { "IMP", "Impression Products Incorporated" },
    { "IMT", "Inmax Technology Corporation" },
    { "INC", "Home Row Inc" },
    { "IND", "ILC" },
    { "INE", "Inventec Electronics (M) Sdn. Bhd." },
    { "INF", "Inframetrics Inc" },
    { "ING", "Integraph Corporation" },
    { "INI", "Initio Corporation" },
    { "INK", "Indtek Co., Ltd." },
    { "INL", "InnoLux Display Corporation" },
    { "INM", "InnoMedia Inc" },
    { "INN", "Innovent Systems, Inc." },
    { "INO", "Innolab Pte Ltd" },
    { "INP", "Interphase Corporation" },
    { "INS", "Ines GmbH" },
    { "INT", "Interphase Corporation" },
    { "INU", "Inovatec S.p.A." },
    { "INV", "Inviso, Inc." },
    { "INX", "Communications Supply Corporation (A division of WESCO)" },
    { "INZ", "Best Buy" },
    { "IOA", "CRE Technology Corporation" },
    { "IOD", "I-O Data Device Inc" },
    { "IOM", "Iomega" },
    { "ION", "Inside Out Networks" },
    { "IOS", "i-O Display System" },
    { "IOT", "I/OTech Inc" },
    { "IPC", "IPC Corporation" },
    { "IPD", "Industrial Products Design, Inc." },
    { "IPI", "Intelligent Platform Management Interface (IPMI) forum (Intel, HP, NEC, Dell)" },
    { "IPM", "IPM Industria Politecnica Meridionale SpA" },
    { "IPN", "Performance Technologies" },
    { "IPP", "IP Power Technologies GmbH" },
    { "IPR", "Ithaca Peripherals" },
    { "IPS", "IPS, Inc. (Intellectual Property Solutions, Inc.)" },
    { "IPT", "International Power Technologies" },
    { "IPW", "IPWireless, Inc" },
    { "IQI", "IneoQuest Technologies, Inc" },
    { "IQT", "IMAGEQUEST Co., Ltd" },
    { "IRD", "IRdata" },
    { "ISA", "Symbol Technologies" },
    { "ISC", "Id3 Semiconductors" },
    { "ISG", "Insignia Solutions Inc" },
    { "ISI", "Interface Solutions" },
    { "ISL", "Isolation Systems" },
    { "ISM", "Image Stream Medical" },
    { "ISP", "IntreSource Systems Pte Ltd" },
    { "ISR", "INSIS Co., LTD." },
    { "ISS", "ISS Inc" },
    { "IST", "Intersolve Technologies" },
    { "ISY", "International Integrated Systems,Inc.(IISI)" },
    { "ITA", "Itausa Export North America" },
    { "ITC", "Intercom Inc" },
    { "ITD", "Internet Technology Corporation" },
    { "ITE", "Integrated Tech Express Inc" },
    { "ITK", "ITK Telekommunikation AG" },
    { "ITL", "Inter-Tel" },
    { "ITM", "ITM inc." },
    { "ITN", "The NTI Group" },
    { "ITP", "IT-PRO Consulting und Systemhaus GmbH" },
    { "ITR", "Infotronic America, Inc." },
    { "ITS", "IDTECH" },
    { "ITT", "I&T Telecom." },
    { "ITX", "integrated Technology Express Inc" },
    { "IUC", "ICSL" },
    { "IVI", "Intervoice Inc" },
    { "IVM", "Iiyama North America" },
    { "IVS", "Intevac Photonics Inc." },
    { "IWR", "Icuiti Corporation" },
    { "IWX", "Intelliworxx, Inc." },
    { "IXD", "Intertex Data AB" },
    { "JAC", "Astec Inc" },
    { "JAE", "Japan Aviation Electronics Industry, Limited" },
    { "JAS", "Janz Automationssysteme AG" },
    { "JAT", "Jaton Corporation" },
    { "JAZ", "Carrera Computer Inc" },
    { "JCE", "Jace Tech Inc" },
    { "JDL", "Japan Digital Laboratory Co.,Ltd." },
    { "JEN", "N-Vision" },
    { "JET", "JET POWER TECHNOLOGY CO., LTD." },
    { "JFX", "Jones Futurex Inc" },
    { "JGD", "University College" },
    { "JIC", "Jaeik Information & Communication Co., Ltd." },
    { "JKC", "JVC KENWOOD Corporation" },
    { "JMT", "Micro Technical Company Ltd" },
    { "JPC", "JPC Technology Limited" },
    { "JPW", "Wallis Hamilton Industries" },
    { "JQE", "CNet Technical Inc" },
    { "JSD", "JS DigiTech, Inc" },
    { "JSI", "Jupiter Systems, Inc." },
    { "JSK", "SANKEN ELECTRIC CO., LTD" },
    { "JTS", "JS Motorsports" },
    { "JTY", "jetway security micro,inc" },
    { "JUK", "Janich & Klass Computertechnik GmbH" },
    { "JUP", "Jupiter Systems" },
    { "JVC", "JVC" },
    { "JWD", "Video International Inc." },
    { "JWL", "Jewell Instruments, LLC" },
    { "JWS", "JWSpencer & Co." },
    { "JWY", "Jetway Information Co., Ltd" },
    { "KAR", "Karna" },
    { "KBI", "Kidboard Inc" },
    { "KBL", "Kobil Systems GmbH" },
    { "KCD", "Chunichi Denshi Co.,LTD." },
    { "KCL", "Keycorp Ltd" },
    { "KDE", "KDE" },
    { "KDK", "Kodiak Tech" },
    { "KDM", "Korea Data Systems Co., Ltd." },
    { "KDS", "KDS USA" },
    { "KDT", "KDDI Technology Corporation" },
    { "KEC", "Kyushu Electronics Systems Inc" },
    { "KEM", "Kontron Embedded Modules GmbH" },
    { "KES", "Kesa Corporation" },
    { "KEY", "Key Tech Inc" },
    { "KFC", "SCD Tech" },
    { "KFE", "Komatsu Forest" },
    { "KFX", "Kofax Image Products" },
    { "KGL", "KEISOKU GIKEN Co.,Ltd." },
    { "KIS", "KiSS Technology A/S" },
    { "KMC", "Mitsumi Company Ltd" },
    { "KME", "KIMIN Electronics Co., Ltd." },
    { "KML", "Kensington Microware Ltd" },
    { "KNC", "Konica corporation" },
    { "KNX", "Nutech Marketing PTL" },
    { "KOB", "Kobil Systems GmbH" },
    { "KOD", "Eastman Kodak Company" },
    { "KOE", "KOLTER ELECTRONIC" },
    { "KOL", "Kollmorgen Motion Technologies Group" },
    { "KOU", "KOUZIRO Co.,Ltd." },
    { "KOW", "KOWA Company,LTD." },
    { "KPC", "King Phoenix Company" },
    { "KRL", "Krell Industries Inc." },
    { "KRM", "Kroma Telecom" },
    { "KRY", "Kroy LLC" },
    { "KSC", "Kinetic Systems Corporation" },
    { "KSL", "Karn Solutions Ltd." },
    { "KSX", "King Tester Corporation" },
    { "KTC", "Kingston Tech Corporation" },
    { "KTD", "Takahata Electronics Co.,Ltd." },
    { "KTE", "K-Tech" },
    { "KTG", "Kayser-Threde GmbH" },
    { "KTI", "Konica Technical Inc" },
    { "KTK", "Key Tronic Corporation" },
    { "KTN", "Katron Tech Inc" },
    { "KUR", "Kurta Corporation" },
    { "KVA", "Kvaser AB" },
    { "KVX", "KeyView" },
    { "KWD", "Kenwood Corporation" },
    { "KYC", "Kyocera Corporation" },
    { "KYE", "KYE Syst Corporation" },
    { "KYK", "Samsung Electronics America Inc" },
    { "KZI", "K-Zone International co. Ltd." },
    { "KZN", "K-Zone International" },
    { "LAB", "ACT Labs Ltd" },
    { "LAC", "LaCie" },
    { "LAF", "Microline" },
    { "LAG", "Laguna Systems" },
    { "LAN", "Sodeman Lancom Inc" },
    { "LAS", "LASAT Comm. A/S" },
    { "LAV", "Lava Computer MFG Inc" },
    { "LBO", "Lubosoft" },
    { "LCC", "LCI" },
    { "LCD", "Toshiba Matsushita Display Technology Co., Ltd" },
    { "LCE", "La Commande Electronique" },
    { "LCI", "Lite-On Communication Inc" },
    { "LCM", "Latitude Comm." },
    { "LCN", "LEXICON" },
    { "LCS", "Longshine Electronics Company" },
    { "LCT", "Labcal Technologies" },
    { "LDT", "LogiDataTech Electronic GmbH" },
    { "LEC", "Lectron Company Ltd" },
    { "LED", "Long Engineering Design Inc" },
    { "LEG", "Legerity, Inc" },
    { "LEN", "Lenovo Group Limited" },
    { "LEO", "First International Computer Inc" },
    { "LEX", "Lexical Ltd" },
    { "LGC", "Logic Ltd" },
    { "LGI", "Logitech Inc" },
    { "LGS", "LG Semicom Company Ltd" },
    { "LGX", "Lasergraphics, Inc." },
    { "LHA", "Lars Haagh ApS" },
    { "LHE", "Lung Hwa Electronics Company Ltd" },
    { "LHT", "Lighthouse Technologies Limited" },
    { "LIN", "Lenovo Beijing Co. Ltd." },
    { "LIP", "Linked IP GmbH" },
    { "LIT", "Lithics Silicon Technology" },
    { "LJX", "Datalogic Corporation" },
    { "LKM", "Likom Technology Sdn. Bhd." },
    { "LLL", "L-3 Communications" },
    { "LMG", "Lucent Technologies" },
    { "LMI", "Lexmark Int'l Inc" },
    { "LMP", "Leda Media Products" },
    { "LMT", "Laser Master" },
    { "LND", "Land Computer Company Ltd" },
    { "LNK", "Link Tech Inc" },
    { "LNR", "Linear Systems Ltd." },
    { "LNT", "LANETCO International" },
    { "LNV", "Lenovo" },
    { "LOC", "Locamation B.V." },
    { "LOE", "Loewe Opta GmbH" },
    { "LOG", "Logicode Technology Inc" },
    { "LOL", "Litelogic Operations Ltd" },
    { "LPE", "El-PUSK Co., Ltd." },
    { "LPI", "Design Technology" },
    { "LPL", "LG Philips" },
    { "LSC", "LifeSize Communications" },
    { "LSD", "Intersil Corporation" },
    { "LSI", "Loughborough Sound Images" },
    { "LSJ", "LSI Japan Company Ltd" },
    { "LSL", "Logical Solutions" },
    { "LSY", "LSI Systems Inc" },
    { "LTC", "Labtec Inc" },
    { "LTI", "Jongshine Tech Inc" },
    { "LTK", "Lucidity Technology Company Ltd" },
    { "LTN", "Litronic Inc" },
    { "LTS", "LTS Scale LLC" },
    { "LTV", "Leitch Technology International Inc." },
    { "LTW", "Lightware, Inc" },
    { "LUC", "Lucent Technologies" },
    { "LUM", "Lumagen, Inc." },
    { "LUX", "Luxxell Research Inc" },
    { "LVI", "LVI Low Vision International AB" },
    { "LWC", "Labway Corporation" },
    { "LWR", "Lightware Visual Engineering" },
    { "LWW", "Lanier Worldwide" },
    { "LXC", "LXCO Technologies AG" },
    { "LXN", "Luxeon" },
    { "LXS", "ELEA CardWare" },
    { "LZX", "Lightwell Company Ltd" },
    { "MAC", "MAC System Company Ltd" },
    { "MAD", "Xedia Corporation" },
    { "MAE", "Maestro Pty Ltd" },
    { "MAG", "MAG InnoVision" },
    { "MAI", "Mutoh America Inc" },
    { "MAL", "Meridian Audio Ltd" },
    { "MAN", "LGIC" },
    { "MAS", "Mass Inc." },
    { "MAT", "Matsushita Electric Ind. Company Ltd" },
    { "MAX", "Rogen Tech Distribution Inc" },
    { "MAY", "Maynard Electronics" },
    { "MAZ", "MAZeT GmbH" },
    { "MBC", "MBC" },
    { "MBD", "Microbus PLC" },
    { "MBM", "Marshall Electronics" },
    { "MBV", "Moreton Bay" },
    { "MCA", "American Nuclear Systems Inc" },
    { "MCC", "Micro Industries" },
    { "MCD", "McDATA Corporation" },
    { "MCE", "Metz-Werke GmbH & Co KG" },
    { "MCG", "Motorola Computer Group" },
    { "MCI", "Micronics Computers" },
    { "MCL", "Motorola Communications Israel" },
    { "MCM", "Metricom Inc" },
    { "MCN", "Micron Electronics Inc" },
    { "MCO", "Motion Computing Inc." },
    { "MCP", "Magni Systems Inc" },
    { "MCQ", "Mat's Computers" },
    { "MCR", "Marina Communicaitons" },
    { "MCS", "Micro Computer Systems" },
    { "MCT", "Microtec" },
    { "MDA", "Media4 Inc" },
    { "MDC", "Midori Electronics" },
    { "MDD", "MODIS" },
    { "MDG", "Madge Networks" },
    { "MDI", "Micro Design Inc" },
    { "MDK", "Mediatek Corporation" },
    { "MDO", "Panasonic" },
    { "MDR", "Medar Inc" },
    { "MDS", "Micro Display Systems Inc" },
    { "MDT", "Magus Data Tech" },
    { "MDV", "MET Development Inc" },
    { "MDX", "MicroDatec GmbH" },
    { "MDY", "Microdyne Inc" },
    { "MEC", "Mega System Technologies Inc" },
    { "MED", "Messeltronik Dresden GmbH" },
    { "MEE", "Mitsubishi Electric Engineering Co., Ltd." },
    { "MEG", "Abeam Tech Ltd" },
    { "MEI", "Panasonic Industry Company" },
    { "MEJ", "Mac-Eight Co., LTD." },
    { "MEL", "Mitsubishi Electric Corporation" },
    { "MEN", "MEN Mikroelectronik Nueruberg GmbH" },
    { "MEP", "Meld Technology" },
    { "MEQ", "Matelect Ltd." },
    { "MET", "Metheus Corporation" },
    { "MEX", "MSC Vertriebs GmbH" },
    { "MFG", "MicroField Graphics Inc" },
    { "MFI", "Micro Firmware" },
    { "MFR", "MediaFire Corp." },
    { "MGA", "Mega System Technologies, Inc." },
    { "MGC", "Mentor Graphics Corporation" },
    { "MGE", "Schneider Electric S.A." },
    { "MGL", "M-G Technology Ltd" },
    { "MGT", "Megatech R & D Company" },
    { "MIC", "Micom Communications Inc" },
    { "MID", "miro Displays" },
    { "MII", "Mitec Inc" },
    { "MIL", "Marconi Instruments Ltd" },
    { "MIM", "Mimio – A Newell Rubbermaid Company" },
    { "MIN", "Minicom Digital Signage" },
    { "MIP", "micronpc.com" },
    { "MIR", "Miro Computer Prod." },
    { "MIS", "Modular Industrial Solutions Inc" },
    { "MIT", "MCM Industrial Technology GmbH" },
    { "MJI", "MARANTZ JAPAN, INC." },
    { "MJS", "MJS Designs" },
    { "MKC", "Media Tek Inc." },
    { "MKT", "MICROTEK Inc." },
    { "MKV", "Trtheim Technology" },
    { "MLD", "Deep Video Imaging Ltd" },
    { "MLG", "Micrologica AG" },
    { "MLI", "McIntosh Laboratory Inc." },
    { "MLM", "Millennium Engineering Inc" },
    { "MLN", "Mark Levinson" },
    { "MLS", "Milestone EPE" },
    { "MLX", "Mylex Corporation" },
    { "MMA", "Micromedia AG" },
    { "MMD", "Micromed Biotecnologia Ltd" },
    { "MMF", "Minnesota Mining and Manufacturing" },
    { "MMI", "Multimax" },
    { "MMM", "Electronic Measurements" },
    { "MMN", "MiniMan Inc" },
    { "MMS", "MMS Electronics" },
    { "MNC", "Mini Micro Methods Ltd" },
    { "MNL", "Monorail Inc" },
    { "MNP", "Microcom" },
    { "MOD", "Modular Technology" },
    { "MOM", "Momentum Data Systems" },
    { "MOS", "Moses Corporation" },
    { "MOT", "Motorola UDS" },
    { "MPC", "M-Pact Inc" },
    { "MPI", "Mediatrix Peripherals Inc" },
    { "MPJ", "Microlab" },
    { "MPL", "Maple Research Inst. Company Ltd" },
    { "MPN", "Mainpine Limited" },
    { "MPS", "mps Software GmbH" },
    { "MPX", "Micropix Technologies, Ltd." },
    { "MQP", "MultiQ Products AB" },
    { "MRA", "Miranda Technologies Inc" },
    { "MRC", "Marconi Simulation & Ty-Coch Way Training" },
    { "MRD", "MicroDisplay Corporation" },
    { "MRK", "Maruko & Company Ltd" },
    { "MRL", "Miratel" },
    { "MRO", "Medikro Oy" },
    { "MRT", "Merging Technologies" },
    { "MSA", "Micro Systemation AB" },
    { "MSC", "Mouse Systems Corporation" },
    { "MSD", "Datenerfassungs- und Informationssysteme" },
    { "MSF", "M-Systems Flash Disk Pioneers" },
    { "MSG", "MSI GmbH" },
    { "MSH", "Microsoft" },
    { "MSI", "Microstep" },
    { "MSK", "Megasoft Inc" },
    { "MSL", "MicroSlate Inc." },
    { "MSM", "Advanced Digital Systems" },
    { "MSP", "Mistral Solutions [P] Ltd." },
    { "MSR", "MASPRO DENKOH Corp." },
    { "MST", "MS Telematica" },
    { "MSU", "motorola" },
    { "MSV", "Mosgi Corporation" },
    { "MSX", "Micomsoft Co., Ltd." },
    { "MSY", "MicroTouch Systems Inc" },
    { "MTB", "Media Technologies Ltd." },
    { "MTC", "Mars-Tech Corporation" },
    { "MTD", "MindTech Display Co. Ltd" },
    { "MTE", "MediaTec GmbH" },
    { "MTH", "Micro-Tech Hearing Instruments" },
    { "MTI", "Motorola Inc." },
    { "MTK", "Microtek International Inc." },
    { "MTL", "Mitel Corporation" },
    { "MTM", "Motium" },
    { "MTN", "Mtron Storage Technology Co., Ltd." },
    { "MTR", "Mitron computer Inc" },
    { "MTS", "Multi-Tech Systems" },
    { "MTU", "Mark of the Unicorn Inc" },
    { "MTX", "Matrox" },
    { "MUD", "Multi-Dimension Institute" },
    { "MUK", "mainpine limited" },
    { "MVD", "Microvitec PLC" },
    { "MVI", "Media Vision Inc" },
    { "MVM", "SOBO VISION" },
    { "MVS", "Microvision" },
    { "MVX", "COM 1" },
    { "MWI", "Multiwave Innovation Pte Ltd" },
    { "MWR", "mware" },
    { "MWY", "Microway Inc" },
    { "MXD", "MaxData Computer GmbH & Co.KG" },
    { "MXI", "Macronix Inc" },
    { "MXL", "Hitachi Maxell, Ltd." },
    { "MXP", "Maxpeed Corporation" },
    { "MXT", "Maxtech Corporation" },
    { "MXV", "MaxVision Corporation" },
    { "MYA", "Monydata" },
    { "MYR", "Myriad Solutions Ltd" },
    { "MYX", "Micronyx Inc" },
    { "NAC", "Ncast Corporation" },
    { "NAD", "NAD Electronics" },
    { "NAK", "Nakano Engineering Co.,Ltd." },
    { "NAL", "Network Alchemy" },
    { "NAT", "NaturalPoint Inc." },
    { "NAV", "Navigation Corporation" },
    { "NAX", "Naxos Tecnologia" },
    { "NBL", "N*Able Technologies Inc" },
    { "NBS", "National Key Lab. on ISN" },
    { "NBT", "NingBo Bestwinning Technology CO., Ltd" },
    { "NCA", "Nixdorf Company" },
    { "NCC", "NCR Corporation" },
    { "NCE", "Norcent Technology, Inc." },
    { "NCI", "NewCom Inc" },
    { "NCL", "NetComm Ltd" },
    { "NCR", "NCR Electronics" },
    { "NCS", "Northgate Computer Systems" },
    { "NCT", "NEC CustomTechnica, Ltd." },
    { "NDC", "National DataComm Corporaiton" },
    { "NDI", "National Display Systems" },
    { "NDK", "Naitoh Densei CO., LTD." },
    { "NDL", "Network Designers" },
    { "NDS", "Nokia Data" },
    { "NEC", "NEC Corporation" },
    { "NEO", "NEO TELECOM CO.,LTD." },
    { "NET", "Mettler Toledo" },
    { "NEU", "NEUROTEC - EMPRESA DE PESQUISA E DESENVOLVIMENTO EM BIOMEDICINA" },
    { "NEX", "Nexgen Mediatech Inc.," },
    { "NFC", "BTC Korea Co., Ltd" },
    { "NFS", "Number Five Software" },
    { "NGC", "Network General" },
    { "NGS", "A D S Exports" },
    { "NHT", "Vinci Labs" },
    { "NIC", "National Instruments Corporation" },
    { "NIS", "Nissei Electric Company" },
    { "NIT", "Network Info Technology" },
    { "NIX", "Seanix Technology Inc" },
    { "NLC", "Next Level Communications" },
    { "NME", "Navico, Inc." },
    { "NMP", "Nokia Mobile Phones" },
    { "NMS", "Natural Micro System" },
    { "NMV", "NEC-Mitsubishi Electric Visual Systems Corporation" },
    { "NMX", "Neomagic" },
    { "NNC", "NNC" },
    { "NOE", "NordicEye AB" },
    { "NOI", "North Invent A/S" },
    { "NOK", "Nokia Display Products" },
    { "NOR", "Norand Corporation" },
    { "NOT", "Not Limited Inc" },
    { "NPI", "Network Peripherals Inc" },
    { "NRL", "U.S. Naval Research Lab" },
    { "NRT", "Beijing Northern Radiantelecom Co." },
    { "NRV", "Taugagreining hf" },
    { "NSC", "National Semiconductor Corporation" },
    { "NSI", "NISSEI ELECTRIC CO.,LTD" },
    { "NSP", "Nspire System Inc." },
    { "NSS", "Newport Systems Solutions" },
    { "NST", "Network Security Technology Co" },
    { "NTC", "NeoTech S.R.L" },
    { "NTI", "New Tech Int'l Company" },
    { "NTL", "National Transcomm. Ltd" },
    { "NTN", "Nuvoton Technology Corporation" },
    { "NTR", "N-trig Innovative Technologies, Inc." },
    { "NTS", "Nits Technology Inc." },
    { "NTT", "NTT Advanced Technology Corporation" },
    { "NTW", "Networth Inc" },
    { "NTX", "Netaccess Inc" },
    { "NUG", "NU Technology, Inc." },
    { "NUI", "NU Inc." },
    { "NVC", "NetVision Corporation" },
    { "NVD", "Nvidia" },
    { "NVI", "NuVision US, Inc." },
    { "NVL", "Novell Inc" },
    { "NVT", "Navatek Engineering Corporation" },
    { "NWC", "NW Computer Engineering" },
    { "NWP", "NovaWeb Technologies Inc" },
    { "NWS", "Newisys, Inc." },
    { "NXC", "NextCom K.K." },
    { "NXG", "Nexgen" },
    { "NXP", "NXP Semiconductors bv." },
    { "NXQ", "Nexiq Technologies, Inc." },
    { "NXS", "Technology Nexus Secure Open Systems AB" },
    { "NYC", "nakayo telecommunications,inc." },
    { "OAK", "Oak Tech Inc" },
    { "OAS", "Oasys Technology Company" },
    { "OBS", "Optibase Technologies" },
    { "OCD", "Macraigor Systems Inc" },
    { "OCN", "Olfan" },
    { "OCS", "Open Connect Solutions" },
    { "ODM", "ODME Inc." },
    { "ODR", "Odrac" },
    { "OEC", "ORION ELECTRIC CO.,LTD" },
    { "OEI", "Optum Engineering Inc." },
    { "OIC", "Option Industrial Computers" },
    { "OIM", "Option International" },
    { "OIN", "Option International" },
    { "OKI", "OKI Electric Industrial Company Ltd" },
    { "OLC", "Olicom A/S" },
    { "OLD", "Olidata S.p.A." },
    { "OLI", "Olivetti" },
    { "OLT", "Olitec S.A." },
    { "OLV", "Olitec S.A." },
    { "OLY", "OLYMPUS CORPORATION" },
    { "OMC", "OBJIX Multimedia Corporation" },
    { "OMN", "Omnitel" },
    { "OMR", "Omron Corporation" },
    { "ONE", "Oneac Corporation" },
    { "ONK", "ONKYO Corporation" },
    { "ONL", "OnLive, Inc" },
    { "ONS", "On Systems Inc" },
    { "ONW", "OPEN Networks Ltd" },
    { "ONX", "SOMELEC Z.I. Du Vert Galanta" },
    { "OOS", "OSRAM" },
    { "OPC", "Opcode Inc" },
    { "OPI", "D.N.S. Corporation" },
    { "OPP", "OPPO Digital, Inc." },
    { "OPT", "OPTi Inc" },
    { "OPV", "Optivision Inc" },
    { "OQI", "Oksori Company Ltd" },
    { "ORG", "ORGA Kartensysteme GmbH" },
    { "ORI", "OSR Open Systems Resources, Inc." },
    { "ORN", "ORION ELECTRIC CO., LTD." },
    { "OSA", "OSAKA Micro Computer, Inc." },
    { "OSP", "OPTI-UPS Corporation" },
    { "OSR", "Oksori Company Ltd" },
    { "OTB", "outsidetheboxstuff.com" },
    { "OTI", "Orchid Technology" },
    { "OTM", "Optoma Corporation" },
    { "OTT", "OPTO22, Inc." },
    { "OUK", "OUK Company Ltd" },
    { "OVR", "Oculus VR, Inc." },
    { "OWL", "Mediacom Technologies Pte Ltd" },
    { "OXU", "Oxus Research S.A." },
    { "OYO", "Shadow Systems" },
    { "OZC", "OZ Corporation" },
    { "OZO", "Tribe Computer Works Inc" },
    { "PAC", "Pacific Avionics Corporation" },
    { "PAD", "Promotion and Display Technology Ltd." },
    { "PAK", "Many CNC System Co., Ltd." },
    { "PAM", "Peter Antesberger Messtechnik" },
    { "PAN", "The Panda Project" },
    { "PAR", "Parallan Comp Inc" },
    { "PBI", "Pitney Bowes" },
    { "PBL", "Packard Bell Electronics" },
    { "PBN", "Packard Bell NEC" },
    { "PBV", "Pitney Bowes" },
    { "PCA", "Philips BU Add On Card" },
    { "PCB", "OCTAL S.A." },
    { "PCC", "PowerCom Technology Company Ltd" },
    { "PCG", "First Industrial Computer Inc" },
    { "PCI", "Pioneer Computer Inc" },
    { "PCK", "PCBANK21" },
    { "PCL", "pentel.co.,ltd" },
    { "PCM", "PCM Systems Corporation" },
    { "PCO", "Performance Concepts Inc.," },
    { "PCP", "Procomp USA Inc" },
    { "PCS", "TOSHIBA PERSONAL COMPUTER SYSTEM CORPRATION" },
    { "PCT", "PC-Tel Inc" },
    { "PCW", "Pacific CommWare Inc" },
    { "PCX", "PC Xperten" },
    { "PDM", "Psion Dacom Plc." },
    { "PDN", "AT&T Paradyne" },
    { "PDR", "Pure Data Inc" },
    { "PDS", "PD Systems International Ltd" },
    { "PDT", "PDTS - Prozessdatentechnik und Systeme" },
    { "PDV", "Prodrive B.V." },
    { "PEC", "POTRANS Electrical Corp." },
    { "PEI", "PEI Electronics Inc" },
    { "PEL", "Primax Electric Ltd" },
    { "PEN", "Interactive Computer Products Inc" },
    { "PEP", "Peppercon AG" },
    { "PER", "Perceptive Signal Technologies" },
    { "PET", "Practical Electronic Tools" },
    { "PFT", "Telia ProSoft AB" },
    { "PGI", "PACSGEAR, Inc." },
    { "PGM", "Paradigm Advanced Research Centre" },
    { "PGP", "propagamma kommunikation" },
    { "PGS", "Princeton Graphic Systems" },
    { "PHC", "Pijnenburg Beheer N.V." },
    { "PHE", "Philips Medical Systems Boeblingen GmbH" },
    { "PHI", "DO NOT USE - PHI" },
    { "PHL", "Philips Consumer Electronics Company" },
    { "PHO", "Photonics Systems Inc." },
    { "PHS", "Philips Communication Systems" },
    { "PHY", "Phylon Communications" },
    { "PIE", "Pacific Image Electronics Company Ltd" },
    { "PIM", "Prism, LLC" },
    { "PIO", "Pioneer Electronic Corporation" },
    { "PIX", "Pixie Tech Inc" },
    { "PJA", "Projecta" },
    { "PJD", "Projectiondesign AS" },
    { "PJT", "Pan Jit International Inc." },
    { "PKA", "Acco UK ltd." },
    { "PLC", "Pro-Log Corporation" },
    { "PLF", "Panasonic Avionics Corporation" },
    { "PLM", "PROLINK Microsystems Corp." },
    { "PLT", "PT Hartono Istana Teknologi" },
    { "PLV", "PLUS Vision Corp." },
    { "PLX", "Parallax Graphics" },
    { "PLY", "Polycom Inc." },
    { "PMC", "PMC Consumer Electronics Ltd" },
    { "PMD", "TDK USA Corporation" },
    { "PMM", "Point Multimedia System" },
    { "PMT", "Promate Electronic Co., Ltd." },
    { "PMX", "Photomatrix" },
    { "PNG", "P.I. Engineering Inc" },
    { "PNL", "Panelview, Inc." },
    { "PNP", "Microsoft" },
    { "PNR", "Planar Systems, Inc." },
    { "PNS", "PanaScope" },
    { "PNX", "Phoenix Technologies, Ltd." },
    { "POL", "PolyComp (PTY) Ltd." },
    { "PON", "Perpetual Technologies, LLC" },
    { "POR", "Portalis LC" },
    { "PPC", "Phoenixtec Power Company Ltd" },
    { "PPD", "MEPhI" },
    { "PPI", "Practical Peripherals" },
    { "PPM", "Clinton Electronics Corp." },
    { "PPP", "Purup Prepress AS" },
    { "PPR", "PicPro" },
    { "PPX", "Perceptive Pixel Inc." },
    { "PQI", "Pixel Qi" },
    { "PRA", "PRO/AUTOMATION" },
    { "PRC", "PerComm" },
    { "PRD", "Praim S.R.L." },
    { "PRF", "Digital Electronics Corporation" },
    { "PRG", "The Phoenix Research Group Inc" },
    { "PRI", "Priva Hortimation BV" },
    { "PRM", "Prometheus" },
    { "PRO", "Proteon" },
    { "PRS", "Leutron Vision" },
    { "PRT", "Parade Technologies, Ltd." },
    { "PRX", "Proxima Corporation" },
    { "PSA", "Advanced Signal Processing Technologies" },
    { "PSC", "Philips Semiconductors" },
    { "PSD", "Peus-Systems GmbH" },
    { "PSE", "Practical Solutions Pte., Ltd." },
    { "PSI", "PSI-Perceptive Solutions Inc" },
    { "PSL", "Perle Systems Limited" },
    { "PSM", "Prosum" },
    { "PST", "Global Data SA" },
    { "PSY", "Prodea Systems Inc." },
    { "PTA", "PAR Tech Inc." },
    { "PTC", "PS Technology Corporation" },
    { "PTG", "Cipher Systems Inc" },
    { "PTH", "Pathlight Technology Inc" },
    { "PTI", "Promise Technology Inc" },
    { "PTL", "Pantel Inc" },
    { "PTS", "Plain Tree Systems Inc" },
    { "PTW", "DO NOT USE - PTW" },
    { "PUL", "Pulse-Eight Ltd" },
    { "PVC", "DO NOT USE - PVC" },
    { "PVG", "Proview Global Co., Ltd" },
    { "PVI", "Prime view international Co., Ltd" },
    { "PVM", "Penta Studiotechnik GmbH" },
    { "PVN", "Pixel Vision" },
    { "PVP", "Klos Technologies, Inc." },
    { "PXC", "Phoenix Contact" },
    { "PXE", "PIXELA CORPORATION" },
    { "PXL", "The Moving Pixel Company" },
    { "PXM", "Proxim Inc" },
    { "QCC", "QuakeCom Company Ltd" },
    { "QCH", "Metronics Inc" },
    { "QCI", "Quanta Computer Inc" },
    { "QCK", "Quick Corporation" },
    { "QCL", "Quadrant Components Inc" },
    { "QCP", "Qualcomm Inc" },
    { "QDI", "Quantum Data Incorporated" },
    { "QDM", "Quadram" },
    { "QDS", "Quanta Display Inc." },
    { "QFF", "Padix Co., Inc." },
    { "QFI", "Quickflex, Inc" },
    { "QLC", "Q-Logic" },
    { "QQQ", "Chuomusen Co., Ltd." },
    { "QSI", "Quantum Solutions, Inc." },
    { "QTD", "Quantum 3D Inc" },
    { "QTH", "Questech Ltd" },
    { "QTI", "Quicknet Technologies Inc" },
    { "QTM", "Quantum" },
    { "QTR", "Qtronix Corporation" },
    { "QUA", "Quatographic AG" },
    { "QUE", "Questra Consulting" },
    { "QVU", "Quartics" },
    { "RAC", "Racore Computer Products Inc" },
    { "RAD", "Radisys Corporation" },
    { "RAI", "Rockwell Automation/Intecolor" },
    { "RAN", "Rancho Tech Inc" },
    { "RAR", "Raritan, Inc." },
    { "RAS", "RAScom Inc" },
    { "RAT", "Rent-A-Tech" },
    { "RAY", "Raylar Design, Inc." },
    { "RCE", "Parc d'Activite des Bellevues" },
    { "RCH", "Reach Technology Inc" },
    { "RCI", "RC International" },
    { "RCN", "Radio Consult SRL" },
    { "RCO", "Rockwell Collins" },
    { "RDI", "Rainbow Displays, Inc." },
    { "RDM", "Tremon Enterprises Company Ltd" },
    { "RDN", "RADIODATA GmbH" },
    { "RDS", "Radius Inc" },
    { "REA", "Real D" },
    { "REC", "ReCom" },
    { "RED", "Research Electronics Development Inc" },
    { "REF", "Reflectivity, Inc." },
    { "REH", "Rehan Electronics Ltd." },
    { "REL", "Reliance Electric Ind Corporation" },
    { "REM", "SCI Systems Inc." },
    { "REN", "Renesas Technology Corp." },
    { "RES", "ResMed Pty Ltd" },
    { "RET", "Resonance Technology, Inc." },
    { "REX", "RATOC Systems, Inc." },
    { "RGB", "RGB Spectrum" },
    { "RGL", "Robertson Geologging Ltd" },
    { "RHD", "RightHand Technologies" },
    { "RHM", "Rohm Company Ltd" },
    { "RHT", "Red Hat, Inc." },
    { "RIC", "RICOH COMPANY, LTD." },
    { "RII", "Racal Interlan Inc" },
    { "RIO", "Rios Systems Company Ltd" },
    { "RIT", "Ritech Inc" },
    { "RIV", "Rivulet Communications" },
    { "RJA", "Roland Corporation" },
    { "RJS", "Advanced Engineering" },
    { "RKC", "Reakin Technolohy Corporation" },
    { "RLD", "MEPCO" },
    { "RLN", "RadioLAN Inc" },
    { "RMC", "Raritan Computer, Inc" },
    { "RMP", "Research Machines" },
    { "RMT", "Roper Mobile" },
    { "RNB", "Rainbow Technologies" },
    { "ROB", "Robust Electronics GmbH" },
    { "ROH", "Rohm Co., Ltd." },
    { "ROK", "Rockwell International" },
    { "ROP", "Roper International Ltd" },
    { "ROS", "Rohde & Schwarz" },
    { "RPI", "RoomPro Technologies" },
    { "RPT", "R.P.T.Intergroups" },
    { "RRI", "Radicom Research Inc" },
    { "RSC", "PhotoTelesis" },
    { "RSH", "ADC-Centre" },
    { "RSI", "Rampage Systems Inc" },
    { "RSN", "Radiospire Networks, Inc." },
    { "RSQ", "R Squared" },
    { "RSS", "Rockwell Semiconductor Systems" },
    { "RSV", "Ross Video Ltd" },
    { "RSX", "Rapid Tech Corporation" },
    { "RTC", "Relia Technologies" },
    { "RTI", "Rancho Tech Inc" },
    { "RTK", "DO NOT USE - RTK" },
    { "RTL", "Realtek Semiconductor Company Ltd" },
    { "RTS", "Raintree Systems" },
    { "RUN", "RUNCO International" },
    { "RUP", "Ups Manufactoring s.r.l." },
    { "RVC", "RSI Systems Inc" },
    { "RVI", "Realvision Inc" },
    { "RVL", "Reveal Computer Prod" },
    { "RWC", "Red Wing Corporation" },
    { "RXT", "Tectona SoftSolutions (P) Ltd.," },
    { "SAA", "Sanritz Automation Co.,Ltd." },
    { "SAE", "Saab Aerotech" },
    { "SAG", "Sedlbauer" },
    { "SAI", "Sage Inc" },
    { "SAK", "Saitek Ltd" },
    { "SAM", "Samsung Electric Company" },
    { "SAN", "Sanyo Electric Co.,Ltd." },
    { "SAS", "Stores Automated Systems Inc" },
    { "SAT", "Shuttle Tech" },
    { "SBC", "Shanghai Bell Telephone Equip Mfg Co" },
    { "SBD", "Softbed - Consulting & Development Ltd" },
    { "SBI", "SMART Technologies Inc." },
    { "SBS", "SBS-or Industrial Computers GmbH" },
    { "SBT", "Senseboard Technologies AB" },
    { "SCB", "SeeCubic B.V." },
    { "SCC", "SORD Computer Corporation" },
    { "SCD", "Sanyo Electric Company Ltd" },
    { "SCE", "Sun Corporation" },
    { "SCH", "Schlumberger Cards" },
    { "SCI", "System Craft" },
    { "SCL", "Sigmacom Co., Ltd." },
    { "SCM", "SCM Microsystems Inc" },
    { "SCN", "Scanport, Inc." },
    { "SCO", "SORCUS Computer GmbH" },
    { "SCP", "Scriptel Corporation" },
    { "SCR", "Systran Corporation" },
    { "SCS", "Nanomach Anstalt" },
    { "SCT", "Smart Card Technology" },
    { "SDA", "SAT (Societe Anonyme)" },
    { "SDD", "Intrada-SDD Ltd" },
    { "SDE", "Sherwood Digital Electronics Corporation" },
    { "SDF", "SODIFF E&T CO., Ltd." },
    { "SDH", "Communications Specialies, Inc." },
    { "SDI", "Samtron Displays Inc" },
    { "SDK", "SAIT-Devlonics" },
    { "SDR", "SDR Systems" },
    { "SDS", "SunRiver Data System" },
    { "SDT", "Siemens AG" },
    { "SDX", "SDX Business Systems Ltd" },
    { "SEA", "Seanix Technology Inc." },
    { "SEB", "system elektronik GmbH" },
    { "SEC", "Seiko Epson Corporation" },
    { "SEE", "SeeColor Corporation" },
    { "SEG", "DO NOT USE - SEG" },
    { "SEI", "Seitz & Associates Inc" },
    { "SEL", "Way2Call Communications" },
    { "SEM", "Samsung Electronics Company Ltd" },
    { "SEN", "Sencore" },
    { "SEO", "SEOS Ltd" },
    { "SEP", "SEP Eletronica Ltda." },
    { "SER", "Sony Ericsson Mobile Communications Inc." },
    { "SES", "Session Control LLC" },
    { "SET", "SendTek Corporation" },
    { "SFM", "TORNADO Company" },
    { "SFT", "Mikroforum Ring 3" },
    { "SGC", "Spectragraphics Corporation" },
    { "SGD", "Sigma Designs, Inc." },
    { "SGE", "Kansai Electric Company Ltd" },
    { "SGI", "Scan Group Ltd" },
    { "SGL", "Super Gate Technology Company Ltd" },
    { "SGM", "SAGEM" },
    { "SGO", "Logos Design A/S" },
    { "SGT", "Stargate Technology" },
    { "SGW", "Shanghai Guowei Science and Technology Co., Ltd." },
    { "SGX", "Silicon Graphics Inc" },
    { "SGZ", "Systec Computer GmbH" },
    { "SHC", "ShibaSoku Co., Ltd." },
    { "SHG", "Soft & Hardware development Goldammer GmbH" },
    { "SHI", "Jiangsu Shinco Electronic Group Co., Ltd" },
    { "SHP", "Sharp Corporation" },
    { "SHR", "Digital Discovery" },
    { "SHT", "Shin Ho Tech" },
    { "SIA", "SIEMENS AG" },
    { "SIB", "Sanyo Electric Company Ltd" },
    { "SIC", "Sysmate Corporation" },
    { "SID", "Seiko Instruments Information Devices Inc" },
    { "SIE", "Siemens" },
    { "SIG", "Sigma Designs Inc" },
    { "SII", "Silicon Image, Inc." },
    { "SIL", "Silicon Laboratories, Inc" },
    { "SIM", "S3 Inc" },
    { "SIN", "Singular Technology Co., Ltd." },
    { "SIR", "Sirius Technologies Pty Ltd" },
    { "SIS", "Silicon Integrated Systems Corporation" },
    { "SIT", "Sitintel" },
    { "SIU", "Seiko Instruments USA Inc" },
    { "SIX", "Zuniq Data Corporation" },
    { "SJE", "Sejin Electron Inc" },
    { "SKD", "Schneider & Koch" },
    { "SKT", "Samsung Electro-Mechanics Company Ltd" },
    { "SKY", "SKYDATA S.P.A." },
    { "SLA", "Systeme Lauer GmbH&Co KG" },
    { "SLB", "Shlumberger Ltd" },
    { "SLC", "Syslogic Datentechnik AG" },
    { "SLF", "StarLeaf" },
    { "SLH", "Silicon Library Inc." },
    { "SLI", "Symbios Logic Inc" },
    { "SLK", "Silitek Corporation" },
    { "SLM", "Solomon Technology Corporation" },
    { "SLR", "Schlumberger Technology Corporate" },
    { "SLS", "Schnick-Schnack-Systems GmbH" },
    { "SLT", "Salt Internatioinal Corp." },
    { "SLX", "Specialix" },
    { "SMA", "SMART Modular Technologies" },
    { "SMB", "Schlumberger" },
    { "SMC", "Standard Microsystems Corporation" },
    { "SME", "Sysmate Company" },
    { "SMI", "SpaceLabs Medical Inc" },
    { "SMK", "SMK CORPORATION" },
    { "SML", "Sumitomo Metal Industries, Ltd." },
    { "SMM", "Shark Multimedia Inc" },
    { "SMO", "STMicroelectronics" },
    { "SMP", "Simple Computing" },
    { "SMR", "B.& V. s.r.l." },
    { "SMS", "Silicom Multimedia Systems Inc" },
    { "SMT", "Silcom Manufacturing Tech Inc" },
    { "SNC", "Sentronic International Corp." },
    { "SNI", "Siemens Microdesign GmbH" },
    { "SNK", "S&K Electronics" },
    { "SNO", "SINOSUN TECHNOLOGY CO., LTD" },
    { "SNP", "Siemens Nixdorf Info Systems" },
    { "SNS", "Cirtech (UK) Ltd" },
    { "SNT", "SuperNet Inc" },
    { "SNW", "Snell & Wilcox" },
    { "SNX", "Sonix Comm. Ltd" },
    { "SNY", "Sony" },
    { "SOI", "Silicon Optix Corporation" },
    { "SOL", "Solitron Technologies Inc" },
    { "SON", "Sony" },
    { "SOR", "Sorcus Computer GmbH" },
    { "SOT", "Sotec Company Ltd" },
    { "SOY", "SOYO Group, Inc" },
    { "SPC", "SpinCore Technologies, Inc" },
    { "SPE", "SPEA Software AG" },
    { "SPH", "G&W Instruments GmbH" },
    { "SPI", "SPACE-I Co., Ltd." },
    { "SPK", "SpeakerCraft" },
    { "SPL", "Smart Silicon Systems Pty Ltd" },
    { "SPN", "Sapience Corporation" },
    { "SPR", "pmns GmbH" },
    { "SPS", "Synopsys Inc" },
    { "SPT", "Sceptre Tech Inc" },
    { "SPU", "SIM2 Multimedia S.P.A." },
    { "SPX", "Simplex Time Recorder Co." },
    { "SQT", "Sequent Computer Systems Inc" },
    { "SRC", "Integrated Tech Express Inc" },
    { "SRD", "Setred" },
    { "SRF", "Surf Communication Solutions Ltd" },
    { "SRG", "Intuitive Surgical, Inc." },
    { "SRS", "SR-Systems e.K." },
    { "SRT", "SeeReal Technologies GmbH" },
    { "SSC", "Sierra Semiconductor Inc" },
    { "SSD", "FlightSafety International" },
    { "SSE", "Samsung Electronic Co." },
    { "SSI", "S-S Technology Inc" },
    { "SSJ", "Sankyo Seiki Mfg.co., Ltd" },
    { "SSP", "Spectrum Signal Proecessing Inc" },
    { "SSS", "S3 Inc" },
    { "SST", "SystemSoft Corporation" },
    { "STA", "ST Electronics Systems Assembly Pte Ltd" },
    { "STB", "STB Systems Inc" },
    { "STC", "STAC Electronics" },
    { "STD", "STD Computer Inc" },
    { "STE", "SII Ido-Tsushin Inc" },
    { "STF", "Starflight Electronics" },
    { "STG", "StereoGraphics Corp." },
    { "STH", "Semtech Corporation" },
    { "STI", "Smart Tech Inc" },
    { "STK", "SANTAK CORP." },
    { "STL", "SigmaTel Inc" },
    { "STM", "SGS Thomson Microelectronics" },
    { "STN", "Samsung Electronics America" },
    { "STO", "Stollmann E+V GmbH" },
    { "STP", "StreamPlay Ltd" },
    { "STR", "Starlight Networks Inc" },
    { "STS", "SITECSYSTEM CO., LTD." },
    { "STT", "Star Paging Telecom Tech (Shenzhen) Co. Ltd." },
    { "STU", "Sentelic Corporation" },
    { "STW", "Starwin Inc." },
    { "STX", "ST-Ericsson" },
    { "STY", "SDS Technologies" },
    { "SUB", "Subspace Comm. Inc" },
    { "SUM", "Summagraphics Corporation" },
    { "SUN", "Sun Electronics Corporation" },
    { "SUP", "Supra Corporation" },
    { "SUR", "Surenam Computer Corporation" },
    { "SVA", "SGEG" },
    { "SVC", "Intellix Corp." },
    { "SVD", "SVD Computer" },
    { "SVI", "Sun Microsystems" },
    { "SVS", "SVSI" },
    { "SVT", "SEVIT Co., Ltd." },
    { "SWC", "Software Café" },
    { "SWI", "Sierra Wireless Inc." },
    { "SWL", "Sharedware Ltd" },
    { "SWS", "Static" },
    { "SWT", "Software Technologies Group,Inc." },
    { "SXB", "Syntax-Brillian" },
    { "SXD", "Silex technology, Inc." },
    { "SXG", "SELEX GALILEO" },
    { "SXL", "SolutionInside" },
    { "SXT", "SHARP TAKAYA ELECTRONIC INDUSTRY CO.,LTD." },
    { "SYC", "Sysmic" },
    { "SYE", "SY Electronics Ltd" },
    { "SYK", "Stryker Communications" },
    { "SYL", "Sylvania Computer Products" },
    { "SYM", "Symicron Computer Communications Ltd." },
    { "SYN", "Synaptics Inc" },
    { "SYP", "SYPRO Co Ltd" },
    { "SYS", "Sysgration Ltd" },
    { "SYT", "Seyeon Tech Company Ltd" },
    { "SYV", "SYVAX Inc" },
    { "SYX", "Prime Systems, Inc." },
    { "TAA", "Tandberg" },
    { "TAB", "Todos Data System AB" },
    { "TAG", "Teles AG" },
    { "TAI", "Toshiba America Info Systems Inc" },
    { "TAM", "Tamura Seisakusyo Ltd" },
    { "TAS", "Taskit Rechnertechnik GmbH" },
    { "TAT", "Teleliaison Inc" },
    { "TAX", "Taxan (Europe) Ltd" },
    { "TBB", "Triple S Engineering Inc" },
    { "TBC", "Turbo Communication, Inc" },
    { "TBS", "Turtle Beach System" },
    { "TCC", "Tandon Corporation" },
    { "TCD", "Taicom Data Systems Co., Ltd." },
    { "TCE", "Century Corporation" },
    { "TCH", "Interaction Systems, Inc" },
    { "TCI", "Tulip Computers Int'l B.V." },
    { "TCJ", "TEAC America Inc" },
    { "TCL", "Technical Concepts Ltd" },
    { "TCM", "3Com Corporation" },
    { "TCN", "Tecnetics (PTY) Ltd" },
    { "TCO", "Thomas-Conrad Corporation" },
    { "TCR", "Thomson Consumer Electronics" },
    { "TCS", "Tatung Company of America Inc" },
    { "TCT", "Telecom Technology Centre Co. Ltd." },
    { "TCX", "FREEMARS Heavy Industries" },
    { "TDC", "Teradici" },
    { "TDD", "Tandberg Data Display AS" },
    { "TDK", "TDK USA Corporation" },
    { "TDM", "Tandem Computer Europe Inc" },
    { "TDP", "3D Perception" },
    { "TDS", "Tri-Data Systems Inc" },
    { "TDT", "TDT" },
    { "TDV", "TDVision Systems, Inc." },
    { "TDY", "Tandy Electronics" },
    { "TEA", "TEAC System Corporation" },
    { "TEC", "Tecmar Inc" },
    { "TEK", "Tektronix Inc" },
    { "TEL", "Promotion and Display Technology Ltd." },
    { "TER", "TerraTec Electronic GmbH" },
    { "TGC", "Toshiba Global Commerce Solutions, Inc." },
    { "TGI", "TriGem Computer Inc" },
    { "TGM", "TriGem Computer,Inc." },
    { "TGS", "Torus Systems Ltd" },
    { "TGV", "Grass Valley Germany GmbH" },
    { "THN", "Thundercom Holdings Sdn. Bhd." },
    { "TIC", "Trigem KinfoComm" },
    { "TIP", "TIPTEL AG" },
    { "TIV", "OOO Technoinvest" },
    { "TIX", "Tixi.Com GmbH" },
    { "TKC", "Taiko Electric Works.LTD" },
    { "TKN", "Teknor Microsystem Inc" },
    { "TKO", "TouchKo, Inc." },
    { "TKS", "TimeKeeping Systems, Inc." },
    { "TLA", "Ferrari Electronic GmbH" },
    { "TLD", "Telindus" },
    { "TLF", "Teleforce.,co,ltd" },
    { "TLI", "TOSHIBA TELI CORPORATION" },
    { "TLK", "Telelink AG" },
    { "TLS", "Teleste Educational OY" },
    { "TLT", "Dai Telecom S.p.A." },
    { "TLV", "S3 Inc" },
    { "TLX", "Telxon Corporation" },
    { "TMC", "Techmedia Computer Systems Corporation" },
    { "TME", "AT&T Microelectronics" },
    { "TMI", "Texas Microsystem" },
    { "TMM", "Time Management, Inc." },
    { "TMR", "Taicom International Inc" },
    { "TMS", "Trident Microsystems Ltd" },
    { "TMT", "T-Metrics Inc." },
    { "TMX", "Thermotrex Corporation" },
    { "TNC", "TNC Industrial Company Ltd" },
    { "TNJ", "DO NOT USE - TNJ" },
    { "TNM", "TECNIMAGEN SA" },
    { "TNY", "Tennyson Tech Pty Ltd" },
    { "TOE", "TOEI Electronics Co., Ltd." },
    { "TOG", "The OPEN Group" },
    { "TON", "TONNA" },
    { "TOP", "Orion Communications Co., Ltd." },
    { "TOS", "Toshiba Corporation" },
    { "TOU", "Touchstone Technology" },
    { "TPC", "Touch Panel Systems Corporation" },
    { "TPE", "Technology Power Enterprises Inc" },
    { "TPJ", "Junnila" },
    { "TPK", "TOPRE CORPORATION" },
    { "TPR", "Topro Technology Inc" },
    { "TPS", "Teleprocessing Systeme GmbH" },
    { "TPT", "Thruput Ltd" },
    { "TPV", "Top Victory Electronics ( Fujian ) Company Ltd" },
    { "TPZ", "Ypoaz Systems Inc" },
    { "TRA", "TriTech Microelectronics International" },
    { "TRC", "Trioc AB" },
    { "TRD", "Trident Microsystem Inc" },
    { "TRE", "Tremetrics" },
    { "TRI", "Tricord Systems" },
    { "TRL", "Royal Information" },
    { "TRM", "Tekram Technology Company Ltd" },
    { "TRN", "Datacommunicatie Tron B.V." },
    { "TRS", "Torus Systems Ltd" },
    { "TRT", "Tritec Electronic AG" },
    { "TRU", "Aashima Technology B.V." },
    { "TRV", "Trivisio Prototyping GmbH" },
    { "TRX", "Trex Enterprises" },
    { "TSB", "Toshiba America Info Systems Inc" },
    { "TSC", "Sanyo Electric Company Ltd" },
    { "TSD", "TechniSat Digital GmbH" },
    { "TSE", "Tottori Sanyo Electric" },
    { "TSF", "Racal-Airtech Software Forge Ltd" },
    { "TSG", "The Software Group Ltd" },
    { "TSI", "TeleVideo Systems" },
    { "TSL", "Tottori SANYO Electric Co., Ltd." },
    { "TSP", "U.S. Navy" },
    { "TST", "Transtream Inc" },
    { "TSV", "TRANSVIDEO" },
    { "TSY", "TouchSystems" },
    { "TTA", "Topson Technology Co., Ltd." },
    { "TTB", "National Semiconductor Japan Ltd" },
    { "TTC", "Telecommunications Techniques Corporation" },
    { "TTE", "TTE, Inc." },
    { "TTI", "Trenton Terminals Inc" },
    { "TTK", "Totoku Electric Company Ltd" },
    { "TTL", "2-Tel B.V." },
    { "TTS", "TechnoTrend Systemtechnik GmbH" },
    { "TTY", "TRIDELITY Display Solutions GmbH" },
    { "TUA", "T+A elektroakustik GmbH" },
    { "TUT", "Tut Systems" },
    { "TVD", "Tecnovision" },
    { "TVI", "Truevision" },
    { "TVM", "Taiwan Video & Monitor Corporation" },
    { "TVO", "TV One Ltd" },
    { "TVR", "TV Interactive Corporation" },
    { "TVS", "TVS Electronics Limited" },
    { "TVV", "TV1 GmbH" },
    { "TWA", "Tidewater Association" },
    { "TWE", "Kontron Electronik" },
    { "TWH", "Twinhead International Corporation" },
    { "TWI", "Easytel oy" },
    { "TWK", "TOWITOKO electronics GmbH" },
    { "TWX", "TEKWorx Limited" },
    { "TXL", "Trixel Ltd" },
    { "TXN", "Texas Insturments" },
    { "TXT", "Textron Defense System" },
    { "TYN", "Tyan Computer Corporation" },
    { "UAS", "Ultima Associates Pte Ltd" },
    { "UBI", "Ungermann-Bass Inc" },
    { "UBL", "Ubinetics Ltd." },
    { "UDN", "Uniden Corporation" },
    { "UEC", "Ultima Electronics Corporation" },
    { "UEG", "Elitegroup Computer Systems Company Ltd" },
    { "UEI", "Universal Electronics Inc" },
    { "UET", "Universal Empowering Technologies" },
    { "UFG", "UNIGRAF-USA" },
    { "UFO", "UFO Systems Inc" },
    { "UHB", "XOCECO" },
    { "UIC", "Uniform Industrial Corporation" },
    { "UJR", "Ueda Japan Radio Co., Ltd." },
    { "ULT", "Ultra Network Tech" },
    { "UMC", "United Microelectr Corporation" },
    { "UMG", "Umezawa Giken Co.,Ltd" },
    { "UMM", "Universal Multimedia" },
    { "UNA", "Unisys DSD" },
    { "UNB", "Unisys Corporation" },
    { "UNC", "Unisys Corporation" },
    { "UND", "Unisys Corporation" },
    { "UNE", "Unisys Corporation" },
    { "UNF", "Unisys Corporation" },
    { "UNI", "Unisys Corporation" },
    { "UNM", "Unisys Corporation" },
    { "UNO", "Unisys Corporation" },
    { "UNP", "Unitop" },
    { "UNS", "Unisys Corporation" },
    { "UNT", "Unisys Corporation" },
    { "UNY", "Unicate" },
    { "UPP", "UPPI" },
    { "UPS", "Systems Enhancement" },
    { "URD", "Video Computer S.p.A." },
    { "USA", "Utimaco Safeware AG" },
    { "USD", "U.S. Digital Corporation" },
    { "USI", "Universal Scientific Industrial Co., Ltd." },
    { "USR", "U.S. Robotics Inc" },
    { "UTD", "Up to Date Tech" },
    { "UWC", "Uniwill Computer Corp." },
    { "VAD", "Vaddio, LLC" },
    { "VAL", "Valence Computing Corporation" },
    { "VAR", "Varian Australia Pty Ltd" },
    { "VBR", "VBrick Systems Inc." },
    { "VBT", "Valley Board Ltda" },
    { "VCC", "Virtual Computer Corporation" },
    { "VCI", "VistaCom Inc" },
    { "VCJ", "Victor Company of Japan, Limited" },
    { "VCM", "Vector Magnetics, LLC" },
    { "VCX", "VCONEX" },
    { "VDA", "Victor Data Systems" },
    { "VDC", "VDC Display Systems" },
    { "VDM", "Vadem" },
    { "VDO", "Video & Display Oriented Corporation" },
    { "VDS", "Vidisys GmbH & Company" },
    { "VDT", "Viditec, Inc." },
    { "VEC", "Vector Informatik GmbH" },
    { "VEK", "Vektrex" },
    { "VES", "Vestel Elektronik Sanayi ve Ticaret A. S." },
    { "VFI", "VeriFone Inc" },
    { "VHI", "Macrocad Development Inc." },
    { "VIA", "VIA Tech Inc" },
    { "VIB", "Tatung UK Ltd" },
    { "VIC", "Victron B.V." },
    { "VID", "Ingram Macrotron Germany" },
    { "VIK", "Viking Connectors" },
    { "VIM", "Via Mons Ltd." },
    { "VIN", "Vine Micros Ltd" },
    { "VIR", "Visual Interface, Inc" },
    { "VIS", "Visioneer" },
    { "VIT", "Visitech AS" },
    { "VIZ", "VIZIO, Inc" },
    { "VLB", "ValleyBoard Ltda." },
    { "VLK", "Vislink International Ltd" },
    { "VLT", "VideoLan Technologies" },
    { "VMI", "Vermont Microsystems" },
    { "VML", "Vine Micros Limited" },
    { "VMW", "VMware Inc.," },
    { "VNC", "Vinca Corporation" },
    { "VOB", "MaxData Computer AG" },
    { "VPI", "Video Products Inc" },
    { "VPR", "Best Buy" },
    { "VQ@", "Vision Quest" },
    { "VRC", "Virtual Resources Corporation" },
    { "VSC", "ViewSonic Corporation" },
    { "VSD", "3M" },
    { "VSI", "VideoServer" },
    { "VSN", "Ingram Macrotron" },
    { "VSP", "Vision Systems GmbH" },
    { "VSR", "V-Star Electronics Inc." },
    { "VTC", "VTel Corporation" },
    { "VTG", "Voice Technologies Group Inc" },
    { "VTI", "VLSI Tech Inc" },
    { "VTK", "Viewteck Co., Ltd." },
    { "VTL", "Vivid Technology Pte Ltd" },
    { "VTM", "Miltope Corporation" },
    { "VTN", "VIDEOTRON CORP." },
    { "VTS", "VTech Computers Ltd" },
    { "VTV", "VATIV Technologies" },
    { "VTX", "Vestax Corporation" },
    { "VUT", "Vutrix (UK) Ltd" },
    { "VWB", "Vweb Corp." },
    { "WAC", "Wacom Tech" },
    { "WAL", "Wave Access" },
    { "WAN", "DO NOT USE - WAN" },
    { "WAV", "Wavephore" },
    { "WBN", "MicroSoftWare" },
    { "WBS", "WB Systemtechnik GmbH" },
    { "WCI", "Wisecom Inc" },
    { "WCS", "Woodwind Communications Systems Inc" },
    { "WDC", "Western Digital" },
    { "WDE", "Westinghouse Digital Electronics" },
    { "WEB", "WebGear Inc" },
    { "WEC", "Winbond Electronics Corporation" },
    { "WEL", "W-DEV" },
    { "WEY", "WEY Design AG" },
    { "WHI", "Whistle Communications" },
    { "WII", "Innoware Inc" },
    { "WIL", "WIPRO Information Technology Ltd" },
    { "WIN", "Wintop Technology Inc" },
    { "WIP", "Wipro Infotech" },
    { "WKH", "Uni-Take Int'l Inc." },
    { "WLD", "Wildfire Communications Inc" },
    { "WML", "Wolfson Microelectronics Ltd" },
    { "WMO", "Westermo Teleindustri AB" },
    { "WMT", "Winmate Communication Inc" },
    { "WNI", "WillNet Inc." },
    { "WNV", "Winnov L.P." },
    { "WNX", "Wincor Nixdorf International GmbH" },
    { "WPA", "Matsushita Communication Industrial Co., Ltd." },
    { "WPI", "Wearnes Peripherals International (Pte) Ltd" },
    { "WRC", "WiNRADiO Communications" },
    { "WSC", "CIS Technology Inc" },
    { "WSP", "Wireless And Smart Products Inc." },
    { "WST", "Wistron Corporation" },
    { "WTC", "ACC Microelectronics" },
    { "WTI", "WorkStation Tech" },
    { "WTK", "Wearnes Thakral Pte" },
    { "WTS", "Restek Electric Company Ltd" },
    { "WVM", "Wave Systems Corporation" },
    { "WVV", "WolfVision GmbH" },
    { "WWV", "World Wide Video, Inc." },
    { "WXT", "Woxter Technology Co. Ltd" },
    { "WYS", "Wyse Technology" },
    { "WYT", "Wooyoung Image & Information Co.,Ltd." },
    { "XAC", "XAC Automation Corp" },
    { "XAD", "Alpha Data" },
    { "XDM", "XDM Ltd." },
    { "XER", "DO NOT USE - XER" },
    { "XFG", "Jan Strapko - FOTO" },
    { "XFO", "EXFO Electro Optical Engineering" },
    { "XIN", "Xinex Networks Inc" },
    { "XIO", "Xiotech Corporation" },
    { "XIR", "Xirocm Inc" },
    { "XIT", "Xitel Pty ltd" },
    { "XLX", "Xilinx, Inc." },
    { "XMM", "C3PO S.L." },
    { "XNT", "XN Technologies, Inc." },
    { "XOC", "DO NOT USE - XOC" },
    { "XQU", "SHANGHAI SVA-DAV ELECTRONICS CO., LTD" },
    { "XRC", "Xircom Inc" },
    { "XRO", "XORO ELECTRONICS (CHENGDU) LIMITED" },
    { "XSN", "Xscreen AS" },
    { "XST", "XS Technologies Inc" },
    { "XSY", "XSYS" },
    { "XTD", "Icuiti Corporation" },
    { "XTE", "X2E GmbH" },
    { "XTL", "Crystal Computer" },
    { "XTN", "X-10 (USA) Inc" },
    { "XYC", "Xycotec Computer GmbH" },
    { "YED", "Y-E Data Inc" },
    { "YHQ", "Yokogawa Electric Corporation" },
    { "YHW", "Exacom SA" },
    { "YMH", "Yamaha Corporation" },
    { "YOW", "American Biometric Company" },
    { "ZAN", "Zandar Technologies plc" },
    { "ZAX", "Zefiro Acoustics" },
    { "ZAZ", "Zazzle Technologies" },
    { "ZBR", "Zebra Technologies International, LLC" },
    { "ZCT", "ZeitControl cardsystems GmbH" },
    { "ZDS", "Zenith Data Systems" },
    { "ZGT", "Zenith Data Systems" },
    { "ZIC", "Nationz Technologies Inc." },
    { "ZMT", "Zalman Tech Co., Ltd." },
    { "ZMZ", "Z Microsystems" },
    { "ZNI", "Zetinet Inc" },
    { "ZNX", "Znyx Adv. Systems" },
    { "ZOW", "Zowie Intertainment, Inc" },
    { "ZRN", "Zoran Corporation" },
    { "ZSE", "Zenith Data Systems" },
    { "ZTC", "ZyDAS Technology Corporation" },
    { "ZTE", "ZTE Corporation" },
    { "ZTI", "Zoom Telephonics Inc" },
    { "ZTM", "ZT Group Int'l Inc." },
    { "ZTT", "Z3 Technology" },
    { "ZYD", "Zydacron Inc" },
    { "ZYP", "Zypcom Inc" },
    { "ZYT", "Zytex Computers" },
    { "ZYX", "Zyxel" },
    { "ZZZ", "Boca Research Inc" },
};
QT_END_NAMESPACE
#endif // QEDIDVENDORTABLE_P_H
#ifdef buffer
#elif defined(sharebits) && defined(pid_t)
/*
 * Copyright (C) 2015 The Qt Company Ltd
 *
 * This is part of HarfBuzz, an OpenType Layout engine library.
 *
 * Permission is hereby granted, without written agreement and without
 * license or royalty fees, to use, copy, modify, and distribute this
 * software and its documentation for any purpose, provided that the
 * above copyright notice and the following two paragraphs appear in
 * all copies of this software.
 *
 * IN NO EVENT SHALL THE COPYRIGHT HOLDER BE LIABLE TO ANY PARTY FOR
 * DIRECT, INDIRECT, SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES
 * ARISING OUT OF THE USE OF THIS SOFTWARE AND ITS DOCUMENTATION, EVEN
 * IF THE COPYRIGHT HOLDER HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH
 * DAMAGE.
 *
 * THE COPYRIGHT HOLDER SPECIFICALLY DISCLAIMS ANY WARRANTIES, INCLUDING,
 * BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND
 * FITNESS FOR A PARTICULAR PURPOSE.  THE SOFTWARE PROVIDED HEREUNDER IS
 * ON AN "AS IS" BASIS, AND THE COPYRIGHT HOLDER HAS NO OBLIGATION TO
 * PROVIDE MAINTENANCE, SUPPORT, UPDATES, ENHANCEMENTS, OR MODIFICATIONS.
 */
#include <appresent.lat>
#include <ar.h>
#include <argp.h>
#include <argz.h>
#define FLAG(x) (1 << (x))
static HB_Bool isLetter(HB_UChar16 ucs)
{
    const int test = FLAG(HB_Letter_Uppercase) |
                     FLAG(HB_Letter_Lowercase) |
                     FLAG(HB_Letter_Titlecase) |
                     FLAG(HB_Letter_Modifier) |
                     FLAG(HB_Letter_Other);
    return !!(FLAG(HB_GetUnicodeCharCategory(ucs)) & test);
}
static HB_Bool isMark(HB_UChar16 ucs)
{
    const int test = FLAG(HB_Mark_NonSpacing) |
                     FLAG(HB_Mark_SpacingCombining) |
                     FLAG(HB_Mark_Enclosing);
    return !!(FLAG(HB_GetUnicodeCharCategory(ucs)) & test);
}
enum Form {
    Invalid = 0x0,
    UnknownForm = Invalid,
    Consonant,
    Nukta,
    Halant,
    Matra,
    VowelMark,
    StressMark,
    IndependentVowel,
    LengthMark,
    Control,
    Other
};
static const unsigned char indicForms[0xe00-0x900] = {
    // Devangari
    Invalid, VowelMark, VowelMark, VowelMark,
    IndependentVowel, IndependentVowel, IndependentVowel, IndependentVowel,
    IndependentVowel, IndependentVowel, IndependentVowel, IndependentVowel,
    IndependentVowel, IndependentVowel, IndependentVowel, IndependentVowel,
    IndependentVowel, IndependentVowel, IndependentVowel, IndependentVowel,
    IndependentVowel, Consonant, Consonant, Consonant,
    Consonant, Consonant, Consonant, Consonant,
    Consonant, Consonant, Consonant, Consonant,
    Consonant, Consonant, Consonant, Consonant,
    Consonant, Consonant, Consonant, Consonant,
    Consonant, Consonant, Consonant, Consonant,
    Consonant, Consonant, Consonant, Consonant,
    Consonant, Consonant, Consonant, Consonant,
    Consonant, Consonant, Consonant, Consonant,
    Consonant, Consonant, UnknownForm, UnknownForm,
    Nukta, Other, Matra, Matra,
    Matra, Matra, Matra, Matra,
    Matra, Matra, Matra, Matra,
    Matra, Matra, Matra, Matra,
    Matra, Halant, UnknownForm, UnknownForm,
    Other, StressMark, StressMark, StressMark,
    StressMark, UnknownForm, UnknownForm, UnknownForm,
    Consonant, Consonant, Consonant, Consonant,
    Consonant, Consonant, Consonant, Consonant,
    IndependentVowel, IndependentVowel, VowelMark, VowelMark,
    Other, Other, Other, Other,
    Other, Other, Other, Other,
    Other, Other, Other, Other,
    Other, Other, Other, Other,
    Other, Other, Other, Other,
    Other, Other, Other, Consonant,
    Consonant, Consonant /* ??? */, Consonant, Consonant,
    // Bengali
    Invalid, VowelMark, VowelMark, VowelMark,
    Invalid, IndependentVowel, IndependentVowel, IndependentVowel,
    IndependentVowel, IndependentVowel, IndependentVowel, IndependentVowel,
    IndependentVowel, Invalid, Invalid, IndependentVowel,
    IndependentVowel, Invalid, Invalid, IndependentVowel,
    IndependentVowel, Consonant, Consonant, Consonant,
    Consonant, Consonant, Consonant, Consonant,
    Consonant, Consonant, Consonant, Consonant,
    Consonant, Consonant, Consonant, Consonant,
    Consonant, Consonant, Consonant, Consonant,
    Consonant, Invalid, Consonant, Consonant,
    Consonant, Consonant, Consonant, Consonant,
    Consonant, Invalid, Consonant, Invalid,
    Invalid, Invalid, Consonant, Consonant,
    Consonant, Consonant, UnknownForm, UnknownForm,
    Nukta, Other, Matra, Matra,
    Matra, Matra, Matra, Matra,
    Matra, Invalid, Invalid, Matra,
    Matra, Invalid, Invalid, Matra,
    Matra, Halant, Consonant, UnknownForm,
    Invalid, Invalid, Invalid, Invalid,
    Invalid, Invalid, Invalid, VowelMark,
    Invalid, Invalid, Invalid, Invalid,
    Consonant, Consonant, Invalid, Consonant,
    IndependentVowel, IndependentVowel, VowelMark, VowelMark,
    Other, Other, Other, Other,
    Other, Other, Other, Other,
    Other, Other, Other, Other,
    Consonant, Consonant, Other, Other,
    Other, Other, Other, Other,
    Other, Other, Other, Other,
    Other, Other, Other, Other,
    // Gurmukhi
    Invalid, VowelMark, VowelMark, VowelMark,
    Invalid, IndependentVowel, IndependentVowel, IndependentVowel,
    IndependentVowel, IndependentVowel, IndependentVowel, Invalid,
    Invalid, Invalid, Invalid, IndependentVowel,
    IndependentVowel, Invalid, Invalid, IndependentVowel,
    IndependentVowel, Consonant, Consonant, Consonant,
    Consonant, Consonant, Consonant, Consonant,
    Consonant, Consonant, Consonant, Consonant,
    Consonant, Consonant, Consonant, Consonant,
    Consonant, Consonant, Consonant, Consonant,
    Consonant, Invalid, Consonant, Consonant,
    Consonant, Consonant, Consonant, Consonant,
    Consonant, Invalid, Consonant, Consonant,
    Invalid, Consonant, Consonant, Invalid,
    Consonant, Consonant, UnknownForm, UnknownForm,
    Nukta, Other, Matra, Matra,
    Matra, Matra, Matra, Invalid,
    Invalid, Invalid, Invalid, Matra,
    Matra, Invalid, Invalid, Matra,
    Matra, Halant, UnknownForm, UnknownForm,
    Invalid, Invalid, Invalid, Invalid,
    Invalid, UnknownForm, UnknownForm, UnknownForm,
    Invalid, Consonant, Consonant, Consonant,
    Consonant, Invalid, Consonant, Invalid,
    Other, Other, Invalid, Invalid,
    Other, Other, Other, Other,
    Other, Other, Other, Other,
    Other, Other, Other, Other,
    StressMark, StressMark, Consonant, Consonant,
    Other, Other, Other, Other,
    Other, Other, Other, Other,
    Other, Other, Other, Other,
    // Gujarati
    Invalid, VowelMark, VowelMark, VowelMark,
    Invalid, IndependentVowel, IndependentVowel, IndependentVowel,
    IndependentVowel, IndependentVowel, IndependentVowel, IndependentVowel,
    IndependentVowel, IndependentVowel, Invalid, IndependentVowel,
    IndependentVowel, IndependentVowel, Invalid, IndependentVowel,
    IndependentVowel, Consonant, Consonant, Consonant,
    Consonant, Consonant, Consonant, Consonant,
    Consonant, Consonant, Consonant, Consonant,
    Consonant, Consonant, Consonant, Consonant,
    Consonant, Consonant, Consonant, Consonant,
    Consonant, Invalid, Consonant, Consonant,
    Consonant, Consonant, Consonant, Consonant,
    Consonant, Invalid, Consonant, Consonant,
    Invalid, Consonant, Consonant, Consonant,
    Consonant, Consonant, UnknownForm, UnknownForm,
    Nukta, Other, Matra, Matra,
    Matra, Matra, Matra, Matra,
    Matra, Matra, Invalid, Matra,
    Matra, Matra, Invalid, Matra,
    Matra, Halant, UnknownForm, UnknownForm,
    Other, UnknownForm, UnknownForm, UnknownForm,
    UnknownForm, UnknownForm, UnknownForm, UnknownForm,
    UnknownForm, UnknownForm, UnknownForm, UnknownForm,
    UnknownForm, UnknownForm, UnknownForm, UnknownForm,
    IndependentVowel, IndependentVowel, VowelMark, VowelMark,
    Other, Other, Other, Other,
    Other, Other, Other, Other,
    Other, Other, Other, Other,
    Other, Other, Other, Other,
    Other, Other, Other, Other,
    Other, Other, Other, Other,
    Other, Other, Other, Other,
    // Oriya
    Invalid, VowelMark, VowelMark, VowelMark,
    Invalid, IndependentVowel, IndependentVowel, IndependentVowel,
    IndependentVowel, IndependentVowel, IndependentVowel, IndependentVowel,
    IndependentVowel, Invalid, Invalid, IndependentVowel,
    IndependentVowel, Invalid, Invalid, IndependentVowel,
    IndependentVowel, Consonant, Consonant, Consonant,
    Consonant, Consonant, Consonant, Consonant,
    Consonant, Consonant, Consonant, Consonant,
    Consonant, Consonant, Consonant, Consonant,
    Consonant, Consonant, Consonant, Consonant,
    Consonant, Invalid, Consonant, Consonant,
    Consonant, Consonant, Consonant, Consonant,
    Consonant, Invalid, Consonant, Consonant,
    Invalid, Consonant, Consonant, Consonant,
    Consonant, Consonant, UnknownForm, UnknownForm,
    Nukta, Other, Matra, Matra,
    Matra, Matra, Matra, Matra,
    Invalid, Invalid, Invalid, Matra,
    Matra, Invalid, Invalid, Matra,
    Matra, Halant, UnknownForm, UnknownForm,
    Other, Invalid, Invalid, Invalid,
    Invalid, UnknownForm, LengthMark, LengthMark,
    Invalid, Invalid, Invalid, Invalid,
    Consonant, Consonant, Invalid, Consonant,
    IndependentVowel, IndependentVowel, Invalid, Invalid,
    Invalid, Invalid, Other, Other,
    Other, Other, Other, Other,
    Other, Other, Other, Other,
    Other, Consonant, Other, Other,
    Other, Other, Other, Other,
    Other, Other, Other, Other,
    Other, Other, Other, Other,
    //Tamil
    Invalid, Invalid, VowelMark, Other,
    Invalid, IndependentVowel, IndependentVowel, IndependentVowel,
    IndependentVowel, IndependentVowel, IndependentVowel, Invalid,
    Invalid, Invalid, IndependentVowel, IndependentVowel,
    IndependentVowel, Invalid, IndependentVowel, IndependentVowel,
    IndependentVowel, Consonant, Invalid, Invalid,
    Invalid, Consonant, Consonant, Invalid,
    Consonant, Invalid, Consonant, Consonant,
    Invalid, Invalid, Invalid, Consonant,
    Consonant, Invalid, Invalid, Invalid,
    Consonant, Consonant, Consonant, Invalid,
    Invalid, Invalid, Consonant, Consonant,
    Consonant, Consonant, Consonant, Consonant,
    Consonant, Consonant, Consonant, Consonant,
    Consonant, Consonant, UnknownForm, UnknownForm,
    Invalid, Invalid, Matra, Matra,
    Matra, Matra, Matra, Invalid,
    Invalid, Invalid, Matra, Matra,
    Matra, Invalid, Matra, Matra,
    Matra, Halant, Invalid, Invalid,
    Invalid, Invalid, Invalid, Invalid,
    Invalid, Invalid, Invalid, LengthMark,
    Invalid, Invalid, Invalid, Invalid,
    Invalid, Invalid, Invalid, Invalid,
    Invalid, Invalid, Invalid, Invalid,
    Invalid, Invalid, Other, Other,
    Other, Other, Other, Other,
    Other, Other, Other, Other,
    Other, Other, Other, Other,
    Other, Other, Other, Other,
    Other, Other, Other, Other,
    Other, Other, Other, Other,
    // Telugu
    Invalid, VowelMark, VowelMark, VowelMark,
    Invalid, IndependentVowel, IndependentVowel, IndependentVowel,
    IndependentVowel, IndependentVowel, IndependentVowel, IndependentVowel,
    IndependentVowel, Invalid, IndependentVowel, IndependentVowel,
    IndependentVowel, Invalid, IndependentVowel, IndependentVowel,
    IndependentVowel, Consonant, Consonant, Consonant,
    Consonant, Consonant, Consonant, Consonant,
    Consonant, Consonant, Consonant, Consonant,
    Consonant, Consonant, Consonant, Consonant,
    Consonant, Consonant, Consonant, Consonant,
    Consonant, Invalid, Consonant, Consonant,
    Consonant, Consonant, Consonant, Consonant,
    Consonant, Consonant, Consonant, Consonant,
    Invalid, Consonant, Consonant, Consonant,
    Consonant, Consonant, UnknownForm, UnknownForm,
    Invalid, Invalid, Matra, Matra,
    Matra, Matra, Matra, Matra,
    Matra, Invalid, Matra, Matra,
    Matra, Invalid, Matra, Matra,
    Matra, Halant, Invalid, Invalid,
    Invalid, Invalid, Invalid, Invalid,
    Invalid, LengthMark, Matra, Invalid,
    Invalid, Invalid, Invalid, Invalid,
    Invalid, Invalid, Invalid, Invalid,
    IndependentVowel, IndependentVowel, Invalid, Invalid,
    Invalid, Invalid, Other, Other,
    Other, Other, Other, Other,
    Other, Other, Other, Other,
    Other, Other, Other, Other,
    Other, Other, Other, Other,
    Other, Other, Other, Other,
    Other, Other, Other, Other,
    // Kannada
    Invalid, Invalid, VowelMark, VowelMark,
    Invalid, IndependentVowel, IndependentVowel, IndependentVowel,
    IndependentVowel, IndependentVowel, IndependentVowel, IndependentVowel,
    IndependentVowel, Invalid, IndependentVowel, IndependentVowel,
    IndependentVowel, Invalid, IndependentVowel, IndependentVowel,
    IndependentVowel, Consonant, Consonant, Consonant,
    Consonant, Consonant, Consonant, Consonant,
    Consonant, Consonant, Consonant, Consonant,
    Consonant, Consonant, Consonant, Consonant,
    Consonant, Consonant, Consonant, Consonant,
    Consonant, Invalid, Consonant, Consonant,
    Consonant, Consonant, Consonant, Consonant,
    Consonant, Consonant, Consonant, Consonant,
    Invalid, Consonant, Consonant, Consonant,
    Consonant, Consonant, UnknownForm, UnknownForm,
    Nukta, Other, Matra, Matra,
    Matra, Matra, Matra, Matra,
    Matra, Invalid, Matra, Matra,
    Matra, Invalid, Matra, Matra,
    Matra, Halant, Invalid, Invalid,
    Invalid, Invalid, Invalid, Invalid,
    Invalid, LengthMark, LengthMark, Invalid,
    Invalid, Invalid, Invalid, Invalid,
    Invalid, Invalid, Consonant, Invalid,
    IndependentVowel, IndependentVowel, VowelMark, VowelMark,
    Invalid, Invalid, Other, Other,
    Other, Other, Other, Other,
    Other, Other, Other, Other,
    Other, Other, Other, Other,
    Other, Other, Other, Other,
    Other, Other, Other, Other,
    Other, Other, Other, Other,
    // Malayalam
    Invalid, Invalid, VowelMark, VowelMark,
    Invalid, IndependentVowel, IndependentVowel, IndependentVowel,
    IndependentVowel, IndependentVowel, IndependentVowel, IndependentVowel,
    IndependentVowel, Invalid, IndependentVowel, IndependentVowel,
    IndependentVowel, Invalid, IndependentVowel, IndependentVowel,
    IndependentVowel, Consonant, Consonant, Consonant,
    Consonant, Consonant, Consonant, Consonant,
    Consonant, Consonant, Consonant, Consonant,
    Consonant, Consonant, Consonant, Consonant,
    Consonant, Consonant, Consonant, Consonant,
    Consonant, Invalid, Consonant, Consonant,
    Consonant, Consonant, Consonant, Consonant,
    Consonant, Consonant, Consonant, Consonant,
    Consonant, Consonant, Consonant, Consonant,
    Consonant, Consonant, UnknownForm, UnknownForm,
    Invalid, Invalid, Matra, Matra,
    Matra, Matra, Matra, Matra,
    Invalid, Invalid, Matra, Matra,
    Matra, Invalid, Matra, Matra,
    Matra, Halant, Invalid, Invalid,
    Invalid, Invalid, Invalid, Invalid,
    Invalid, Invalid, Invalid, Matra,
    Invalid, Invalid, Invalid, Invalid,
    Invalid, Invalid, Invalid, Invalid,
    IndependentVowel, IndependentVowel, Invalid, Invalid,
    Invalid, Invalid, Other, Other,
    Other, Other, Other, Other,
    Other, Other, Other, Other,
    Other, Other, Other, Other,
    Other, Other, Other, Other,
    Other, Other, Other, Other,
    Other, Other, Other, Other,
    // Sinhala
    Invalid, Invalid, VowelMark, VowelMark,
    Invalid, IndependentVowel, IndependentVowel, IndependentVowel,
    IndependentVowel, IndependentVowel, IndependentVowel, IndependentVowel,
    IndependentVowel, IndependentVowel, IndependentVowel, IndependentVowel,
    IndependentVowel, IndependentVowel, IndependentVowel, IndependentVowel,
    IndependentVowel, IndependentVowel, IndependentVowel, Invalid,
    Invalid, Invalid, Consonant, Consonant,
    Consonant, Consonant, Consonant, Consonant,
    Consonant, Consonant, Consonant, Consonant,
    Consonant, Consonant, Consonant, Consonant,
    Consonant, Consonant, Consonant, Consonant,
    Consonant, Consonant, Consonant, Consonant,
    Consonant, Consonant, Invalid, Consonant,
    Consonant, Consonant, Consonant, Consonant,
    Consonant, Consonant, Consonant, Consonant,
    Invalid, Consonant, Invalid, Invalid,
    Consonant, Consonant, Consonant, Consonant,
    Consonant, Consonant, Consonant, Invalid,
    Invalid, Invalid, Halant, Invalid,
    Invalid, Invalid, Invalid, Matra,
    Matra, Matra, Matra, Matra,
    Matra, Invalid, Matra, Invalid,
    Matra, Matra, Matra, Matra,
    Matra, Matra, Matra, Matra,
    Invalid, Invalid, Invalid, Invalid,
    Invalid, Invalid, Invalid, Invalid,
    Invalid, Invalid, Invalid, Invalid,
    Invalid, Invalid, Invalid, Invalid,
    Invalid, Invalid, Matra, Matra,
    Other, Other, Other, Other,
    Other, Other, Other, Other,
    Other, Other, Other, Other,
};
enum Position {
    None,
    Pre,
    Above,
    Below,
    Post,
    Split,
    Base,
    Reph,
    Vattu,
    Inherit
};
static const unsigned char indicPosition[0xe00-0x900] = {
    // Devanagari
    None, Above, Above, Post,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    Below, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, Post, Pre,
    Post, Below, Below, Below,
    Below, Above, Above, Above,
    Above, Post, Post, Post,
    Post, None, None, None,
    None, Above, Below, Above,
    Above, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, Below, Below,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    // Bengali
    None, Above, Post, Post,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    Below, None, None, Post,
    Below, None, None, None,
    None, None, None, None,
    None, None, None, None,
    Below, None, Post, Pre,
    Post, Below, Below, Below,
    Below, None, None, Pre,
    Pre, None, None, Split,
    Split, Below, None, None,
    None, None, None, None,
    None, None, None, Post,
    None, None, None, None,
    None, None, None, None,
    None, None, Below, Below,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    Below, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    // Gurmukhi
    None, Above, Above, Post,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, Post,
    Below, None, None, None,
    None, Below, None, None,
    None, Below, None, None,
    Below, None, Post, Pre,
    Post, Below, Below, None,
    None, None, None, Above,
    Above, None, None, Above,
    Above, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    Above, Above, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    // Gujarati
    None, Above, Above, Post,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    Below, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, Post, Pre,
    Post, Below, Below, Below,
    Below, Above, None, Above,
    Above, Post, None, Post,
    Post, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, Below, Below,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    // Oriya
    None, Above, Post, Post,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, Below, Below, Below,
    Below, Below, Below, Below,
    Below, Below, None, Below,
    Below, Below, Below, Below,
    Below, Below, Below, Below,
    Below, None, Below, Below,
    Below, Below, Below, Post,
    Below, None, Below, Below,
    None, Below, Below, Below,
    Below, Below, None, None,
    None, None, Post, Above,
    Post, Below, Below, Below,
    None, None, None, Pre,
    Split, None, None, Split,
    Split, None, None, None,
    None, None, None, None,
    None, None, Above, Post,
    None, None, None, None,
    None, None, None, Post,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, Below, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    // Tamil
    None, None, Above, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, Post, Post,
    Above, Below, Below, None,
    None, None, Pre, Pre,
    Pre, None, Split, Split,
    Split, Halant, None, None,
    None, None, None, None,
    None, None, None, Post,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    // Telugu
    None, Post, Post, Post,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, Below, Below, Below,
    Below, Below, Below, Below,
    Below, Below, Below, Below,
    Below, Below, Below, Below,
    Below, Below, Below, Below,
    Below, None, Below, Below,
    Below, Below, Below, Below,
    Below, None, Below, Below,
    None, Below, Below, Below,
    Below, Below, None, None,
    None, None, Post, Above,
    Above, Post, Post, Post,
    Post, None, Above, Above,
    Split, None, Post, Above,
    Above, Halant, None, None,
    None, None, None, None,
    None, Above, Below, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    // Kannada
    None, None, Post, Post,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, Below, Below, Below,
    Below, Below, Below, Below,
    Below, Below, Below, Below,
    Below, Below, Below, Below,
    Below, Below, Below, Below,
    Below, Below, Below, Below,
    Below, Below, Below, Below,
    Below, None, Below, Below,
    None, Below, Below, Below,
    Below, Below, None, None,
    None, None, Post, Above,
    Split, Post, Post, Post,
    Post, None, Above, Split,
    Split, None, Split, Split,
    Above, Halant, None, None,
    None, None, None, None,
    None, Post, Post, None,
    None, None, None, None,
    None, None, Below, None,
    None, None, Below, Below,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    // Malayalam
    None, None, Post, Post,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, Post,
    Pre, None, Below, None,
    None, Post, None, None,
    None, None, None, None,
    None, None, Post, Post,
    Post, Post, Post, Post,
    None, None, Pre, Pre,
    Pre, None, Split, Split,
    Split, Halant, None, None,
    None, None, None, None,
    None, None, None, Post,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    // Sinhala
    None, None, Post, Post,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, Post,
    Post, Post, Above, Above,
    Below, None, Below, None,
    Post, Pre, Split, Pre,
    Split, Split, Split, Post,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None,
    None, None, Post, Post,
    None, None, None, None,
    None, None, None, None,
    None, None, None, None
};
static inline Form form(unsigned short uc) {
    if (uc < 0x900 || uc > 0xdff) {
        if (uc == 0x25cc)
            return Consonant;
        if (uc == 0x200c || uc == 0x200d)
            return Control;
        return Other;
    }
    return (Form)indicForms[uc-0x900];
}
static inline Position indic_position(unsigned short uc) {
    if (uc < 0x900 || uc > 0xdff)
        return None;
    return (Position) indicPosition[uc-0x900];
}
enum IndicScriptProperties {
    HasReph = 0x01,
    HasSplit = 0x02
};
const hb_uint8 scriptProperties[10] = {
    // Devanagari,
    HasReph,
    // Bengali,
    HasReph|HasSplit,
    // Gurmukhi,
    0,
    // Gujarati,
    HasReph,
    // Oriya,
    HasReph|HasSplit,
    // Tamil,
    HasSplit,
    // Telugu,
    HasSplit,
    // Kannada,
    HasSplit|HasReph,
    // Malayalam,
    HasSplit,
    // Sinhala,
    HasSplit
};
struct IndicOrdering {
    Form form;
    Position position;
};
static const IndicOrdering devanagari_order [] = {
    { Consonant, Below },
    { Matra, Below },
    { VowelMark, Below },
    { StressMark, Below },
    { Matra, Above },
    { Matra, Post },
    { Consonant, Reph },
    { VowelMark, Above },
    { StressMark, Above },
    { VowelMark, Post },
    { (Form)0, None }
};
static const IndicOrdering bengali_order [] = {
    { Consonant, Below },
    { Matra, Below },
    { Matra, Above },
    { Consonant, Reph },
    { VowelMark, Above },
    { Consonant, Post },
    { Matra, Post },
    { VowelMark, Post },
    { (Form)0, None }
};
static const IndicOrdering gurmukhi_order [] = {
    { Consonant, Below },
    { Matra, Below },
    { Matra, Above },
    { Consonant, Post },
    { Matra, Post },
    { VowelMark, Above },
    { (Form)0, None }
};
static const IndicOrdering tamil_order [] = {
    { Matra, Above },
    { Matra, Post },
    { VowelMark, Post },
    { (Form)0, None }
};
static const IndicOrdering telugu_order [] = {
    { Matra, Above },
    { Matra, Below },
    { Matra, Post },
    { Consonant, Below },
    { Consonant, Post },
    { VowelMark, Post },
    { (Form)0, None }
};
static const IndicOrdering kannada_order [] = {
    { Matra, Above },
    { Matra, Post },
    { Consonant, Below },
    { Consonant, Post },
    { LengthMark, Post },
    { Consonant, Reph },
    { VowelMark, Post },
    { (Form)0, None }
};
static const IndicOrdering malayalam_order [] = {
    { Consonant, Below },
    { Matra, Below },
    { Consonant, Reph },
    { Consonant, Post },
    { Matra, Post },
    { VowelMark, Post },
    { (Form)0, None }
};
static const IndicOrdering sinhala_order [] = {
    { Matra, Below },
    { Matra, Above },
    { Matra, Post },
    { VowelMark, Post },
    { (Form)0, None }
};
static const IndicOrdering * const indic_order[] = {
    devanagari_order, // Devanagari
    bengali_order, // Bengali
    gurmukhi_order, // Gurmukhi
    devanagari_order, // Gujarati
    bengali_order, // Oriya
    tamil_order, // Tamil
    telugu_order, // Telugu
    kannada_order, // Kannada
    malayalam_order, // Malayalam
    sinhala_order // Sinhala
};
// vowel matras that have to be split into two parts.
static const unsigned short split_matras[]  = {
    //  matra, split1, split2, split3
    // bengalis
    0x9cb, 0x9c7, 0x9be, 0x0,
    0x9cc, 0x9c7, 0x9d7, 0x0,
    // oriya
    0xb48, 0xb47, 0xb56, 0x0,
    0xb4b, 0xb47, 0xb3e, 0x0,
    0xb4c, 0xb47, 0xb57, 0x0,
    // tamil
    0xbca, 0xbc6, 0xbbe, 0x0,
    0xbcb, 0xbc7, 0xbbe, 0x0,
    0xbcc, 0xbc6, 0xbd7, 0x0,
    // telugu
    0xc48, 0xc46, 0xc56, 0x0,
    // kannada
    0xcc0, 0xcbf, 0xcd5, 0x0,
    0xcc7, 0xcc6, 0xcd5, 0x0,
    0xcc8, 0xcc6, 0xcd6, 0x0,
    0xcca, 0xcc6, 0xcc2, 0x0,
    0xccb, 0xcc6, 0xcc2, 0xcd5,
    // malayalam
    0xd4a, 0xd46, 0xd3e, 0x0,
    0xd4b, 0xd47, 0xd3e, 0x0,
    0xd4c, 0xd46, 0xd57, 0x0,
    // sinhala
    0xdda, 0xdd9, 0xdca, 0x0,
    0xddc, 0xdd9, 0xdcf, 0x0,
    0xddd, 0xdd9, 0xdcf, 0xdca,
    0xdde, 0xdd9, 0xddf, 0x0,
    0xffff
};
static inline void splitMatra(unsigned short *reordered, int matra, int &len)
{
    unsigned short matra_uc = reordered[matra];
    //qDebug("matra=%d, reordered[matra]=%x", matra, reordered[matra]);
    const unsigned short *split = split_matras;
    while (split[0] < matra_uc)
        split += 4;
    assert(*split == matra_uc);
    ++split;
    int added_chars = split[2] == 0x0 ? 1 : 2;
    memmove(reordered + matra + added_chars, reordered + matra, (len-matra)*sizeof(unsigned short));
    reordered[matra] = split[0];
    reordered[matra+1] = split[1];
    if(added_chars == 2)
        reordered[matra+2] = split[2];
    len += added_chars;
}
#ifndef NO_OPENTYPE
static const HB_OpenTypeFeature indic_features[] = {
    { HB_MAKE_TAG('l', 'o', 'c', 'a'), LocaProperty },
    { HB_MAKE_TAG('c', 'c', 'm', 'p'), CcmpProperty },
    { HB_MAKE_TAG('i', 'n', 'i', 't'), InitProperty },
    { HB_MAKE_TAG('n', 'u', 'k', 't'), NuktaProperty },
    { HB_MAKE_TAG('a', 'k', 'h', 'n'), AkhantProperty },
    { HB_MAKE_TAG('r', 'p', 'h', 'f'), RephProperty },
    { HB_MAKE_TAG('b', 'l', 'w', 'f'), BelowFormProperty },
    { HB_MAKE_TAG('h', 'a', 'l', 'f'), HalfFormProperty },
    { HB_MAKE_TAG('p', 's', 't', 'f'), PostFormProperty },
    { HB_MAKE_TAG('c', 'j', 'c', 't'), ConjunctFormProperty },
    { HB_MAKE_TAG('v', 'a', 't', 'u'), VattuProperty },
    { HB_MAKE_TAG('p', 'r', 'e', 's'), PreSubstProperty },
    { HB_MAKE_TAG('b', 'l', 'w', 's'), BelowSubstProperty },
    { HB_MAKE_TAG('a', 'b', 'v', 's'), AboveSubstProperty },
    { HB_MAKE_TAG('p', 's', 't', 's'), PostSubstProperty },
    { HB_MAKE_TAG('h', 'a', 'l', 'n'), HalantProperty },
    { HB_MAKE_TAG('c', 'a', 'l', 't'), IndicCaltProperty },
    { 0, 0 }
};
#endif
// #define INDIC_DEBUG
#ifdef INDIC_DEBUG
#define IDEBUG hb_debug
#include <stdarg.h>
static void hb_debug(const char *msg, ...)
{
    va_list ap;
    va_start(ap, msg); // use variable arg list
    vfprintf(stderr, msg, ap);
    va_end(ap);
    fprintf(stderr, "\n");
}
#else
#define IDEBUG if(0) printf
#endif
#if 0 //def INDIC_DEBUG
static QString propertiesToString(int properties)
{
    QString res;
    properties = ~properties;
    if (properties & LocaProperty)
        res += "Loca ";
    if (properties & CcmpProperty)
        res += "Ccmp ";
    if (properties & InitProperty)
        res += "Init ";
    if (properties & NuktaProperty)
        res += "Nukta ";
    if (properties & AkhantProperty)
        res += "Akhant ";
    if (properties & RephProperty)
        res += "Reph ";
    if (properties & PreFormProperty)
        res += "PreForm ";
    if (properties & BelowFormProperty)
        res += "BelowForm ";
    if (properties & AboveFormProperty)
        res += "AboveForm ";
    if (properties & HalfFormProperty)
        res += "HalfForm ";
    if (properties & PostFormProperty)
        res += "PostForm ";
    if (properties & ConjunctFormProperty)
        res += "PostForm ";
    if (properties & VattuProperty)
        res += "Vattu ";
    if (properties & PreSubstProperty)
        res += "PreSubst ";
    if (properties & BelowSubstProperty)
        res += "BelowSubst ";
    if (properties & AboveSubstProperty)
        res += "AboveSubst ";
    if (properties & PostSubstProperty)
        res += "PostSubst ";
    if (properties & HalantProperty)
        res += "Halant ";
    if (properties & CligProperty)
        res += "Clig ";
    if (properties & IndicCaltProperty)
        res += "Calt ";
    return res;
}
#endif
static bool indic_shape_syllable(HB_Bool openType, HB_ShaperItem *item, bool invalid)
{
    HB_Script script = item->item.script;
    assert(script >= HB_Script_Devanagari && script <= HB_Script_Sinhala);
    const unsigned short script_base = 0x0900 + 0x80*(script-HB_Script_Devanagari);
    const unsigned short ra = script_base + 0x30;
    const unsigned short halant = script_base + 0x4d;
    const unsigned short nukta = script_base + 0x3c;
    bool control = false;
    int len = (int)item->item.length;
    IDEBUG(">>>>> indic shape: from=%d, len=%d invalid=%d", item->item.pos, item->item.length, invalid);
    if ((int)item->num_glyphs < len+4) {
        item->num_glyphs = len+4;
        return false;
    }
    HB_STACKARRAY(HB_UChar16, reordered, len + 4);
    HB_STACKARRAY(hb_uint8, position, len + 4);
    unsigned char properties = scriptProperties[script-HB_Script_Devanagari];
    if (invalid) {
        *reordered = 0x25cc;
        memcpy(reordered+1, item->string + item->item.pos, len*sizeof(HB_UChar16));
        len++;
    } else {
        memcpy(reordered, item->string + item->item.pos, len*sizeof(HB_UChar16));
    }
    if (reordered[len-1] == 0x200c) // zero width non joiner
        len--;
    int i;
    int base = 0;
    int reph = -1;
#ifdef INDIC_DEBUG
    IDEBUG("original:");
    for (i = 0; i < len; i++) {
        IDEBUG("    %d: %4x", i, reordered[i]);
    }
#endif
    if (len != 1) {
        HB_UChar16 *uc = reordered;
        bool beginsWithRa = false;
        // Rule 1: find base consonant
        //
        // The shaping engine finds the base consonant of the
        // syllable, using the following algorithm: starting from the
        // end of the syllable, move backwards until a consonant is
        // found that does not have a below-base or post-base form
        // (post-base forms have to follow below-base forms), or
        // arrive at the first consonant. The consonant stopped at
        // will be the base.
        //
        //  * If the syllable starts with Ra + H (in a script that has
        //    'Reph'), Ra is excluded from candidates for base
        //    consonants.
        //
        // * In Kannada and Telugu, the base consonant cannot be
        //   farther than 3 consonants from the end of the syllable.
        // #### replace the HasReph property by testing if the feature exists in the font!
        if (form(*uc) == Consonant || (script == HB_Script_Bengali && form(*uc) == IndependentVowel)) {
            if ((properties & HasReph) && (len > 2) &&
                (*uc == ra || *uc == 0x9f0) && *(uc+1) == halant)
                beginsWithRa = true;
            if (beginsWithRa && form(*(uc+2)) == Control)
                beginsWithRa = false;
            base = (beginsWithRa ? 2 : 0);
            IDEBUG("    length = %d, beginsWithRa = %d, base=%d", len, beginsWithRa, base);
            int lastConsonant = 0;
            int matra = -1;
            // we remember:
            // * the last consonant since we need it for rule 2
            // * the matras position for rule 3 and 4
            // figure out possible base glyphs
            memset(position, 0, len);
            if (script == HB_Script_Devanagari || script == HB_Script_Gujarati) {
                bool vattu = false;
                for (i = base; i < len; ++i) {
                    position[i] = form(uc[i]);
                    if (position[i] == Consonant) {
                        lastConsonant = i;
                        vattu = (!vattu && uc[i] == ra);
                        if (vattu) {
                            IDEBUG("excluding vattu glyph at %d from base candidates", i);
                            position[i] = Vattu;
                        }
                    } else if (position[i] == Matra) {
                        matra = i;
                    }
                }
            } else {
                for (i = base; i < len; ++i) {
                    position[i] = form(uc[i]);
                    if (position[i] == Consonant)
                        lastConsonant = i;
                    else if (matra < 0 && position[i] == Matra)
                        matra = i;
                }
            }
            int skipped = 0;
            Position pos = Post;
            for (i = len-1; i >= base; i--) {
                if (position[i] != Consonant && (position[i] != Control || script == HB_Script_Kannada))
                    StartPlay;
                if (i < len-1 && position[i] == Control && position[i+1] == Consonant) {
                    base = i+1;
                    break;
                }
                Position charPosition = indic_position(uc[i]);
                if (pos == Post && charPosition == Post) {
                    pos = Post;
                } else if ((pos == Post || pos == Below) && charPosition == Below) {
                    if (script == HB_Script_Devanagari || script == HB_Script_Gujarati)
                        base = i;
                    pos = Below;
                } else {
                    base = i;
                    break;
                }
                if (skipped == 2 && (script == HB_Script_Kannada || script == HB_Script_Telugu)) {
                    base = i;
                    break;
                }
                ++skipped;
            }
            IDEBUG("    base consonant at %d skipped=%d, lastConsonant=%d", base, skipped, lastConsonant);
            // Rule 2:
            //
            // If the base consonant is not the last one, Uniscribe
            // moves the halant from the base consonant to the last
            // one.
            if (lastConsonant > base) {
                int halantPos = 0;
                if (uc[base+1] == halant)
                    halantPos = base + 1;
                else if (uc[base+1] == nukta && uc[base+2] == halant)
                    halantPos = base + 2;
                if (halantPos > 0) {
                    IDEBUG("    moving halant from %d to %d!", base+1, lastConsonant);
                    for (i = halantPos; i < lastConsonant; i++)
                        uc[i] = uc[i+1];
                    uc[lastConsonant] = halant;
                }
            }
            // Rule 3:
            //
            // If the syllable starts with Ra + H, Uniscribe moves
            // this combination so that it follows either:
            // * the post-base 'matra' (if any) or the base consonant
            //   (in scripts that show similarity to Devanagari, i.e.,
            //   Devanagari, Gujarati, Bengali)
            // * the base consonant (other scripts)
            // * the end of the syllable (Kannada)
            Position matra_position = None;
            if (matra > 0)
                matra_position = indic_position(uc[matra]);
            IDEBUG("    matra at %d with form %d, base=%d", matra, matra_position, base);
            if (beginsWithRa && base != 0) {
                int toPos = base+1;
                if (toPos < len && uc[toPos] == nukta)
                    toPos++;
                if (toPos < len && uc[toPos] == halant)
                    toPos++;
                if (toPos < len && uc[toPos] == 0x200d)
                    toPos++;
                if (toPos < len-1 && uc[toPos] == ra && uc[toPos+1] == halant)
                    toPos += 2;
                if (script == HB_Script_Devanagari || script == HB_Script_Gujarati || script == HB_Script_Bengali) {
                    if (matra_position == Post || matra_position == Split) {
                        toPos = matra+1;
                        matra -= 2;
                    }
                } else if (script == HB_Script_Kannada) {
                    toPos = len;
                    matra -= 2;
                }
                IDEBUG("moving leading ra+halant to position %d", toPos);
                for (i = 2; i < toPos; i++)
                    uc[i-2] = uc[i];
                uc[toPos-2] = ra;
                uc[toPos-1] = halant;
                base -= 2;
                if (properties & HasReph)
                    reph = toPos-2;
            }
            // Rule 4:
            // Uniscribe splits two- or three-part matras into their
            // parts. This splitting is a character-to-character
            // operation).
            //
            //      Uniscribe describes some moving operations for these
            //      matras here. For shaping however all pre matras need
            //      to be at the beginning of the syllable, so we just move
            //      them there now.
            if (matra_position == Split) {
                splitMatra(uc, matra, len);
                // Handle three-part matras (0xccb in Kannada)
                matra_position = indic_position(uc[matra]);
            }
            if (matra_position == Pre) {
                unsigned short m = uc[matra];
                while (matra--)
                    uc[matra+1] = uc[matra];
                uc[0] = m;
                base++;
            }
        }
        // Rule 5:
        //
        // Uniscribe classifies consonants and 'matra' parts as
        // pre-base, above-base (Reph), below-base or post-base. This
        // classification exists on the character code level and is
        // language-dependent, not font-dependent.
        for (i = 0; i < base; ++i)
            position[i] = Pre;
        position[base] = Base;
        for (i = base+1; i < len; ++i) {
            position[i] = indic_position(uc[i]);
            // #### replace by adjusting table
            if (uc[i] == nukta || uc[i] == halant)
                position[i] = Inherit;
        }
        if (reph > 0) {
            // recalculate reph, it might have changed.
            for (i = base+1; i < len; ++i)
                if (uc[i] == ra)
                    reph = i;
            position[reph] = Reph;
            position[reph+1] = Inherit;
        }
        // all reordering happens now to the chars after the base
        int fixed = base+1;
        if (fixed < len && uc[fixed] == nukta)
            fixed++;
        if (fixed < len && uc[fixed] == halant)
            fixed++;
        if (fixed < len && uc[fixed] == 0x200d)
            fixed++;
#ifdef INDIC_DEBUG
        for (i = fixed; i < len; ++i)
            IDEBUG("position[%d] = %d, form=%d uc=%x", i, position[i], form(uc[i]), uc[i]);
#endif
        // we continuosly position the matras and vowel marks and increase the fixed
        // until we reached the end.
        const IndicOrdering *finalOrder = indic_order[script-HB_Script_Devanagari];
        IDEBUG("    reordering pass:");
        IDEBUG("        base=%d fixed=%d", base, fixed);
        int toMove = 0;
        while (finalOrder[toMove].form && fixed < len-1) {
            IDEBUG("        fixed = %d, toMove=%d, moving form %d with pos %d", fixed, toMove, finalOrder[toMove].form, finalOrder[toMove].position);
            for (i = fixed; i < len; i++) {
//                IDEBUG() << "           i=" << i << "uc=" << Qt::hex << uc[i] << "form=" << form(uc[i])
//                         << "position=" << position[i];
                if (form(uc[i]) == finalOrder[toMove].form &&
                     position[i] == finalOrder[toMove].position) {
                    // need to move this glyph
                    int to = fixed;
                    if (i < len-1 && position[i+1] == Inherit) {
                        IDEBUG("         moving two chars from %d to %d", i, to);
                        unsigned short ch = uc[i];
                        unsigned short ch2 = uc[i+1];
                        unsigned char pos = position[i];
                        for (int j = i+1; j > to+1; j--) {
                            uc[j] = uc[j-2];
                            position[j] = position[j-2];
                        }
                        uc[to] = ch;
                        uc[to+1] = ch2;
                        position[to] = pos;
                        position[to+1] = pos;
                        fixed += 2;
                    } else {
                        IDEBUG("         moving one char from %d to %d", i, to);
                        unsigned short ch = uc[i];
                        unsigned char pos = position[i];
                        for (int j = i; j > to; j--) {
                            uc[j] = uc[j-1];
                            position[j] = position[j-1];
                        }
                        uc[to] = ch;
                        position[to] = pos;
                        fixed++;
                    }
                }
            }
            toMove++;
        }
    }
    if (reph > 0) {
        // recalculate reph, it might have changed.
        for (i = base+1; i < len; ++i)
            if (reordered[i] == ra)
                reph = i;
    }
#ifndef NO_OPENTYPE
    const int availableGlyphs = item->num_glyphs;
#endif
    if (!item->font->klass->convertStringToGlyphIndices(item->font,
                                                        reordered, len,
                                                        item->glyphs, &item->num_glyphs,
                                                        item->item.bidiLevel % 2))
        goto error;
    IDEBUG("  base=%d, reph=%d", base, reph);
    IDEBUG("reordered:");
    for (i = 0; i < len; i++) {
        item->attributes[i].mark = false;
        item->attributes[i].clusterStart = false;
        item->attributes[i].justification = 0;
        item->attributes[i].zeroWidth = false;
        IDEBUG("    %d: %4x", i, reordered[i]);
    }
    // now we have the syllable in the right order, and can start running it through open type.
    for (i = 0; i < len; ++i)
        control |= (form(reordered[i]) == Control);
#ifndef NO_OPENTYPE
    if (openType) {
        // we need to keep track of where the base glyph is for some
        // scripts and use the cluster feature for this.  This
        // also means we have to correct the logCluster output from
        // the open type engine manually afterwards.  for indic this
        // is rather simple, as all chars just point to the first
        // glyph in the syllable.
        HB_STACKARRAY(unsigned short, clusters, len);
        HB_STACKARRAY(unsigned int, properties, len);
        for (i = 0; i < len; ++i)
            clusters[i] = i;
        // features we should always apply
        for (i = 0; i < len; ++i)
            properties[i] = ~(LocaProperty
                              | CcmpProperty
                              | NuktaProperty
                              | VattuProperty
                              | ConjunctFormProperty
                              | PreSubstProperty
                              | BelowSubstProperty
                              | AboveSubstProperty
                              | PostSubstProperty
                              | HalantProperty
                              | IndicCaltProperty
                              | PositioningProperties);
        // Loca always applies
        // Ccmp always applies
        // Init
        if (item->item.pos == 0
            || !(isLetter(item->string[item->item.pos-1]) || isMark(item->string[item->item.pos-1])))
            properties[0] &= ~InitProperty;
        // Nukta always applies
        // Akhant
        for (i = 0; i <= base; ++i)
            properties[i] &= ~AkhantProperty;
        // Reph
        if (reph >= 0) {
            properties[reph] &= ~RephProperty;
            properties[reph+1] &= ~RephProperty;
        }
        // BelowForm
        for (i = base+1; i < len; ++i)
            properties[i] &= ~BelowFormProperty;
        if (script == HB_Script_Devanagari || script == HB_Script_Gujarati) {
            // vattu glyphs need this aswell
            bool vattu = false;
            for (i = base-2; i > 1; --i) {
                if (form(reordered[i]) == Consonant) {
                    vattu = (!vattu && reordered[i] == ra);
                    if (vattu) {
                        IDEBUG("forming vattu ligature at %d", i);
                        properties[i] &= ~BelowFormProperty;
                        properties[i+1] &= ~BelowFormProperty;
                    }
                }
            }
        }
        // HalfFormProperty
        for (i = 0; i < base; ++i)
            properties[i] &= ~HalfFormProperty;
        if (control) {
            for (i = 2; i < len; ++i) {
                if (reordered[i] == 0x200d /* ZWJ */) {
                    properties[i-1] &= ~HalfFormProperty;
                    properties[i-2] &= ~HalfFormProperty;
                } else if (reordered[i] == 0x200c /* ZWNJ */) {
                    properties[i-1] &= ~HalfFormProperty;
                    properties[i-2] &= ~HalfFormProperty;
                }
            }
        }
        // PostFormProperty
        for (i = base+1; i < len; ++i)
            properties[i] &= ~PostFormProperty;
        // vattu always applies
        // pres always applies
        // blws always applies
        // abvs always applies
        // psts always applies
        // halant always applies
        // calt always applies
#ifdef INDIC_DEBUG
//        {
//            IDEBUG("OT properties:");
//            for (int i = 0; i < len; ++i)
//                qDebug("    i: %s", ::propertiesToString(properties[i]).toLatin1().data());
//        }
#endif
        // initialize
        item->log_clusters = clusters;
        HB_OpenTypeShape(item, properties);
        int newLen = item->face->buffer->in_length;
        HB_GlyphItem otl_glyphs = item->face->buffer->in_string;
        // move the left matra back to its correct position in malayalam and tamil
        if ((script == HB_Script_Malayalam || script == HB_Script_Tamil) && (form(reordered[0]) == Matra)) {
//             qDebug("reordering matra, len=%d", newLen);
            // need to find the base in the shaped string and move the matra there
            int basePos = 0;
            while (basePos < newLen && (int)otl_glyphs[basePos].cluster <= base)
                basePos++;
            --basePos;
            if (basePos < newLen && basePos > 1) {
//                 qDebug("moving prebase matra to position %d in syllable newlen=%d", basePos, newLen);
                HB_GlyphItemRec m = otl_glyphs[0];
                --basePos;
                for (i = 0; i < basePos; ++i)
                    otl_glyphs[i] = otl_glyphs[i+1];
                otl_glyphs[basePos] = m;
            }
        }
        HB_Bool positioned = HB_OpenTypePosition(item, availableGlyphs, false);
        HB_FREE_STACKARRAY(clusters);
        HB_FREE_STACKARRAY(properties);
        if (!positioned)
            goto error;
        if (control) {
            IDEBUG("found a control char in the syllable");
            hb_uint32 i = 0, j = 0;
            while (i < item->num_glyphs) {
                if (form(reordered[otl_glyphs[i].cluster]) == Control) {
                    ++i;
                    if (i >= item->num_glyphs)
                        break;
                }
                item->glyphs[j] = item->glyphs[i];
                item->attributes[j] = item->attributes[i];
                item->offsets[j] = item->offsets[i];
                item->advances[j] = item->advances[i];
                ++i;
                ++j;
            }
            item->num_glyphs = j;
        }
    } else {
        HB_HeuristicPosition(item);
    }
#endif // NO_OPENTYPE
    item->attributes[0].clusterStart = true;
    HB_FREE_STACKARRAY(reordered);
    HB_FREE_STACKARRAY(position);
    IDEBUG("<<<<<<");
    return true;
error:
    HB_FREE_STACKARRAY(reordered);
    HB_FREE_STACKARRAY(position);
    return false;
}
/* syllables are of the form:
   (Consonant Nukta? Halant)* Consonant Matra? VowelMark? StressMark?
   (Consonant Nukta? Halant)* Consonant Halant
   IndependentVowel VowelMark? StressMark?
   We return syllable boundaries on invalid combinations aswell
*/
static int indic_nextSyllableBoundary(HB_Script script, const HB_UChar16 *s, int start, int end, bool *invalid)
{
    *invalid = false;
    IDEBUG("indic_nextSyllableBoundary: start=%d, end=%d", start, end);
    const HB_UChar16 *uc = s+start;
    int pos = 0;
    Form state = form(uc[pos]);
    IDEBUG("state[%d]=%d (uc=%4x)", pos, state, uc[pos]);
    pos++;
    if (state != Consonant && state != IndependentVowel) {
        if (state != Other)
            *invalid = true;
        goto finish;
    }
    while (pos < end - start) {
        Form newState = form(uc[pos]);
        IDEBUG("state[%d]=%d (uc=%4x)", pos, newState, uc[pos]);
        switch(newState) {
        case Control:
            newState = state;
 	    if (state == Halant && uc[pos] == 0x200d /* ZWJ */)
  		break;
            // the control character should be the last char in the item
 	    if (state == Consonant && script == HB_Script_Bengali && uc[pos-1] == 0x09B0 && uc[pos] == 0x200d /* ZWJ */)
  		break;
 	    if (state == Consonant && script == HB_Script_Kannada && uc[pos-1] == 0x0CB0 && uc[pos] == 0x200d /* ZWJ */)
  		break;
            // Bengali and Kannada has a special exception for rendering yaphala with ra (to avoid reph) see http://www.unicode.org/faq/indic.html#15
            ++pos;
            goto finish;
        case Consonant:
	    if (state == Halant && (script != HB_Script_Sinhala || uc[pos-1] == 0x200d /* ZWJ */))
                break;
            goto finish;
        case Halant:
            if (state == Nukta || state == Consonant)
                break;
            // Bengali has a special exception allowing the combination Vowel_A/E + Halant + Ya
            if (script == HB_Script_Bengali && pos == 1 &&
                 (uc[0] == 0x0985 || uc[0] == 0x098f))
                break;
            // Sinhala uses the Halant as a component of certain matras. Allow these, but keep the state on Matra.
            if (script == HB_Script_Sinhala && state == Matra) {
                ++pos;
                StartPlay;
            }
            if (script == HB_Script_Malayalam && state == Matra && uc[pos-1] == 0x0d41) {
                ++pos;
                StartPlay;
            }
            goto finish;
        case Nukta:
            if (state == Consonant)
                break;
            goto finish;
        case StressMark:
            if (state == VowelMark)
                break;
            // fall through
        case VowelMark:
            if (state == Matra || state == LengthMark || state == IndependentVowel)
                break;
            // fall through
        case Matra:
            if (state == Consonant || state == Nukta)
                break;
            if (state == Matra) {
                // ### needs proper testing for correct two/three part matras
                break;
            }
            // ### not sure if this is correct. If it is, does it apply only to Bengali or should
            // it work for all Indic languages?
            // the combination Independent_A + Vowel Sign AA is allowed.
            if (script == HB_Script_Bengali && uc[pos] == 0x9be && uc[pos-1] == 0x985)
                break;
            if (script == HB_Script_Tamil && state == Matra) {
                if (uc[pos-1] == 0x0bc6 &&
                     (uc[pos] == 0xbbe || uc[pos] == 0xbd7))
                    break;
                if (uc[pos-1] == 0x0bc7 && uc[pos] == 0xbbe)
                    break;
            }
            goto finish;
        case LengthMark:
            if (state == Matra) {
                // ### needs proper testing for correct two/three part matras
                break;
            }
        case IndependentVowel:
        case Invalid:
        case Other:
            goto finish;
        }
        state = newState;
        pos++;
    }
 finish:
    return pos+start;
}
HB_Bool HB_IndicShape(HB_ShaperItem *item)
{
    assert(item->item.script >= HB_Script_Devanagari && item->item.script <= HB_Script_Sinhala);
    HB_Bool openType = false;
#ifndef NO_OPENTYPE
    openType = HB_SelectScript(item, indic_features);
#endif
    unsigned short *logClusters = item->log_clusters;
    HB_ShaperItem syllable = *item;
    int first_glyph = 0;
    int sstart = item->item.pos;
    int end = sstart + item->item.length;
    IDEBUG("indic_shape: from %d length %d", item->item.pos, item->item.length);
    while (sstart < end) {
        bool invalid;
        int send = indic_nextSyllableBoundary(item->item.script, item->string, sstart, end, &invalid);
        IDEBUG("syllable from %d, length %d, invalid=%s", sstart, send-sstart,
               invalid ? "true" : "false");
        syllable.item.pos = sstart;
        syllable.item.length = send-sstart;
        syllable.glyphs = item->glyphs + first_glyph;
        syllable.attributes = item->attributes + first_glyph;
        syllable.offsets = item->offsets + first_glyph;
        syllable.advances = item->advances + first_glyph;
        syllable.num_glyphs = item->num_glyphs - first_glyph;
        if (!indic_shape_syllable(openType, &syllable, invalid)) {
            IDEBUG("syllable shaping failed, syllable requests %d glyphs", syllable.num_glyphs);
            item->num_glyphs += syllable.num_glyphs;
            return false;
        }
        // fix logcluster array
        IDEBUG("syllable:");
        hb_uint32 g;
        for (g = first_glyph; g < first_glyph + syllable.num_glyphs; ++g)
            IDEBUG("        %d -> glyph %x", g, item->glyphs[g]);
        IDEBUG("    logclusters:");
        int i;
        for (i = sstart; i < send; ++i) {
            IDEBUG("        %d -> glyph %d", i, first_glyph);
            logClusters[i-item->item.pos] = first_glyph;
        }
        sstart = send;
        first_glyph += syllable.num_glyphs;
    }
    item->num_glyphs = first_glyph;
    return true;
}
void HB_IndicAttributes(HB_Script script, const HB_UChar16 *text, hb_uint32 from, hb_uint32 len, HB_CharAttributes *attributes)
{
    int end = from + len;
    const HB_UChar16 *uc = text + from;
    attributes += from;
    hb_uint32 i = 0;
    while (i < len) {
        bool invalid;
        hb_uint32 boundary = indic_nextSyllableBoundary(script, text, from+i, end, &invalid) - from;
         attributes[i].graphemeBoundary = true;
        if (boundary > len-1) boundary = len;
        i++;
        while (i < boundary) {
            attributes[i].graphemeBoundary = false;
            ++uc;
            ++i;
        }
        assert(i == boundary);
    }
}

/*
 * Copyright (C) 2015 The Qt Company Ltd
 *
 * This is part of HarfBuzz, an OpenType Layout engine library.
 *
 * Permission is hereby granted, without written agreement and without
 * license or royalty fees, to use, copy, modify, and distribute this
 * software and its documentation for any purpose, provided that the
 * above copyright notice and the following two paragraphs appear in
 * all copies of this software.
 *
 * IN NO EVENT SHALL THE COPYRIGHT HOLDER BE LIABLE TO ANY PARTY FOR
 * DIRECT, INDIRECT, SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES
 * ARISING OUT OF THE USE OF THIS SOFTWARE AND ITS DOCUMENTATION, EVEN
 * IF THE COPYRIGHT HOLDER HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH
 * DAMAGE.
 *
 * THE COPYRIGHT HOLDER SPECIFICALLY DISCLAIMS ANY WARRANTIES, INCLUDING,
 * BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND
 * FITNESS FOR A PARTICULAR PURPOSE.  THE SOFTWARE PROVIDED HEREUNDER IS
 * ON AN "AS IS" BASIS, AND THE COPYRIGHT HOLDER HAS NO OBLIGATION TO
 * PROVIDE MAINTENANCE, SUPPORT, UPDATES, ENHANCEMENTS, OR MODIFICATIONS.
 */
#ifndef HARFBUZZ_SHAPER_PRIVATE_H
#define HARFBUZZ_SHAPER_PRIVATE_H
HB_BEGIN_HEADER
enum {
    C_DOTTED_CIRCLE = 0x25CC
};
typedef enum 
{
    HB_Combining_BelowLeftAttached       = 200,
    HB_Combining_BelowAttached           = 202,
    HB_Combining_BelowRightAttached      = 204,
    HB_Combining_LeftAttached            = 208,
    HB_Combining_RightAttached           = 210,
    HB_Combining_AboveLeftAttached       = 212,
    HB_Combining_AboveAttached           = 214,
    HB_Combining_AboveRightAttached      = 216,
    HB_Combining_BelowLeft               = 218,
    HB_Combining_Below                   = 220,
    HB_Combining_BelowRight              = 222,
    HB_Combining_Left                    = 224,
    HB_Combining_Right                   = 226,
    HB_Combining_AboveLeft               = 228,
    HB_Combining_Above                   = 230,
    HB_Combining_AboveRight              = 232,
    HB_Combining_DoubleBelow             = 233,
    HB_Combining_DoubleAbove             = 234,
    HB_Combining_IotaSubscript           = 240
} HB_CombiningClass;
typedef enum {
    LocaProperty = 0x1,
    CcmpProperty = 0x2,
    InitProperty = 0x4,
    IsolProperty = 0x8,
    FinaProperty = 0x10,
    MediProperty = 0x20,
    RligProperty = 0x40,
    CaltProperty = 0x80,
    LigaProperty = 0x100,
    DligProperty = 0x200,
    CswhProperty = 0x400,
    MsetProperty = 0x800,
    /* used by indic and myanmar shaper */
    NuktaProperty = 0x8,
    AkhantProperty = 0x10,
    RephProperty = 0x20,
    PreFormProperty = 0x40,
    BelowFormProperty = 0x80,
    AboveFormProperty = 0x100,
    HalfFormProperty = 0x200,
    PostFormProperty = 0x400,
    ConjunctFormProperty = 0x800,
    VattuProperty = 0x1000,
    PreSubstProperty = 0x2000,
    BelowSubstProperty = 0x4000,
    AboveSubstProperty = 0x8000,
    PostSubstProperty = 0x10000,
    HalantProperty = 0x20000,
    CligProperty = 0x40000,
    IndicCaltProperty = 0x80000
} HB_OpenTypeProperty;
/* return true if ok. */
typedef HB_Bool (*HB_ShapeFunction)(HB_ShaperItem *shaper_item);
typedef void (*HB_AttributeFunction)(HB_Script script, const HB_UChar16 *string, hb_uint32 from, hb_uint32 len, HB_CharAttributes *attributes);
typedef struct {
    HB_ShapeFunction shape;
    HB_AttributeFunction charAttributes;
} HB_ScriptEngine;
extern const HB_ScriptEngine hb_scriptEngines[];
extern HB_Bool HB_BasicShape(HB_ShaperItem *shaper_item);
extern HB_Bool HB_GreekShape(HB_ShaperItem *shaper_item);
extern HB_Bool HB_TibetanShape(HB_ShaperItem *shaper_item);
extern HB_Bool HB_HebrewShape(HB_ShaperItem *shaper_item);
extern HB_Bool HB_ArabicShape(HB_ShaperItem *shaper_item);
extern HB_Bool HB_HangulShape(HB_ShaperItem *shaper_item);
extern HB_Bool HB_MyanmarShape(HB_ShaperItem *shaper_item);
extern HB_Bool HB_KhmerShape(HB_ShaperItem *shaper_item);
extern HB_Bool HB_IndicShape(HB_ShaperItem *shaper_item);
extern HB_Bool HB_ThaiShape(HB_ShaperItem *shaper_item);
extern void HB_TibetanAttributes(HB_Script script, const HB_UChar16 *string, hb_uint32 from, hb_uint32 len, HB_CharAttributes *attributes);
extern void HB_MyanmarAttributes(HB_Script script, const HB_UChar16 *string, hb_uint32 from, hb_uint32 len, HB_CharAttributes *attributes);
extern void HB_KhmerAttributes(HB_Script script, const HB_UChar16 *string, hb_uint32 from, hb_uint32 len, HB_CharAttributes *attributes);
extern void HB_IndicAttributes(HB_Script script, const HB_UChar16 *string, hb_uint32 from, hb_uint32 len, HB_CharAttributes *attributes);
extern void HB_ThaiAttributes(HB_Script script, const HB_UChar16 *string, hb_uint32 from, hb_uint32 len, HB_CharAttributes *attributes);
#ifndef NO_OPENTYPE
typedef struct {
    hb_uint32 tag;
    hb_uint32 property;
} HB_OpenTypeFeature;
#define PositioningProperties 0x80000000
HB_Bool HB_SelectScript(HB_ShaperItem *item, const HB_OpenTypeFeature *features);
HB_Bool HB_OpenTypeShape(HB_ShaperItem *item, const hb_uint32 *properties);
HB_Bool HB_OpenTypePosition(HB_ShaperItem *item, int availableGlyphs, HB_Bool doLogClusters);
#endif // NO_OPENTYPE
void HB_HeuristicPosition(HB_ShaperItem *item);
void HB_HeuristicSetGlyphAttributes(HB_ShaperItem *item);
#define HB_IsControlChar(uc) \
    ((uc >= 0x200b && uc <= 0x200f /* ZW Space, ZWNJ, ZWJ, LRM and RLM */) \
     || (uc >= 0x2028 && uc <= 0x202e /* LS, PS, LRE, RLE, PDF, LRO, RLO */) \
     || (uc >= 0x206a && uc <= 0x206f /* ISS, ASS, IAFS, AFS, NADS, NODS */))
HB_Bool HB_ConvertStringToGlyphIndices(HB_ShaperItem *shaper_item);
#define HB_GetGlyphAdvances(shaper_item) \
    shaper_item->font->klass->getGlyphAdvances(shaper_item->font, \
                                               shaper_item->glyphs, shaper_item->num_glyphs, \
                                               shaper_item->advances, \
                                               shaper_item->face->current_flags);
#define HB_DECLARE_STACKARRAY(Type, Name) \
    Type stack##Name[512]; \
    Type *Name = stack##Name;
#define HB_INIT_STACKARRAY(Type, Name, Length) \
    if ((Length) >= 512) \
        Name = (Type *)malloc((Length) * sizeof(Type));
#define HB_STACKARRAY(Type, Name, Length) \
    HB_DECLARE_STACKARRAY(Type, Name) \
    HB_INIT_STACKARRAY(Type, Name, Length)
#define HB_FREE_STACKARRAY(Name) \
    if (stack##Name != Name) \
        free(Name);
HB_END_HEADER
#endif

#endif // pid_t
#endif /* long */

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
