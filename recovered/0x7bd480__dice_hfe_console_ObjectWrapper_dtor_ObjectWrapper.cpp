extern "C" void delete_4085b8(void*);
typedef void (*vfn8)(void*);
void fn_0x7bd480(void* self) {
    *(volatile long*)self = 0xba9db0;
    void* p = *(void**)((char*)self + 0x20);
    if (p) {
        void** vt = *(void***)p;
        ((vfn8)vt[0x8/8])(p);
    }
    *(long*)self = 0xba9cb0;
    delete_4085b8(self);
}
// REVERSED_FUNCTION: dice_hfe_console_ObjectWrapper_dtor_ObjectWrapper (0x7bd480)
