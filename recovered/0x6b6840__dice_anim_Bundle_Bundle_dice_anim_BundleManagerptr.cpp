namespace dice { namespace hfe {
void eom_6b6840(char* self, char* p2) {
    char* p0 = self + 0x10;
    *(char** volatile*)(self + 0x8) = (char**)self;
    *(char** volatile*)(self) = (char**)self;
    *(char** volatile*)(p0 + 0x8) = (char**)p0;
    *(char** volatile*)(self + 0x10) = (char**)p0;
    *(char** volatile*)(self + 0x20) = (char**)p2;
    *(volatile int*)(self + 0x28) = 0x3f800000;
    *(volatile int*)(self + 0x2c) = 0x3e4ccccd;
    *(volatile int*)(self + 0x30) = 0x3dcccccd;
    *(volatile char*)(self + 0x34) = 0;
    *(volatile char*)(self + 0x35) = 0;
    *(volatile char*)(self + 0x36) = 0;
    *(volatile char*)(self + 0x37) = 0x1;
    *(volatile char*)(self + 0x38) = 0;
    *(volatile char*)(self + 0x39) = 0;
    *(volatile char*)(self + 0x3a) = 0;
}
} }
// REVERSED_FUNCTION: 0x6b6840