// FUNCTION: BF2 0x63c4c0
namespace dice { namespace hfe { namespace world {
extern void fn_586dc0(void* a);
extern void* fn_69a1e0(void* a);
void init_0x63c4c0(void* self) {
    fn_586dc0(self);
    void* it = fn_69a1e0(self);
    if (!it)
        return;
    do {
        void* p = ((void* (*)(void*, int))(*(void***)it)[0x3])(it, *(int*)0x00c7ce6c);
        if (p) {
            *(char*)((char*)self + 0x296) = 1;
            ((void (*)(void*, int, int))(*(void***)self)[0x18])(self, 0, 0x800);
            return;
        }
        it = *(void**)((char*)it + 0x50);
    } while (it);
}
} } }
