// FUNCTION: BF2 0x6425b0
extern "C" int _ZN9__gnu_cxx18__exchange_and_addEPVii(int* p, int v);
extern "C" void _ZNSs4_Rep10_M_destroyERKSaIcE(void* rep, void* alloc);

void dtor_5ed310(void* self) {
    *(void**)self = (void*)0xb87c10;
    *(void**)((char*)self + 0x8) = (void*)0xb87d08;
    char* s = *(char**)((char*)self + 0x20);
    s -= 0x18;
    if (__builtin_expect(s != (char*)0xf6c6d0, 0)) {
        int c = _ZN9__gnu_cxx18__exchange_and_addEPVii((int*)(s + 0x10), -1);
        if (c < 1) {
            char a;
            _ZNSs4_Rep10_M_destroyERKSaIcE(s, &a);
        }
    }
}
