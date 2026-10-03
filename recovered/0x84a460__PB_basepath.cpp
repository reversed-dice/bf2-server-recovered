// FUNCTION: BF2 0x84a460
namespace dice { namespace hfe {
extern void fn_407fe8(void* buf, int size);
char g_buf_10b4040[0x200];
char* PB_basepath_0x84a460() {
    if (__builtin_expect(g_buf_10b4040[0] == 0, 1))
        fn_407fe8(g_buf_10b4040, 0x200);
    return g_buf_10b4040;
}
} }
