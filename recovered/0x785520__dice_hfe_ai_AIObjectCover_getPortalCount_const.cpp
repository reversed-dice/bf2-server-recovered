// FUNCTION: BF2 0x785520
namespace dice { namespace hfe { namespace ai {
extern void* fn_699e30(void* a, int b);
int getPortalCount_0x785520(void* self) {
    void* p = *(void**)((char*)self + 8);
    void* q = ((void* (*)(void*))(*(void***)p)[0x8])(p);
    void* r = fn_699e30(q, 0);
    if (!r)
        return 0;
    return ((int (*)(void*))(*(void***)r)[0x4])(r);
}
} } }
