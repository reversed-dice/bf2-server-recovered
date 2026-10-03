// FUNCTION: BF2 0x5607b0
namespace dice { namespace hfe {
extern void fn_0x00574860(void* self);
extern void* g_0x0108f1b0;
extern void fn_0x00567850(void* g, void* self);
void f_505f00(void* self) {
    fn_0x00574860(self);

    void* g = *(void**)0x0108f1b0;
    if (g)
        fn_0x00567850(g, self);
}
} }
