namespace dice { namespace hfe {
extern void func_0x0064b500(void*);  // HTTPRequest ctor
extern void func_0x0064ce80(void*);  // KeyParser ctor
void ctor_0x64e3a0(void* p) {
    *(void**)p = (void*)0xb89fb0;
    func_0x0064b500((char*)p + 0x8);
    *(void**)p = (void*)0xb89eb0;
    *(void**)((char*)p + 0x8) = (void*)0xb89f50;
    *(int*)((char*)p + 0x28) = 1;
    func_0x0064ce80((char*)p + 0x30);
    *(void**)((char*)p + 0x48) = 0;
    char* rax = (char*)p + 0x50;
    char* rdx = (char*)p + 0x58;
    *(void* volatile*)(rax + 0x8) = 0;
    *(void**)(rax + 0x28) = 0;
    *(volatile int*)(rax + 0x8) = 0;
    *(void**)(rax + 0x10) = 0;
    *(void**)(rax + 0x18) = rdx;
    *(void**)(rax + 0x20) = rdx;
    *(volatile char*)((char*)p + 0x80) = 0;
    *(volatile int*)((char*)p + 0x84) = 0;
}
} }
// REVERSED_FUNCTION: dice_hfe_PlayerAwards_PlayerAwards (0x64e3a0)
