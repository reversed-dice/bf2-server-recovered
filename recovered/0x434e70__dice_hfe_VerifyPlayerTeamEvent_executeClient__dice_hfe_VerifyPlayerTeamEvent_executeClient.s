.intel_syntax noprefix
.text
.globl _ZN4dice3hfe22VerifyPlayerTeamEvent13executeClientEv
_ZN4dice3hfe22VerifyPlayerTeamEvent13executeClientEv:
PUSH R12
PUSH RBX
MOV RBX,RDI
SUB RSP,0x8
MOV RDI,qword ptr [0x0112ee38]
MOVZX ESI,byte ptr [RBX + 0x12]
MOV RAX,qword ptr [RDI]
CALL qword ptr [RAX + 0x40]
MOV RDI,qword ptr [0x0112ee38]
MOV R12,RAX
MOVZX ESI,byte ptr [RBX + 0x13]
MOV RAX,qword ptr [RDI]
CALL qword ptr [RAX + 0x40]
TEST R12,R12
MOV RDX,RAX
SETZ AL
TEST RDX,RDX
SETZ DL
ADD RSP,0x8
POP RBX
POP R12
OR EAX,EDX
XOR EAX,0x1
MOVZX EAX,AL
RET
// REVERSED_FUNCTION: dice_hfe_VerifyPlayerTeamEvent_executeClient (0x434e70)