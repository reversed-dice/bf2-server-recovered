// FUNCTION: BF2 0x40baf0
// BF2_FLAGS: -fno-strict-aliasing
extern "C" void _ZNSsC1EPKcRKSaIcE(void*, const void*, void*);

void fn_0x40baf0(void* self) {
    char a;
    char b;
    _ZNSsC1EPKcRKSaIcE(self, (void*)0xb2a77a, &b);
    _ZNSsC1EPKcRKSaIcE((char*)self + 0x8, (void*)0xbb25f1, &a);
    *(unsigned int*)((char*)self + 0x10) = 0;
    *(unsigned int*)((char*)self + 0x14) = 0xffffffff;
    *(void**)((char*)self + 0x18) = (void*)0xf6c6e8;
    *(unsigned char*)((char*)self + 0x20) = 0;
    *(unsigned char*)((char*)self + 0x21) = 1;
    long* p = (long*)((char*)self + 0x28);
    p[0] = 0;
    p[1] = 0;
    p[2] = 0;
}
