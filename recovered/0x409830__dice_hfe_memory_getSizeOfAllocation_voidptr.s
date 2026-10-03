.intel_syntax noprefix
.text
.globl _ZN4dice3hfe6memory20getSizeOfAllocationEPv
_ZN4dice3hfe6memory20getSizeOfAllocationEPv:
XOR EAX,EAX
TEST RDI,RDI
JZ .Lret
TEST byte ptr [RDI + -0x4],0x2
JNZ .Lbig
MOV EAX,dword ptr [RDI + -0x4]
SHR EAX,0x2
SUB EAX,0x4
.Lret:
RET
.Lbig:
MOV EAX,dword ptr [RDI + -0x4]
SHR EAX,0x2
AND EAX,0x7fff
SUB EAX,0x4
JMP .Lret
