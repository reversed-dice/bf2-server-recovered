.intel_syntax noprefix
.text
.globl _ZN4dice3hfe4Game155outputChatString_dice_hfe_TargetChannel_dice_hfe_ChannelMessageType_int_int_std_basic_string_wchar_t_std_char_traits_wchar_t_std_allocator_wchar_t_constref
_ZN4dice3hfe4Game155outputChatString_dice_hfe_TargetChannel_dice_hfe_ChannelMessageType_int_int_std_basic_string_wchar_t_std_char_traits_wchar_t_std_allocator_wchar_t_constref:
MOV RDI,qword ptr [0x0112ee38]
PUSH RBX
MOV EBX,ESI
MOV ESI,ECX
MOV RAX,qword ptr [RDI]
CALL qword ptr [RAX + 0x40]
TEST RAX,RAX
MOV RDX,RAX
JZ .Lb0
MOV RAX,qword ptr [RAX]
MOV RDI,RDX
CALL qword ptr [RAX + 0x1d0]
.Lb0:
CMP EBX,0x12
JA .Lb1
MOV EAX,EBX
JMP qword ptr [0xb2a5a8 + RAX*0x8]
.Lb1:
POP RBX
RET
MOV RDI,qword ptr [0x0112ee38]
POP RBX
MOV RAX,qword ptr [RDI]
MOV R11,qword ptr [RAX + 0x60]
JMP R11
