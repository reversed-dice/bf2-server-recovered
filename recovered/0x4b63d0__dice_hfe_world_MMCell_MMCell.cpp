namespace dice { namespace hfe {
void eom_4b63d0(char* self) {
    char* p0 = self + 0x8;
    char* p1 = self + 0x10;
    *(long* volatile*)(self) = (long*)0xb366f0;
    *(long* volatile*)(p0 + 0x8) = 0;
    *(char** volatile*)(p0 + 0x18) = (char**)p1;
    *(volatile int*)(p0 + 0x8) = 0;
    *(char** volatile*)(p0 + 0x20) = (char**)p1;
    char* p2 = self + 0x40;
    *(long* volatile*)(p0 + 0x28) = 0;
    *(long* volatile*)(p0 + 0x10) = 0;
    char* p3 = self + 0x38;
    *(long* volatile*)(p3 + 0x8) = 0;
    *(char** volatile*)(p3 + 0x18) = (char**)p2;
    *(volatile int*)(p3 + 0x8) = 0;
    *(char** volatile*)(p3 + 0x20) = (char**)p2;
    char* p4 = self + 0x70;
    *(long* volatile*)(p3 + 0x28) = 0;
    *(long* volatile*)(p3 + 0x10) = 0;
    char* p5 = self + 0x68;
    *(long* volatile*)(p5 + 0x8) = 0;
    *(long* volatile*)(p5 + 0x28) = 0;
    *(volatile int*)(p5 + 0x8) = 0;
    *(long* volatile*)(p5 + 0x10) = 0;
    *(char** volatile*)(p5 + 0x18) = (char**)p4;
    *(char** volatile*)(p5 + 0x20) = (char**)p4;
    *(volatile int*)(self + 0x98) = 0xbf800000;
}
} }
// REVERSED_FUNCTION: 0x4b63d0