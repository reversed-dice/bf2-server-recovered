namespace dice { namespace hfe {
void eom_60bc20(char* self, char* p2) {
    char* p0 = self + 0x30;
    *(volatile int*)(self + 0x8) = 0x1;
    *(long* volatile*)(self) = (long*)0xb79130;
    *(long* volatile*)(self + 0x20) = (long*)0xb792c0;
    *(volatile int*)(self + 0x28) = 0x1;
    *(volatile int*)(self + 0x30) = 0;
    *(volatile int*)(p0 + 0x4) = 0x3f800000;
    *(volatile int*)(p0 + 0x8) = 0;
    *(volatile char*)(p0 + 0xc) = 0;
    *(long* volatile*)(p0 + 0x10) = (long*)0x759dc150;
    *(char** volatile*)(self + 0x78) = (char**)p2;
}
} }
// REVERSED_FUNCTION: 0x60bc20