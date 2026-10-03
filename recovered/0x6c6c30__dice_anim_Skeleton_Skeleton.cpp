namespace dice { namespace hfe {
void eom_6c6c30(char* self) {
    char* p0 = self + 0x30;
    *(volatile int*)(self) = 0x3f800000;
    *(long* volatile*)(self + 0x8) = 0;
    *(long* volatile*)(self + 0x10) = 0;
    *(volatile char*)(self + 0x18) = 0;
    *(long* volatile*)(self + 0x20) = 0;
    *(long* volatile*)(p0 + 0x8) = 0;
    *(long* volatile*)(p0 + 0x10) = 0;
    char* p1 = self + 0x48;
    *(long* volatile*)(self + 0x30) = 0;
    *(long* volatile*)(self + 0x48) = 0;
    *(long* volatile*)(p1 + 0x8) = 0;
    *(long* volatile*)(p1 + 0x10) = 0;
    char* p2 = self + 0x60;
    *(long* volatile*)(self + 0x60) = 0;
    *(long* volatile*)(p2 + 0x8) = 0;
    *(long* volatile*)(p2 + 0x10) = 0;
    *(volatile char*)(self + 0x78) = 0;
}
} }
// REVERSED_FUNCTION: 0x6c6c30