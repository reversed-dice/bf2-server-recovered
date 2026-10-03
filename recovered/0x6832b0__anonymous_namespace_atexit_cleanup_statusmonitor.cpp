// FUNCTION: BF2 0x6832b0
typedef void (*vfn0)(void*);
void fn_0x6832b0() {
    void* g = *(void**)0x1092c00;
    if (g) {
        void** vt = *(void***)g;
        ((vfn0)vt[8/8])(g);
    }
}
// REVERSED_FUNCTION: anonymous_namespace_atexit_cleanup_statusmonitor (0x6832b0)
