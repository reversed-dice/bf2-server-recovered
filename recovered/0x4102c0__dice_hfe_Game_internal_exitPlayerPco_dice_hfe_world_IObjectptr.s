.intel_syntax noprefix
.text
.globl _ZN4dice3hfe4Game48internal_exitPlayerPco_dice_hfe_world_IObjectptr
_ZN4dice3hfe4Game48internal_exitPlayerPco_dice_hfe_world_IObjectptr:
PUSH R12
TEST RSI,RSI
PUSH RBP
PUSH RBX
MOV RBX,RSI
JZ .Lb2
MOV RAX,qword ptr [RSI]
MOV RDI,RBX
MOV ESI,dword ptr [0x00c7ce20]
CALL qword ptr [RAX + 0x18]
TEST RAX,RAX
MOV RDX,RAX
JZ .Lb1
MOV RAX,qword ptr [RAX]
MOV RDI,RDX
CALL qword ptr [RAX + 0x58]
TEST RAX,RAX
MOV RBP,RAX
JZ .Lb1
.Lb0:
MOV RAX,qword ptr [RBP]
MOV ESI,dword ptr [0x00c7ce6c]
MOV RDI,RBP
CALL qword ptr [RAX + 0x18]
TEST RAX,RAX
MOV R12,RAX
JNZ .Lb3
MOV RBP,qword ptr [RBP + 0x50]
TEST RBP,RBP
JNZ .Lb0
.Lb1:
MOV RAX,qword ptr [RBX]
MOV ESI,dword ptr [0x00c7ce6c]
MOV RDI,RBX
CALL qword ptr [RAX + 0x18]
TEST RAX,RAX
MOV R12,RAX
JNZ .Lb3
MOV RBX,qword ptr [RBX + 0x50]
TEST RBX,RBX
JNZ .Lb1
.Lb2:
POP RBX
POP RBP
POP R12
RET
.Lb3:
MOV RAX,qword ptr [R12]
MOV RDI,R12
CALL qword ptr [RAX + 0x28]
TEST RAX,RAX
MOV RBX,RAX
JZ .Lb5
NOP
.Lb4:
MOV RAX,qword ptr [RBX]
MOV ESI,dword ptr [0x00c7ce6c]
MOV RDI,RBX
CALL qword ptr [RAX + 0x18]
TEST RAX,RAX
MOV RDX,RAX
JNZ .Lb6
MOV RBX,qword ptr [RBX + 0x50]
TEST RBX,RBX
JNZ .Lb4
.Lb5:
MOV RAX,qword ptr [R12]
MOV RDI,R12
POP RBX
POP RBP
POP R12
MOV R11,qword ptr [RAX + 0x48]
JMP R11
.Lb6:
MOV RAX,qword ptr [RAX]
MOV RDI,RDX
CALL qword ptr [RAX + 0x58]
JMP .Lb5
