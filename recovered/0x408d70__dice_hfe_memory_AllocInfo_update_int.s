.intel_syntax noprefix
.text
.globl _ZN4dice3hfe6memory16AllocInfo_updateEi
_ZN4dice3hfe6memory16AllocInfo_updateEi:
MOV qword ptr [RSP + -0x18],RBP
MOV qword ptr [RSP + -0x10],R12
MOV RBP,RDI
MOV qword ptr [RSP + -0x20],RBX
MOV qword ptr [RSP + -0x8],R13
SUB RSP,0x28
TEST ESI,ESI
MOV R12D,ESI
JNS .Lb1
DEC dword ptr [RDI + 0x20]
ADD dword ptr [RDI + 0x24],ESI
.Lb0:
MOV RBX,qword ptr [RSP + 0x8]
MOV RBP,qword ptr [RSP + 0x10]
MOV R12,qword ptr [RSP + 0x18]
MOV R13,qword ptr [RSP + 0x20]
ADD RSP,0x28
RET
.Lb1:
MOV dword ptr [RDI + 0x14],0xffffffff
MOV EAX,dword ptr [0x00f66ab8]
CMP EAX,-0x1
JZ .Lb2
CDQE
LEA R13,[RAX*0x8]
CALL 0x004086e0
LEA RBX,[R13 + 0xf89540]
CMP dword ptr [RBX + 0x4],EAX
JZ .Lb14
.Lb2:
MOV EAX,dword ptr [RBP + 0x30]
INC EAX
CMP EAX,dword ptr [RBP + 0x34]
MOV dword ptr [RBP + 0x30],EAX
JG .Lb10
MOV EAX,dword ptr [0x00f81504]
CMP dword ptr [RBP + 0x38],EAX
JZ .Lb4
.Lb3:
MOV dword ptr [RBP + 0x30],0x0
MOV EAX,dword ptr [0x00f81504]
MOV dword ptr [RBP + 0x38],EAX
.Lb4:
MOV EAX,dword ptr [RBP + 0x3c]
INC EAX
CMP EAX,dword ptr [RBP + 0x40]
MOV dword ptr [RBP + 0x3c],EAX
JG .Lb9
MOV EAX,dword ptr [0x00f81500]
CMP dword ptr [RBP + 0x44],EAX
JZ .Lb6
.Lb5:
MOV dword ptr [RBP + 0x3c],0x0
MOV EAX,dword ptr [0x00f81500]
MOV dword ptr [RBP + 0x44],EAX
.Lb6:
MOV EDX,dword ptr [RBP + 0x20]
MOV EAX,R12D
MOV ECX,dword ptr [RBP + 0x18]
ADD EAX,dword ptr [RBP + 0x24]
INC EDX
TEST ECX,ECX
MOV dword ptr [RBP + 0x20],EDX
MOV dword ptr [RBP + 0x24],EAX
JNZ .Lb11
MOV dword ptr [RBP + 0x28],R12D
MOV dword ptr [RBP + 0x2c],R12D
.Lb7:
CMP ECX,EAX
JGE .Lb8
MOV dword ptr [RBP + 0x18],EAX
.Lb8:
CMP dword ptr [RBP + 0x1c],EDX
JGE .Lb0
MOV dword ptr [RBP + 0x1c],EDX
MOV RBX,qword ptr [RSP + 0x8]
MOV RBP,qword ptr [RSP + 0x10]
MOV R12,qword ptr [RSP + 0x18]
MOV R13,qword ptr [RSP + 0x20]
ADD RSP,0x28
RET
.Lb9:
MOV dword ptr [RBP + 0x40],EAX
MOV EAX,dword ptr [0x00f81500]
CMP dword ptr [RBP + 0x44],EAX
JNZ .Lb5
JMP .Lb6
.Lb10:
MOV dword ptr [RBP + 0x34],EAX
MOV EAX,dword ptr [0x00f81504]
CMP dword ptr [RBP + 0x38],EAX
JNZ .Lb3
JMP .Lb4
.Lb11:
CMP R12D,dword ptr [RBP + 0x28]
JL .Lb13
CMP R12D,dword ptr [RBP + 0x2c]
NOP
NOP
JLE .Lb7
.Lb12:
MOV dword ptr [RBP + 0x2c],R12D
JMP .Lb7
.Lb13:
CMP R12D,dword ptr [RBP + 0x2c]
MOV dword ptr [RBP + 0x28],R12D
JLE .Lb7
JMP .Lb12
.Lb14:
MOV EAX,dword ptr [R13 + 0xf89540]
MOV dword ptr [RBP + 0x14],EAX
JMP .Lb2
