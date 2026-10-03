// FUNCTION: BF2 0xad4120
void* fn_ad4110(void*) __attribute__((noinline));
void* fn_ad4110(void* a) { return 0; }
void* fn_ad4120(void* self) {
    void* h = fn_ad4110(self);
    void* r = 0;
    if (h) r = *(void**)((char*)h + 0x38);
    return r;
}