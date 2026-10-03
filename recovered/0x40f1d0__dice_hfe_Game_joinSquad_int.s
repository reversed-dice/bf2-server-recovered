.intel_syntax noprefix
.text
.globl _ZN4dice3hfe4Game9joinSquadEi
_ZN4dice3hfe4Game9joinSquadEi:
MOV qword ptr [RSP + -0x18],RBP
MOV qword ptr [RSP + -0x8],R13
MOV R13D,ESI
MOV qword ptr [RSP + -0x20],RBX
MOV qword ptr [RSP + -0x10],R12
SUB RSP,0x28
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
MOV R12,qword ptr [RAX + 0x60]
MOV RAX,qword ptr [RBP]
CALL qword ptr [RAX + 0xa8]
MOV EBX,EAX
MOV RAX,qword ptr [RBP]
MOV RDI,RBP
CALL qword ptr [RAX + 0x1d0]
MOV RDI,qword ptr [0x010b8c00]
MOV ECX,EBX
MOV EDX,R13D
MOV R11,R12
MOV RBX,qword ptr [RSP + 0x8]
MOV RBP,qword ptr [RSP + 0x10]
MOV R12,qword ptr [RSP + 0x18]
MOV R13,qword ptr [RSP + 0x20]
MOV ESI,EAX
ADD RSP,0x28
JMP R11
.Lret:
MOV RBX,qword ptr [RSP + 0x8]
MOV RBP,qword ptr [RSP + 0x10]
MOV R12,qword ptr [RSP + 0x18]
MOV R13,qword ptr [RSP + 0x20]
ADD RSP,0x28
RET
