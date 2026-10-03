// FUNCTION: BF2 0x6bd8b0
namespace dice { namespace hfe { namespace anim {
extern void fn_6bd760(void* a);
extern void fn_4085b8(void* a);
extern void* g_10936a0;
void shutdown_0x6bd8b0() {
    void* p = g_10936a0;
    if (p) {
        fn_6bd760(p);
        fn_4085b8(p);
    }
    g_10936a0 = 0;
}
} } }
