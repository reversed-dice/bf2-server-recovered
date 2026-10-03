.intel_syntax noprefix
.text
.globl _ZN4dice3hfe6memory25MemoryModuleInfo_allocateEi
_ZN4dice3hfe6memory25MemoryModuleInfo_allocateEi:
MOV ECX,dword ptr [RDI + 0x4c]
INC ECX
TEST ESI,ESI
MOV dword ptr [RDI + 0x4c],ECX
JLE .Lb3
MOV EAX,ESI
ADD EAX,dword ptr [RDI + 0x50]
CMP ESI,dword ptr [RDI + 0x54]
MOV dword ptr [RDI + 0x50],EAX
JL .Lb4
MOV EDX,dword ptr [RDI + 0x44]
TEST EDX,EDX
JZ .Lb5
.Lb0:
CMP ESI,dword ptr [RDI + 0x58]
JLE .Lb1
MOV dword ptr [RDI + 0x58],ESI
.Lb1:
CMP ECX,dword ptr [RDI + 0x48]
JLE .Lb2
MOV dword ptr [RDI + 0x48],ECX
.Lb2:
CMP EAX,EDX
JLE .Lb3
MOV dword ptr [RDI + 0x44],EAX
.Lb3:
RET
.Lb4:
MOV EDX,dword ptr [RDI + 0x44]
.Lb5:
MOV dword ptr [RDI + 0x54],ESI
JMP .Lb0
