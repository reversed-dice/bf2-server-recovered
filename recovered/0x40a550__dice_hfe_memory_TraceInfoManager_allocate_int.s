.intel_syntax noprefix
.text
.globl _ZN4dice3hfe6memory25TraceInfoManager_allocateEi
_ZN4dice3hfe6memory25TraceInfoManager_allocateEi:
MOV EAX,dword ptr [0x00f66ab8]
TEST EAX,EAX
JS .Lb6
CDQE
MOV R8D,dword ptr [0xf89540 + RAX*0x8]
TEST R8D,R8D
JS .Lb6
MOVSXD RAX,R8D
MOV RAX,qword ptr [0xf85540 + RAX*0x8]
MOV ECX,dword ptr [RAX + 0x10c]
MOV ESI,dword ptr [RAX + 0x110]
INC ECX
ADD ESI,EDI
TEST EDI,EDI
MOV dword ptr [RAX + 0x10c],ECX
MOV dword ptr [RAX + 0x110],ESI
JS .Lb7
CMP EDI,dword ptr [RAX + 0x114]
JGE .Lb5
MOV EDX,dword ptr [RAX + 0x104]
.Lb0:
MOV dword ptr [RAX + 0x114],EDI
.Lb1:
CMP EDI,dword ptr [RAX + 0x118]
JLE .Lb2
MOV dword ptr [RAX + 0x118],EDI
.Lb2:
CMP ECX,dword ptr [RAX + 0x108]
JLE .Lb3
MOV dword ptr [RAX + 0x108],ECX
.Lb3:
CMP ESI,EDX
JLE .Lb4
MOV dword ptr [RAX + 0x104],ESI
.Lb4:
LEA EAX,[R8 + 0x1]
RET
.Lb5:
MOV EDX,dword ptr [RAX + 0x104]
TEST EDX,EDX
JNZ .Lb1
JMP .Lb0
.Lb6:
XOR EAX,EAX
RET
.Lb7:
MOV EDX,dword ptr [RAX + 0x104]
NOP
JMP .Lb2
