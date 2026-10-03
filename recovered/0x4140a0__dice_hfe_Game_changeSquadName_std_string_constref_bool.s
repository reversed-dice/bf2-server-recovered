.intel_syntax noprefix
.text
.globl _ZN4dice3hfe4Game15changeSquadNameERKSsb
_ZN4dice3hfe4Game15changeSquadNameERKSsb:
MOV qword ptr [RSP + -0x20],RBP
MOV qword ptr [RSP + -0x8],R14
MOV R14,RSI
MOV qword ptr [RSP + -0x28],RBX
MOV qword ptr [RSP + -0x18],R12
MOV qword ptr [RSP + -0x10],R13
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
MOV R13,qword ptr [RAX + 0x38]
MOV RAX,qword ptr [RBP]
CALL qword ptr [RAX + 0xa8]
MOV R12D,EAX
MOV RAX,qword ptr [RBP]
MOV RDI,RBP
CALL qword ptr [RAX + 0x218]
MOV EBX,EAX
MOV RAX,qword ptr [RBP]
MOV RDI,RBP
CALL qword ptr [RAX + 0x1d0]
XOR R9D,R9D
MOV ESI,EAX
MOV RDI,qword ptr [0x010b8c00]
MOV R8,R14
MOV ECX,R12D
MOV EDX,EBX
CALL R13
TEST AL,AL
JZ .Lcold
.Lret:
MOV RBX,qword ptr [RSP]
MOV RBP,qword ptr [RSP + 0x8]
MOV R12,qword ptr [RSP + 0x10]
MOV R13,qword ptr [RSP + 0x18]
MOV R14,qword ptr [RSP + 0x20]
ADD RSP,0x28
RET
.Lcold:
MOV RDI,qword ptr [0x010b3730]
MOV RBX,qword ptr [RSP]
XOR ECX,ECX
MOV RBP,qword ptr [RSP + 0x8]
MOV R12,qword ptr [RSP + 0x10]
MOV EDX,0xf
MOV R13,qword ptr [RSP + 0x18]
MOV R14,qword ptr [RSP + 0x20]
MOV ESI,0x2
MOV RAX,qword ptr [RDI]
XORPS XMM0,XMM0
MOV R11,qword ptr [RAX + 0x28]
ADD RSP,0x28
JMP R11
