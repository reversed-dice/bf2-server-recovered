// FUNCTION: BF2 0xa5e000
namespace dice { namespace hfe {
extern void fn_0x0069de30(int a);
extern int g_00c7d090;
struct CCG {
    unsigned char _pad[0x30];
    int m_30;
    unsigned char _pad2[0x108 - 0x34];
    char m_108;
    int f_a5e000();
};
int CCG::f_a5e000() {
    if (__builtin_expect(m_30 == 0, 1)) {
        m_108 = 0;
        fn_0x0069de30(g_00c7d090);
    }
    return 0;
}
} }
