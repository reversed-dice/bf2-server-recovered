namespace dice { namespace hfe {
void eom_718fe0(char* self) {
    char* p0 = self + 0x8;
    *(long* volatile*)(self) = (long*)0xb978d0;
    *(long* volatile*)(self + 0x8) = 0;
    *(long* volatile*)(p0 + 0x8) = 0;
    *(long* volatile*)(p0 + 0x10) = 0;
    *(volatile int*)(self + 0x20) = 0;
    *(long* volatile*)(self + 0x28) = 0;
    *(volatile int*)(self + 0x30) = 0;
    *(long* volatile*)(self + 0x38) = 0;
    *(long* volatile*)(self + 0x40) = (long*)0xf6c6e8;
    *(long* volatile*)(self + 0x48) = (long*)0xf6c6e8;
    *(long* volatile*)(self + 0x50) = 0;
    *(volatile char*)(self + 0x58) = 0;
    *(volatile char*)(self + 0x59) = 0;
    *(volatile int*)(self + 0x5c) = 0;
    *(volatile short*)(self + 0x60) = 0;
    *(volatile short*)(self + 0x62) = 0;
}
} }
// REVERSED_FUNCTION: 0x718fe0