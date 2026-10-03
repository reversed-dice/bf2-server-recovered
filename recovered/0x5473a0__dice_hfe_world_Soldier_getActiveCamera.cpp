// FUNCTION: BF2 0x5473a0
namespace dice { namespace hfe { namespace world {
extern void* fn_49c2e0(void* a);
void* getActiveCamera_0x5473a0(void* self) {
    void* p = ((void* (*)(void*))(*(void***)self)[0x60])(self);
    void* q = fn_49c2e0(p);
    if (q)
        return q;
    return *(void**)((char*)*(void**)((char*)self + 0x338) + 0x28);
}
} } }
