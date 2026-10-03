.intel_syntax noprefix
.text
.globl _ZN4dice3hfe4Game32playerControlsLaserGuidedWeaponPN4dice3hfe5world7IPlayerE
_ZN4dice3hfe4Game32playerControlsLaserGuidedWeaponPN4dice3hfe5world7IPlayerE:
PUSH RBP
MOV RBP,RSI
PUSH RBX
SUB RSP,0x8
TEST RSI,RSI
JZ .Lret0
.Lloop:
MOV RAX,qword ptr [RSI]
MOV RDI,RSI
CALL qword ptr [RAX + 0x90]
TEST RAX,RAX
MOV RBX,RAX
JZ .Lret0
MOV RAX,qword ptr [RBX]
MOV ESI,dword ptr [0x00c7ce6c]
MOV RDI,RBX
CALL qword ptr [RAX + 0x18]
TEST RAX,RAX
JNZ .Lfound
MOV RBX,qword ptr [RBX + 0x50]
TEST RBX,RBX
JNZ .Lloop
.Lret0:
XOR EDX,EDX
.Lret1:
ADD RSP,0x8
MOV EAX,EDX
POP RBX
POP RBP
RET
.Lfound:
MOV RAX,qword ptr [RBP]
MOV RDI,RBP
CALL qword ptr [RAX + 0x90]
TEST RAX,RAX
JZ .Lret0
MOV RAX,qword ptr [RBP]
MOV RDI,RBP
CALL qword ptr [RAX + 0x90]
CMP qword ptr [RAX + 0x28],0x0
JZ .Lret0
MOV RAX,qword ptr [RBP]
MOV RDI,RBP
CALL qword ptr [RAX + 0x90]
MOV RDI,qword ptr [RAX + 0x28]
MOV ESI,dword ptr [0x00c7ce70]
MOV RAX,qword ptr [RDI]
CALL qword ptr [RAX + 0x18]
TEST RAX,RAX
MOV RDX,RAX
JZ .Lret0
MOV RAX,qword ptr [RDX]
MOV RDI,RDX
CALL qword ptr [RAX + 0x48]
CMP EAX,0x2
MOV EDX,0x1
JNZ .Lret0
JMP .Lret1
