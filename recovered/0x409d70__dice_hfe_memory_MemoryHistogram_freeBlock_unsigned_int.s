.intel_syntax noprefix
.text
.globl _ZN4dice3hfe6memory34MemoryHistogram_freeBlock_unsignedEi
_ZN4dice3hfe6memory34MemoryHistogram_freeBlock_unsignedEi:
PUSH RBX
MOV EBX,EDI
MOV EDI,0xf814f8
CALL 0x0074af10
CMP byte ptr [0x00f814f0],0x0
JZ .Lb0
SUB dword ptr [0x00f814e0],EBX
CMP EBX,0x270f
JA .Lb1
MOV EAX,EBX
LEA RDX,[0xf6dc60 + RAX*0x8]
MOV EAX,dword ptr [RDX + 0x4]
TEST EAX,EAX
JNZ .Lb2
.Lb0:
POP RBX
MOV EDI,0xf814f8
JMP 0x0074af20
.Lb1:
MOV EAX,dword ptr [0x00f814e8]
TEST EAX,EAX
JZ .Lb0
POP RBX
DEC EAX
MOV EDI,0xf814f8
MOV dword ptr [0x00f814e8],EAX
JMP 0x0074af20
.Lb2:
DEC EAX
MOV EDI,0xf814f8
MOV dword ptr [RDX + 0x4],EAX
POP RBX
JMP 0x0074af20
