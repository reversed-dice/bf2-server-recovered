namespace dice { namespace hfe {
void eom_4d0ae0(char* self) {
    char* a = self + 0x18;
    char* d = self + 0x20;
    *(volatile char*)(self + 0x0) = 0;
    *(volatile char*)(self + 0x1) = 1;
    *(volatile int*)(self + 0x4) = 0xbf800000;
    *(volatile int*)(self + 0x8) = 0;
    *(volatile int*)(self + 0xc) = 1;
    *(volatile int*)(self + 0x10) = 0x3f2aaa9f;
    *(long* volatile*)(a + 0x8) = 0;
    *(long* volatile*)(a + 0x10) = 0;
    *(volatile int*)(a + 0x8) = 0;
    *(long* volatile*)(a + 0x28) = 0;
    *(char** volatile*)(a + 0x18) = (char**)d;
    *(char** volatile*)(a + 0x20) = (char**)d;
    char* b = self + 0x48;
    *(long* volatile*)(self + 0x48) = 0;
    *(long* volatile*)(b + 0x8) = 0;
    *(long* volatile*)(b + 0x10) = 0;
    *(volatile int*)(self + 0x64) = 0;
    *(long* volatile*)(self + 0x68) = (long*)0xf6c6e8;
    *(volatile int*)(self + 0x70) = 0;
    *(volatile int*)(self + 0x74) = 1;
}
} }
// REVERSED_FUNCTION: dice_hfe_Vote_Vote (0x4d0ae0)
