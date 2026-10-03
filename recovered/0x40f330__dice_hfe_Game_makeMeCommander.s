.intel_syntax noprefix
.text
.globl _ZN4dice3hfe4Game15makeMeCommanderEv
_ZN4dice3hfe4Game15makeMeCommanderEv:
MOV qword ptr [RSP + -0x10],RBP
MOV qword ptr [RSP + -0x18],RBX
MOV qword ptr [RSP + -0x8],R12
SUB RSP,0x18
MOV RDI,qword ptr [0x0112ee38]
MOV RAX,qword ptr [RDI]
CALL qword ptr [RAX + 0x60]
TEST RAX,RAX
MOV RBP,RAX
JZ .Lret
MOV RAX,qword ptr [0x010b8c00]
TEST RAX,RAX
JZ .Lret
MOV RAX,qword ptr [RAX]
MOV RDI,RBP
MOV R12,qword ptr [RAX + 0xd8]
MOV RAX,qword ptr [RBP]
CALL qword ptr [RAX + 0xa8]
MOV EBX,EAX
MOV RAX,qword ptr [RBP]
MOV RDI,RBP
CALL qword ptr [RAX + 0x1d0]
MOV RDI,qword ptr [0x010b8c00]
MOV EDX,EBX
MOV R11,R12
MOV RBX,qword ptr [RSP]
MOV RBP,qword ptr [RSP + 0x8]
MOV ESI,EAX
MOV R12,qword ptr [RSP + 0x10]
ADD RSP,0x18
JMP R11
.Lret:
MOV RBX,qword ptr [RSP]
MOV RBP,qword ptr [RSP + 0x8]
MOV R12,qword ptr [RSP + 0x10]
ADD RSP,0x18
RET
