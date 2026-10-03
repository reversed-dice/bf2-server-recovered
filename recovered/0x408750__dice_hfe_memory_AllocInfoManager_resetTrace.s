.intel_syntax noprefix
.text
.globl _ZN4dice3hfe6memory27AllocInfoManager_resetTrace
_ZN4dice3hfe6memory27AllocInfoManager_resetTrace:
MOV EAX,dword ptr [0x00f85520]
TEST EAX,EAX
JLE .Lb7
MOV EDI,dword ptr [0x00f6d630]
XOR ESI,ESI
.Lb0:
XOR ECX,ECX
TEST EDI,EDI
JLE .Lb6
NOP
.Lb1:
MOV RAX,qword ptr [0x00f6d628]
MOVSXD RDX,ECX
MOV RAX,qword ptr [RAX + RDX*0x8]
TEST RAX,RAX
JNZ .Lb3
JMP .Lb5
.Lb2:
TEST RDX,RDX
MOV RAX,RDX
JZ .Lb4
.Lb3:
CMP ESI,dword ptr [RAX + 0x14]
MOV RDX,qword ptr [RAX + 0x48]
JNZ .Lb2
TEST RDX,RDX
MOV dword ptr [RAX + 0x20],0x0
MOV dword ptr [RAX + 0x24],0x0
MOV dword ptr [RAX + 0x18],0x0
MOV dword ptr [RAX + 0x1c],0x0
MOV dword ptr [RAX + 0x30],0x0
MOV dword ptr [RAX + 0x3c],0x0
MOV dword ptr [RAX + 0x34],0x0
MOV dword ptr [RAX + 0x40],0x0
MOV RAX,RDX
JNZ .Lb3
.Lb4:
MOV EDI,dword ptr [0x00f6d630]
.Lb5:
INC ECX
CMP ECX,EDI
JL .Lb1
MOV EAX,dword ptr [0x00f85520]
.Lb6:
INC ESI
CMP ESI,EAX
JL .Lb0
.Lb7:
RET
