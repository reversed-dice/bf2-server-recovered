// FUNCTION: BF2 0x518a10
extern "C" void fn_539710(void*);
extern void* g_10b8c08;
typedef void (*vfn2_t)(void*, void*);
void fn_518a70(void* self) {
    *(long*)self = 0xb423d0;
    *(long*)((char*)self + 0x100) = 0xb429a8;
    *(long*)((char*)self + 0x238) = 0xb429e0;
    *(long*)((char*)self + 0x240) = 0xb42cb0;
    if (__builtin_expect(*(long*)((char*)self + 0x50) == 0, 0)) {
        void* g = g_10b8c08;
        ((vfn2_t*)*(void***)g)[0x338/8](g, self);
    }
    fn_539710(self);
}