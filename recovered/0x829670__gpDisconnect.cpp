// FUNCTION: BF2 0x829670
namespace dice { namespace hfe {
extern void fn_82f8c0(void* a, int b);
extern void fn_82c8e0(void* a);
void gpDisconnect_0x829670(void* self) {
    if (!self)
        return;
    void* p = *(void**)self;
    if (!p)
        return;
    if (*(int*)((char*)p + 0x108))
        return;
    fn_82f8c0(self, 1);
    fn_82c8e0(self);
}
} }
