typedef void (*vfn8)(void*);
void fn_0x7bd720(void* self) {
    *(volatile long*)self = 0xba9f50;
    void* p = *(void**)((char*)self + 0x8);
    if (p) {
        void** vt = *(void***)p;
        ((vfn8)vt[0x8/8])(p);
    }
    *(long*)self = 0xb980f0;
}
// REVERSED_FUNCTION: dice_hfe_console_ObjectWrapper_dtor_ObjectWrapper (0x7bd720)
