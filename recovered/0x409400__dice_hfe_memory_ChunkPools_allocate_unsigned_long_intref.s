.intel_syntax noprefix
.text
.globl _ZN4dice3hfe6memory20ChunkPools_allocate_EmRi
_ZN4dice3hfe6memory20ChunkPools_allocate_EmRi:
MOV qword ptr [RSP + -0x18],RBX
MOV qword ptr [RSP + -0x10],RBP
MOV RBX,RDI
MOV qword ptr [RSP + -0x8],R12
SUB RSP,0x18
TEST RDI,RDI
MOV RBP,RSI
JNZ .Lb2
.Lb0:
XOR EDX,EDX
.Lb1:
MOV RBX,qword ptr [RSP]
MOV RBP,qword ptr [RSP + 0x8]
MOV RAX,RDX
MOV R12,qword ptr [RSP + 0x10]
ADD RSP,0x18
RET
.Lb2:
MOVSXD RAX,dword ptr [0x00f6d65c]
CMP RDI,RAX
JA .Lb0
MOV RAX,qword ptr [0x00f6d648]
MOV R12,qword ptr [RAX + RDI*0x8]
TEST R12,R12
JZ .Lb0
MOV RDI,R12
CALL 0x00408fe0
TEST RAX,RAX
MOV RCX,RAX
JZ .Lb4
MOV EAX,dword ptr [RAX + 0x38]
MOV RDX,RBP
MOV RSI,RBX
MOV RDI,RCX
MOV dword ptr [RBP],EAX
CALL 0x004092f0
MOV RDX,RAX
.Lb3:
TEST RDX,RDX
JZ .Lb1
MOV RAX,qword ptr [R12]
INC dword ptr [RAX]
JMP .Lb1
.Lb4:
MOV dword ptr [RBP],0x0
MOV RDI,qword ptr [R12]
MOV RDX,RBP
MOV RSI,RBX
CALL 0x004092f0
MOV RDX,RAX
JMP .Lb3
