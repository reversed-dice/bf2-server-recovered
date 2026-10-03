// FUNCTION: BF2 0x6b31a0
namespace dice { namespace hfe { namespace anim {
extern void* fn_6b4370(void* a);
void setActive_0x6b31a0(void* self, void* name) {
    void* it = fn_6b4370((char*)self + 0x18);
    if (it != (char*)self + 0x20)
        ((void (*)(void*, void*))(*(void***)self)[0x8])(self, *(void**)((char*)it + 0x28));
    else
        ((void (*)(void*, void*))(*(void***)self)[0x8])(self, 0);
}
} } }
