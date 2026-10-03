.intel_syntax noprefix
.text
.globl _ZN4dice3hfe4Game15internal_exitPcoPN4dice3hfe5world7IObjectE
_ZN4dice3hfe4Game15internal_exitPcoPN4dice3hfe5world7IObjectE:
PUSH R12
TEST RSI,RSI
PUSH RBP
PUSH RBX
MOV RBX,RSI
JZ .Lret
MOV RAX,qword ptr [RSI]
MOV RDI,RBX
MOV ESI,dword ptr [0x00c7ce20]
CALL qword ptr [RAX + 0x18]
TEST RAX,RAX
MOV RDX,RAX
JZ .Ldo
MOV RAX,qword ptr [RAX]
MOV RDI,RDX
CALL qword ptr [RAX + 0x58]
TEST RAX,RAX
MOV RBP,RAX
JZ .Ldo
.Lloop1:
MOV RAX,qword ptr [RBP]
MOV ESI,dword ptr [0x00c7ce6c]
MOV RDI,RBP
CALL qword ptr [RAX + 0x18]
TEST RAX,RAX
MOV R12,RAX
JNZ .Lfound
MOV RBP,qword ptr [RBP + 0x50]
TEST RBP,RBP
JNZ .Lloop1
.Ldo:
MOV RAX,qword ptr [RBX]
MOV ESI,dword ptr [0x00c7ce6c]
MOV RDI,RBX
CALL qword ptr [RAX + 0x18]
TEST RAX,RAX
MOV R12,RAX
JNZ .Lfound
MOV RBX,qword ptr [RBX + 0x50]
TEST RBX,RBX
JNZ .Ldo
.Lret:
POP RBX
POP RBP
POP R12
RET
.Lfound:
MOV RAX,qword ptr [R12]
MOV RDI,R12
CALL qword ptr [RAX + 0x28]
TEST RAX,RAX
MOV RBX,RAX
JZ .Ltail
NOP
.Lloop2:
MOV RAX,qword ptr [RBX]
MOV ESI,dword ptr [0x00c7ce6c]
MOV RDI,RBX
CALL qword ptr [RAX + 0x18]
TEST RAX,RAX
MOV RDX,RAX
JNZ .Lcall58
MOV RBX,qword ptr [RBX + 0x50]
TEST RBX,RBX
JNZ .Lloop2
.Ltail:
MOV RAX,qword ptr [R12]
MOV RDI,R12
POP RBX
POP RBP
POP R12
MOV R11,qword ptr [RAX + 0x40]
JMP R11
.Lcall58:
MOV RAX,qword ptr [RAX]
MOV RDI,RDX
CALL qword ptr [RAX + 0x58]
JMP .Ltail
