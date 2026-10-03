// FUNCTION: BF2 0x6b20e0
namespace dice { namespace hfe { namespace anim {
extern void* fn_6d0220(void* a, void* b, int c);
extern void fn_6b1ff0(void* a);
void setActiveTrigger_0x6b20e0(void* self, void* name, bool a) {
    if (*(char*)((char*)self + 0x72))
        return;
    void* p = *(void**)((char*)self + 0x50);
    void* q = fn_6d0220(*(void**)((char*)p + 8), name, 0);
    if (!q)
        return;
    fn_6b1ff0(self);
    *(void**)((char*)self + 0x60) = q;
    *(char*)((char*)self + 0x72) = a;
}
} } }
