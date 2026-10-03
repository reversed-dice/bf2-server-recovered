// FUNCTION: BF2 0x5989c0
extern "C" void _ZdlPv(void* p);
extern "C" int _ZN9__gnu_cxx18__exchange_and_addEPVii(int* p, int v);
extern "C" void _ZNSs4_Rep10_M_destroyERKSaIcE(void* rep, void* alloc);

void dtor_576fa0(void* self) {
    *(void**)self = (void*)0xb57070;
    int* p = *(int**)((char*)self + 0x10);
    if (p != 0) {
        int v = *p - 1;
        *p = v;
        if (v == 0) {
            _ZdlPv(p);
        }
    }
    char* s = *(char**)((char*)self + 8);
    s -= 0x18;
    if (__builtin_expect(s != (char*)0xf6c6d0, 0)) {
        int c = _ZN9__gnu_cxx18__exchange_and_addEPVii((int*)(s + 0x10), -1);
        if (c < 1) {
            char a;
            _ZNSs4_Rep10_M_destroyERKSaIcE(s, &a);
        }
    }
}
