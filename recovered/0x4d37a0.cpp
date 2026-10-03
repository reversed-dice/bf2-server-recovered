extern "C" void* g_gameLogic;
typedef int (*vfn0)(void*);

extern "C" int getTouchedServerCount_4d37a0(void* self)
{
    void* gl = g_gameLogic;
    if (gl) {
        if (((vfn0)(*(void***)gl)[0x2b0/8])(gl) - 1 == 0) {
            return *(int*)((char*)self + 0x144);
        }
    }
    int v = *(int*)((char*)self + 0x144);
    v++;
    *(int*)((char*)self + 0x144) = v;
    return v;
}
