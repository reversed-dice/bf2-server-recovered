typedef void (*vfn8)(void*);
void fn_0x7c2840(void* self) {
    *(volatile long*)self = 0xba9f50;
    void* p = *(void**)((char*)self + 0x8);
    if (p) {
        void** vt = *(void***)p;
        ((vfn8)vt[0x8/8])(p);
    }
    *(long*)self = 0xb980f0;
}
// REVERSED_FUNCTION: dice_hfe_console_Wrapper_dtor_Wrapper (0x7c2840)
