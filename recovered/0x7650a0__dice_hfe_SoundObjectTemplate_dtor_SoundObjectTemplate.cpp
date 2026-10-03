// FUNCTION: BF2 0x7650a0
extern "C" void base_dtor_call(void*);
typedef void (*vfn8)(void*);
void fn_0x7650a0(void* self) {
    char* p = (char*)self;
    *(long*)(p+0x0) = (long)0xba0a90;
    *(long*)(p+0x10) = (long)0xba0d48;
    *(long*)(p+0x68) = (long)0xba0d80;
    void* q = *(void**)(p+0x78);
    if (q) {
        void** vt = *(void***)q;
        ((vfn8)vt[0x8/8])(q);
    }
    base_dtor_call(self);
}
// REVERSED_FUNCTION: dice_hfe_SoundObjectTemplate_dtor_SoundObjectTemplate (0x7650a0)
