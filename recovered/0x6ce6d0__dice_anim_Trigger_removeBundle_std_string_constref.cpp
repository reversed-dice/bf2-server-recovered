// FUNCTION: BF2 0x6ce6d0
namespace dice { namespace hfe { namespace anim {
extern void* fn_6b71d0(void* a, void* b);
void removeBundle_0x6ce6d0(void* self, void* name) {
    void* mgr = *(void**)0x010935c8;
    void* p = ((void* (*)(void*))(*(void***)mgr)[0x9])(mgr);
    void* q = fn_6b71d0(*(void**)((char*)p + 0x10), name);
    if (q)
        ((void (*)(void*, void*))(*(void***)self)[0x12])(self, q);
}
} } }
