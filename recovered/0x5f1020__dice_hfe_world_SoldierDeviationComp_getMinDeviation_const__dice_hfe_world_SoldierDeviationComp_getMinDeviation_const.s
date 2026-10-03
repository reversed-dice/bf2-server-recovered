.intel_syntax noprefix
.text
.globl _ZNK4dice3hfe5world20SoldierDeviationComp15getMinDeviationEv
_ZNK4dice3hfe5world20SoldierDeviationComp15getMinDeviationEv:
MOV RAX,qword ptr [RDI + 0x78]
MOVSS XMM0,dword ptr [RAX + 0x5c]
MULSS XMM0,dword ptr [RAX + 0x1c]
RET
// REVERSED_FUNCTION: dice_hfe_world_SoldierDeviationComp_getMinDeviation_const (0x5f1020)