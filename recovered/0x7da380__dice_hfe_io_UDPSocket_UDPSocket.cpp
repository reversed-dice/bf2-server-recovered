namespace dice { namespace hfe {
void eom_7da380(char* self) {
    char* p0 = self + 0xc;
    *(long* volatile*)(self) = (long*)0xbab550;
    *(volatile int*)(self + 0x8) = 0xffffffff;
    *(long* volatile*)(self + 0xc) = 0;
    *(long* volatile*)(p0 + 0x8) = 0;
    *(volatile char*)(p0 + 0x10) = 0x10;
    char* p1 = self + 0x1e;
    *(long* volatile*)(self + 0x1e) = 0;
    *(long* volatile*)(p1 + 0x8) = 0;
    *(volatile char*)(p1 + 0x10) = 0x10;
    *(volatile char*)(self + 0x2f) = 0;
    *(volatile int*)(self + 0x30) = 0x42c80000;
    *(volatile int*)(self + 0x34) = 0;
    *(volatile char*)(self + 0x1d) = 0;
}
} }
// REVERSED_FUNCTION: 0x7da380