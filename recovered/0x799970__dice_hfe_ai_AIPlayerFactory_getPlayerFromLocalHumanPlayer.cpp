// FUNCTION: BF2 0x799970
namespace dice { namespace hfe { namespace ai {
void* getPlayerFromLocalPlayer_0x799970(void* self) {
    void* m = *(void**)0x0112ee38;
    void* p = ((void* (*)(void*))(*(void***)m)[0xc])(m);
    if (!p)
        return 0;
    long idx = ((int (*)(void*))(*(void***)p)[0x15])(p);
    return *(void**)((char*)*(void**)((char*)self + 8) + idx * 8);
}
} } }
