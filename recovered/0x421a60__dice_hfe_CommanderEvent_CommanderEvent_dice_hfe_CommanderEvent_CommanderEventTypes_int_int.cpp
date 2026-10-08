// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x421a60
extern "C" void base_4219b0(void* self);
extern "C" void* squadManager;

extern "C" void ctor_421a60(void* self, unsigned int type, int a, int b) {
    base_4219b0(self);
    *(unsigned int*)((char*)self + 0x10) = type;
    *(unsigned char*)((char*)self + 0x14) = (unsigned char)a;
    *(unsigned short*)((char*)self + 0x16) = (unsigned short)b;
    *(void**)self = (void*)0xb2b970;
    if ((*(unsigned long long*)((char*)self + 0x10) & 0xffff0000ffffffffULL)
            == (0xffff0000ffffffffULL & 0xffff000000000003ULL)
        && squadManager != 0) {
        ((void (*)(void*, unsigned char))(*(void***)squadManager)[0xe0 / 8])(squadManager, (unsigned char)a);
    }
}
