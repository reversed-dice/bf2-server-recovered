.intel_syntax noprefix
.text
.globl _ZN4dice3hfe27PostRemoteEvent_PostRemoteEventC1ENS0_13EventCategoryEjbPvjf
.type _ZN4dice3hfe27PostRemoteEvent_PostRemoteEventC1ENS0_13EventCategoryEjbPvjf, @function
_ZN4dice3hfe27PostRemoteEvent_PostRemoteEventC1ENS0_13EventCategoryEjbPvjf:
    mov qword ptr [rsp - 0x30], rbx
    mov qword ptr [rsp - 0x28], rbp
    mov rbx, rdi
    mov qword ptr [rsp - 0x20], r12
    mov qword ptr [rsp - 0x18], r13
    mov r13d, r9d
    mov qword ptr [rsp - 0x10], r14
    mov qword ptr [rsp - 0x8], r15
    sub rsp, 0x48
    movss dword ptr [rsp + 0xc], xmm0
    mov r12d, dword ptr [rsp + 0xc]
    mov r15d, esi
    mov r14d, edx
    mov qword ptr [rsp + 0x10], r8
    mov ebp, ecx
    call _ZN4dice3hfe9GameEventC2Ev
    mov qword ptr [rbx], 0xb2d6b0
    mov dword ptr [rbx + 0x10], r15d
    movzx ecx, bpl
    mov dword ptr [rbx + 0x14], r14d
    mov byte ptr [rbx + 0x4c], r13b
    mov r9d, r13d
    mov dword ptr [rbx + 0x50], r12d
    mov r8, qword ptr [rsp + 0x10]
    mov edx, r14d
    mov dword ptr [rsp + 0xc], r12d
    mov esi, r15d
    mov rdi, rbx
    movss xmm0, dword ptr [rsp + 0xc]
    mov rbx, qword ptr [rsp + 0x18]
    mov rbp, qword ptr [rsp + 0x20]
    mov r12, qword ptr [rsp + 0x28]
    mov r13, qword ptr [rsp + 0x30]
    mov r14, qword ptr [rsp + 0x38]
    mov r15, qword ptr [rsp + 0x40]
    add rsp, 0x48
    jmp _ZN4dice3hfe27PostRemoteEvent_PostRemoteEvent16ConstructorHelperENS0_13EventCategoryEjbPvjf
// REVERSED_FUNCTION: dice_hfe_PostRemoteEvent_PostRemoteEvent_dice_hfe_EventCategory_unsigned_int_bool_voidptr_unsigned_int_float (0x42c170)