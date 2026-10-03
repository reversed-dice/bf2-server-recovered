namespace dice { namespace hfe {
void eom_450a00(char* self) {
    char* a = self + 0x30;
    char* c = self + 0x8;
    char* d = self + 0x38;
    *(long* volatile*)(self + 0x8) = 0;
    *(long* volatile*)(self + 0x10) = 0;
    *(volatile int*)(self + 0x8) = 0;
    *(long* volatile*)(a + 0x10) = 0;
    *(char** volatile*)(self + 0x18) = (char**)c;
    *(char** volatile*)(self + 0x20) = (char**)c;
    *(char** volatile*)(a + 0x18) = (char**)d;
    *(long* volatile*)(a + 0x8) = 0;
    *(char** volatile*)(a + 0x20) = (char**)d;
    *(volatile int*)(a + 0x8) = 0;
    *(long* volatile*)(self + 0x28) = 0;
    *(long* volatile*)(a + 0x28) = 0;
    *(volatile int*)(self + 0x70) = 0;
    *(volatile int*)(self + 0x74) = 0;
    *(char** volatile*)(self + 0x68) = (char**)d;
    *(char** volatile*)(self + 0x60) = (char**)c;
}
} }
// REVERSED_FUNCTION: dice_hfe_BanList_BanList (0x450a00)
