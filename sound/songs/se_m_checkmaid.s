	.include "MPlayDef.s"

	.equ	se_m_checkmaid_grp, voicegroup128
	.equ	se_m_checkmaid_pri, 4
	.equ	se_m_checkmaid_rev, reverb_set+50
	.equ	se_m_checkmaid_mvl, 127
	.equ	se_m_checkmaid_key, 0
	.equ	se_m_checkmaid_tbs, 1
	.equ	se_m_checkmaid_exg, 0
	.equ	se_m_checkmaid_cmp, 1

	.section .rodata
	.global	se_m_checkmaid
	.align	2

@********************** Track  1 **********************@

se_m_checkmaid_1:
	.byte	KEYSH , se_m_checkmaid_key+0
	.byte	TEMPO , 150*se_m_checkmaid_tbs/2
	.byte		VOICE , 24
	.byte		BENDR , 12
	.byte		PAN   , c_v+0
	.byte		VOL   , 110*se_m_checkmaid_mvl/mxv
	.byte		BEND  , c_v+0
	.byte		N01   , Cn5 , v127
	.byte	W01
	.byte		PAN   , c_v+10
	.byte		N01   , Cn6
	.byte	W01
	.byte		PAN   , c_v+0
	.byte		N01   , Cn5
	.byte	W04
	.byte		N01
	.byte	W01
	.byte		PAN   , c_v-11
	.byte		N01   , Cn6
	.byte	W01
	.byte		PAN   , c_v+0
	.byte		N01   , Cn5
	.byte	W04
	.byte	FINE

@******************************************************@
	.align	2

se_m_checkmaid:
	.byte	1	@ NumTrks
	.byte	0	@ NumBlks
	.byte	se_m_checkmaid_pri	@ Priority
	.byte	se_m_checkmaid_rev	@ Reverb.

	.word	se_m_checkmaid_grp

	.word	se_m_checkmaid_1

	.end
