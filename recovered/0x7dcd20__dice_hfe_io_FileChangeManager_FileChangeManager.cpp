namespace dice { namespace hfe {
void eom_7dcd20(char* self) {
    char* p0 = self + 0x18;
    char* p1 = self + 0x20;
    *(long* volatile*)(self) = (long*)0xbac290;
    *(long* volatile*)(self + 0x8) = (long*)0xbac320;
    *(volatile int*)(self + 0x10) = 0x1;
    *(volatile char*)(self + 0x14) = 0;
    *(long* volatile*)(p0 + 0x8) = 0;
    *(long* volatile*)(p0 + 0x10) = 0;
    *(volatile int*)(p0 + 0x8) = 0;
    *(long* volatile*)(p0 + 0x28) = 0;
    *(char** volatile*)(p0 + 0x18) = (char**)p1;
    *(char** volatile*)(p0 + 0x20) = (char**)p1;
    char* p2 = self + 0x48;
    *(long* volatile*)(self + 0x48) = 0;
    *(long* volatile*)(p2 + 0x8) = 0;
    *(long* volatile*)(p2 + 0x10) = 0;
    char* p3 = self + 0x68;
    *(volatile char*)(self + 0x60) = 0;
    *(long* volatile*)(self + 0x68) = 0;
    *(long* volatile*)(p3 + 0x8) = 0;
    *(long* volatile*)(p3 + 0x10) = 0;
    *(volatile int*)(self + 0x80) = 0x3dcccccd;
    *(volatile char*)(self + 0x84) = 0;
}
} }
// REVERSED_FUNCTION: 0x7dcd20