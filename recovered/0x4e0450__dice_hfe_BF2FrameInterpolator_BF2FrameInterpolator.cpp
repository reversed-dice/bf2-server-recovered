namespace dice { namespace hfe {
void eom_4e0450(char* self) {
    char* p0 = self + 0x10;
    *(volatile char*)(self) = 0x1;
    *(volatile int*)(self + 0x4) = 0;
    *(volatile int*)(self + 0x8) = 0;
    *(long* volatile*)(self + 0x10) = 0;
    *(long* volatile*)(p0 + 0x8) = 0;
    *(long* volatile*)(p0 + 0x10) = 0;
    char* p1 = self + 0x28;
    *(long* volatile*)(self + 0x28) = 0;
    *(long* volatile*)(p1 + 0x8) = 0;
    *(long* volatile*)(p1 + 0x10) = 0;
}
} }
// REVERSED_FUNCTION: 0x4e0450