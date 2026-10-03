// FUNCTION: BF2 0x5bb450
extern "C" void _ZNSs6assignEPKcm(void* s, const char* p, long n);

void ctor_5bb450(void* self) {
    *(void**)self = (void*)0xb68910;
    *(void**)((char*)self + 8) = (void*)0xb689c0;
    *(int*)((char*)self + 0x10) = 1;
    *(char*)((char*)self + 0x14) = 1;
    *(void**)((char*)self + 0x18) = (void*)0xf6c6e8;
    *(void**)((char*)self + 0x20) = (void*)0xf6c6e8;
    *(void**)((char*)self + 0x28) = (void*)0xf6c6e8;
    *(void**)((char*)self + 0x30) = (void*)0xf6c6e8;
    *(void**)((char*)self + 0x38) = (void*)0xf6c6e8;
    _ZNSs6assignEPKcm((char*)self + 0x18, (const char*)0xbb25f1, 0);
    _ZNSs6assignEPKcm((char*)self + 0x20, (const char*)0xbb25f1, 0);
    _ZNSs6assignEPKcm((char*)self + 0x28, (const char*)0xbb25f1, 0);
}
