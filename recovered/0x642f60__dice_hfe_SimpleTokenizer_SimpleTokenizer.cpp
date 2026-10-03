namespace dice { namespace hfe {
void eom_642f60(char* self) {
    char* p0 = self + 0x8;
    *(long* volatile*)(self) = (long*)0xf6c6e8;
    *(long* volatile*)(self + 0x8) = 0;
    *(long* volatile*)(p0 + 0x8) = 0;
    *(long* volatile*)(p0 + 0x10) = 0;
    *(long* volatile*)(p0 + 0x18) = 0;
    *(volatile int*)(self + 0x28) = 0;
}
} }
// REVERSED_FUNCTION: 0x642f60