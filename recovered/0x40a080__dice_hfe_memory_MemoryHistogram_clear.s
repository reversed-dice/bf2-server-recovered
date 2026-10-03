.intel_syntax noprefix
.text
.globl _ZN4dice3hfe6memory21MemoryHistogram_clear
_ZN4dice3hfe6memory21MemoryHistogram_clear:
SUB RSP,0x8
MOV EDI,0xf814f8
CALL 0x0074af10
CMP byte ptr [0x00f814f0],0x0
JZ .Lb0
MOV EDI,0xf6dc60
MOV EDX,0x13880
XOR ESI,ESI
CALL 0x00407f68
MOV EDI,0xf814f8
ADD RSP,0x8
JMP 0x0074af20
.Lb0:
MOV EDI,0xf814f8
ADD RSP,0x8
JMP 0x0074af20
