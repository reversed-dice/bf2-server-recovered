.intel_syntax noprefix
.text
.globl _ZN4dice3hfe6memory32MemoryHistogram_setPeakToCurrent
_ZN4dice3hfe6memory32MemoryHistogram_setPeakToCurrent:
SUB RSP,0x8
MOV EDI,0xf814f8
CALL 0x0074af10
XOR ECX,ECX
.Lb0:
MOV EAX,ECX
INC RCX
SHL RAX,0x3
CMP RCX,0x2710
MOV EDX,dword ptr [RAX + 0xf6dc64]
MOV dword ptr [RAX + 0xf6dc60],EDX
JNZ .Lb0
MOV EDI,0xf814f8
ADD RSP,0x8
JMP 0x0074af20
