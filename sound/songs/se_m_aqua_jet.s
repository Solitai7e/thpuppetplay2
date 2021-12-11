	.include "MPlayDef.s"

	.equ	se_m_aqua_jet_grp, voicegroup128
	.equ	se_m_aqua_jet_pri, 4
	.equ	se_m_aqua_jet_rev, reverb_set+50
	.equ	se_m_aqua_jet_mvl, 127
	.equ	se_m_aqua_jet_key, 0
	.equ	se_m_aqua_jet_tbs, 1
	.equ	se_m_aqua_jet_exg, 0
	.equ	se_m_aqua_jet_cmp, 1

	.section .rodata
	.global	se_m_aqua_jet
	.align	2

@********************** Track  1 **********************@

se_m_aqua_jet_1:
	.byte	KEYSH , se_m_aqua_jet_key+0
	.byte	TEMPO , 150*se_m_aqua_jet_tbs/2
	.byte		VOICE , 23
	.byte		VOL   , 100*se_m_aqua_jet_mvl/mxv
	.byte		BENDR , 12
	.byte		PAN   , c_v+0
	.byte		BEND  , c_v+2
	.byte		N02   , Dn3 , v127
	.byte	W01
	.byte		PAN   , c_v-10
	.byte		BEND  , c_v+4
	.byte	W02
	.byte		PAN   , c_v+8
	.byte		BEND  , c_v+6
	.byte		N02   , Dn3 , v084
	.byte	W01
	.byte		PAN   , c_v+0
	.byte		BEND  , c_v+9
	.byte	W02
	.byte		        c_v-1
	.byte	W02
	.byte		        c_v+32
	.byte		N02   , Dn3 , v056
	.byte	W16
	.byte	FINE

@******************************************************@
	.align	2

se_m_aqua_jet:
	.byte	1	@ NumTrks
	.byte	0	@ NumBlks
	.byte	se_m_aqua_jet_pri	@ Priority
	.byte	se_m_aqua_jet_rev	@ Reverb.

	.word	se_m_aqua_jet_grp

	.word	se_m_aqua_jet_1

	.end
