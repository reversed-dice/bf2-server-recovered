// FUNCTION: BF2 0x6ce580
namespace dice { namespace hfe { namespace anim {
extern void* fn_6d0220(void* a, void* b, int c);
void addChild_0x6ce580(void* self, void* name) {
    void* mgr = *(void**)0x010935c8;
    void* p = ((void* (*)(void*))(*(void***)mgr)[0x9])(mgr);
    void* q = fn_6d0220(*(void**)((char*)p + 8), name, 0);
    if (q)
        ((void (*)(void*, void*))(*(void***)self)[0xb])(self, q);
}
} } }
