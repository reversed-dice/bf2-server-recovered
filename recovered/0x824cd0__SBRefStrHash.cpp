// FUNCTION: BF2 0x824cd0
namespace dice { namespace hfe {
extern void* fn_83b5e0(int a, int b, int c, void* d, void* e, void* f);
extern void* g_10b1048;
void* f_0x824cd0() {
    if (!g_10b1048)
        g_10b1048 = fn_83b5e0(0x10, 0x1f4, 4, (void*)0x824ca0, (void*)0x824cb0, (void*)0x824cc0);
    return g_10b1048;
}
} }
