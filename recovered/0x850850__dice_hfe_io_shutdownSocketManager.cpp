// FUNCTION: BF2 0x850850
extern "C" void _ZdlPv(void*);
typedef void (*vfn0)(void*);
void fn_0x850850() {
    void* g = *(void**)0x10b4018;
    if (g) {
        void** vt = *(void***)g;
        ((vfn0)vt[8/8])(g);
        void* g2 = *(void**)0x10b4018;
        _ZdlPv(g2);
        *(void**)0x10b4018 = 0;
    }
}
// REVERSED_FUNCTION: dice_hfe_io_shutdownSocketManager (0x850850)
