// FUNCTION: BF2 0x505f00
namespace dice { namespace hfe {
extern void fn_0x00574860(void* self);
extern void* g_0x0108dd50;
extern void fn_0x00505e60(void* g, void* self);
void f_505f00(void* self) {
    fn_0x00574860(self);

    void* g = *(void**)0x0108dd50;
    if (g)
        fn_0x00505e60(g, self);
}
} }
