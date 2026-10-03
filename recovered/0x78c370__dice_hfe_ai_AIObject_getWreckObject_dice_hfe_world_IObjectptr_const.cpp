// FUNCTION: BF2 0x78c370
namespace dice { namespace hfe { namespace ai {
extern void* fn_790af0(void* c, int z, void* a);
void* getWreckObject_0x78c370(void* self, void* a) {
    void* r = 0;
    void* p = *(void**)((char*)self + 0x28);
    void* c = *(void**)((char*)p + 0x28);
    if (c) {
        r = fn_790af0(c, 0, a);
        ((void (*)(void*))(*(void***)r)[0x12])(r);
    }
    return r;
}
} } }
