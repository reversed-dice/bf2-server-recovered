// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x860160
typedef void* (*Fn1)(void*, unsigned int);
typedef void (*Fn0)(void*);
extern "C" void* _Znwm(unsigned long);

extern "C" void* NullInputDeviceManager_create_860160(unsigned int a, void* b) {
    void* r = 0;
    if (b == 0) {
        char* o = (char*)_Znwm(0x40);
        *(int*)(o + 0x8) = 1;
        *(void**)o = (void*)0xbaf8d0;
        char* m = o + 0x10;
        long hdr = (long)(o + 0x18);
        *(long*)(m + 0x8) = 0;
        *(long*)(m + 0x28) = 0;
        *(int*)(m + 0x8) = 0;
        *(long*)(m + 0x10) = 0;
        *(long*)(m + 0x18) = hdr;
        *(long*)(m + 0x20) = hdr;
        r = ((Fn1)(*(void***)o)[3])(o, a);
        if (r == 0) {
            ((Fn0)(*(void***)o)[2])(o);
        }
    }
    return r;
}
