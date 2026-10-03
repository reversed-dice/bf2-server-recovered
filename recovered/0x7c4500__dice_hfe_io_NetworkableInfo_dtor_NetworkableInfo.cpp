// FUNCTION: BF2 0x7c4500
extern "C" int _ZN9__gnu_cxx18__exchange_and_addEPVii(int* p, int v);
extern "C" void _ZNSs4_Rep10_M_destroyERKSaIcE(void* rep, void* alloc);

void dtor_7c4500(void* self) {
    *(void**)self = (void*)0xBAA470;
    char* s = *(char**)((char*)self + 0x30);
    s -= 0x18;
    if (__builtin_expect(s != (char*)0xf6c6d0, 0)) {
        int c = _ZN9__gnu_cxx18__exchange_and_addEPVii((int*)(s + 0x10), -1);
        if (c < 1) {
            char a;
            _ZNSs4_Rep10_M_destroyERKSaIcE(s, &a);
        }
    }
}
