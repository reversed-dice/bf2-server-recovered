// FUNCTION: BF2 0x642ea0
extern "C" int _ZN9__gnu_cxx18__exchange_and_addEPVii(int* p, int v);
extern "C" void _ZNSs4_Rep10_M_destroyERKSaIcE(void* rep, void* alloc);

void dtor_642ea0(void* self) {
    char* s = *(char**)self;
    s -= 0x18;
    if (__builtin_expect(s != (char*)0xf6c6d0, 0)) {
        int c = _ZN9__gnu_cxx18__exchange_and_addEPVii((int*)(s + 0x10), -1);
        if (c < 1) {
            char a;
            _ZNSs4_Rep10_M_destroyERKSaIcE(s, &a);
        }
    }
}
