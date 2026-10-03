.intel_syntax noprefix
.text
.globl _ZN4dice3hfe6memory54TraceInfoManager_resourceAllocate_intref_char_constptrEi
_ZN4dice3hfe6memory54TraceInfoManager_resourceAllocate_intref_char_constptrEi:
PUSH RBP
MOV RCX,RSI
MOV RBP,RDI
PUSH RBX
MOV EBX,EDX
SUB RSP,0x8
MOV EAX,dword ptr [RDI]
CMP EAX,-0x1
JZ .Lb8
.Lb0:
CDQE
MOV RAX,qword ptr [0xf81520 + RAX*0x8]
MOV ESI,dword ptr [RAX + 0x10c]
MOV ECX,dword ptr [RAX + 0x110]
INC ESI
ADD ECX,EBX
TEST EBX,EBX
MOV dword ptr [RAX + 0x10c],ESI
MOV dword ptr [RAX + 0x110],ECX
JS .Lb7
CMP EBX,dword ptr [RAX + 0x114]
JGE .Lb6
MOV EDX,dword ptr [RAX + 0x104]
.Lb1:
MOV dword ptr [RAX + 0x114],EBX
.Lb2:
CMP EBX,dword ptr [RAX + 0x118]
JLE .Lb3
MOV dword ptr [RAX + 0x118],EBX
.Lb3:
CMP ESI,dword ptr [RAX + 0x108]
JLE .Lb4
MOV dword ptr [RAX + 0x108],ESI
.Lb4:
CMP ECX,EDX
JLE .Lb5
MOV dword ptr [RAX + 0x104],ECX
.Lb5:
ADD RSP,0x8
POP RBX
POP RBP
RET
.Lb6:
MOV EDX,dword ptr [RAX + 0x104]
TEST EDX,EDX
JNZ .Lb2
JMP .Lb1
.Lb7:
MOV EDX,dword ptr [RAX + 0x104]
JMP .Lb3
.Lb8:
MOV EDX,0xf81508
MOV ESI,0xf81520
MOV RDI,RCX
CALL 0x0040a340
TEST EAX,EAX
MOV dword ptr [RBP],EAX
JNS .Lb0
JMP .Lb5
