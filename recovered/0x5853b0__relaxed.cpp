// FUNCTION: BF2 0x5853b0
extern "C" void base_dtor_call(void*);
typedef void (*vfn8)(void*);
void fn_0x5853f0(void* self) {
    char* p = (char*)self;
    *(long*)(p+0x0) = (long)0xb5b490;
    *(long*)(p+0x100) = (long)0xb5b7e0;
    *(long*)(p+0x238) = (long)0xb5b818;
    void* q = *(void**)(p+0x2a8);
    if (q) {
        void** vt = *(void***)q;
        ((vfn8)vt[0x8/8])(q);
    }
    base_dtor_call(self);
}
// REVERSED_FUNCTION: dice_hfe_world_RotationalBundle_dtor_RotationalBundle (0x5853f0)
