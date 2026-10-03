// FUNCTION: BF2 0x8a9800
namespace dice { namespace hfe {
extern void fn_4ba960(void* a);
extern void* g_10c42c0;
struct CC37 {
    unsigned char _pad[0x30];
    int m_30;
    unsigned char _pad2[0x108 - 0x34];
    char m_108;
    int f_0x8a9800();
};
int CC37::f_0x8a9800() {
    if (__builtin_expect(m_30 == 0, 1)) {
        m_108 = 0;
        fn_4ba960(g_10c42c0);
    }
    return 0;
}
} }
