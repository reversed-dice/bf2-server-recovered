// FUNCTION: BF2 0x5c2e60
extern "C" void _ZNSs6assignEPKcm(void* s, const char* p, long n);

void ctor_5c2e60(char* self) {
    char* p28 = self + 0x28;
    char* p40 = self + 0x40;
    char* p30 = self + 0x30;
    *(void**)self = (void*)0xb6b1b0;
    *(void**)(self + 8) = (void*)0xb6b270;
    *(int*)(self + 0x10) = 1;
    *(char*)(self + 0x14) = 1;
    *(void**)(self + 0x18) = (void*)0xf6c6e8;
    *(void**)(self + 0x20) = (void*)0xf6c6e8;
    *(void**)(p28) = (void*)0xf6c6e8;
    *(void**)(p30) = (void*)0xf6c6e8;
    *(void**)(p40) = (void*)0xf6c6e8;
    *(int*)(self + 0x38) = 1;
    _ZNSs6assignEPKcm(p28, (const char*)0xbb25f1, 0);
    _ZNSs6assignEPKcm(p30, (const char*)0xbb25f1, 0);
    _ZNSs6assignEPKcm(p40, (const char*)0xbb25f1, 0);
}
