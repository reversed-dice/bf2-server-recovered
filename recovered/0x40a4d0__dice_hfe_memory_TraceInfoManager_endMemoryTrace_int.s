.intel_syntax noprefix
.text
.globl _ZN4dice3hfe6memory31TraceInfoManager_endMemoryTraceEi
_ZN4dice3hfe6memory31TraceInfoManager_endMemoryTraceEi:
MOV qword ptr [RSP + -0x10],RBX
MOV qword ptr [RSP + -0x8],RBP
SUB RSP,0x18
MOV EBX,dword ptr [0x00f66ab8]
TEST EBX,EBX
JS .Lb1
MOVSXD RBP,EBX
CMP dword ptr [0xf89540 + RBP*0x8],EDI
JZ .Lb2
.Lb0:
MOV RBX,qword ptr [RSP + 0x8]
MOV RBP,qword ptr [RSP + 0x10]
ADD RSP,0x18
RET
.Lb1:
MOV RBX,qword ptr [RSP + 0x8]
MOV RBP,qword ptr [RSP + 0x10]
MOV dword ptr [0x00f66ab8],0x0
ADD RSP,0x18
RET
.Lb2:
CALL 0x0040a1a0
CMP dword ptr [0xf89544 + RBP*0x8],EAX
JNZ .Lb0
LEA EAX,[RBX + -0x1]
MOV dword ptr [0xf89540 + RBP*0x8],0xffffffff
MOV dword ptr [0x00f66ab8],EAX
JMP .Lb0
