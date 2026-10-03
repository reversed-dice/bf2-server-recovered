.intel_syntax noprefix
.text
.globl _ZN4dice3hfe6memory18ChunkPools_release
_ZN4dice3hfe6memory18ChunkPools_release:
PUSH RBP
PUSH RBX
SUB RSP,0x8
MOV RDI,qword ptr [0x00f6d648]
CALL 0x004083c8
MOV EAX,dword ptr [0x00f6d658]
TEST EAX,EAX
JG .Lb0
MOV RDI,qword ptr [0x00f6d650]
CALL 0x004083c8
MOV dword ptr [0x00f6d658],0x0
ADD RSP,0x8
POP RBX
POP RBP
RET
.Lb0:
XOR EBP,EBP
.Lb1:
MOVSXD RAX,EBP
INC EBP
MOV RBX,RAX
SHL RAX,0xc
SHL RBX,0x4
ADD RBX,RAX
MOV RAX,qword ptr [0x00f6d650]
MOV RDI,qword ptr [RBX + RAX*0x1]
CALL 0x00409090
MOV RAX,qword ptr [0x00f6d650]
MOV RDI,qword ptr [RBX + RAX*0x1]
CALL 0x004083c8
CMP EBP,dword ptr [0x00f6d658]
JL .Lb1
MOV RDI,qword ptr [0x00f6d650]
CALL 0x004083c8
MOV dword ptr [0x00f6d658],0x0
ADD RSP,0x8
POP RBX
POP RBP
RET
