namespace dice { namespace hfe {
void eom_6ce220(char* self) {
    char* p0 = self + 0x8;
    *(long* volatile*)(self) = (long*)0xb91a50;
    *(long* volatile*)(self + 0x8) = 0;
    *(long* volatile*)(p0 + 0x8) = 0;
    *(long* volatile*)(p0 + 0x10) = 0;
    char* p1 = self + 0x20;
    *(long* volatile*)(self + 0x20) = 0;
    *(long* volatile*)(p1 + 0x8) = 0;
    *(long* volatile*)(p1 + 0x10) = 0;
    *(volatile int*)(self + 0x38) = 0;
    *(volatile int*)(self + 0x3c) = 0;
    *(volatile char*)(self + 0x40) = 0;
    *(volatile char*)(self + 0x41) = 0;
    *(volatile char*)(self + 0x42) = 0;
}
} }
// REVERSED_FUNCTION: 0x6ce220