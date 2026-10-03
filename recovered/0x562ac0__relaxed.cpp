// FUNCTION: BF2 0x562ac0
namespace dice { namespace hfe {
extern void fn_0x00574860(void* self);
extern void* g_0x0108f1a0;
extern void fn_0x00562a10(void* g, void* self);
void f_562690(void* self) {
    fn_0x00574860(self);
    *(char*)((char*)self + 0xf0) = 0x1;
    void* g = *(void**)0x0108f1a0;
    if (g)
        fn_0x00562a10(g, self);
}
} }
