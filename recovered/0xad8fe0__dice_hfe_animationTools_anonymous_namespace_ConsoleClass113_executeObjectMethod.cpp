// FUNCTION: BF2 0xad8fe0
namespace dice { namespace hfe { namespace animationTools {
extern void fn_6ba5c0(void* a, float b, float c);
extern void* g_10936a0;
struct CCC {
    unsigned char _pad[0x30];
    int m_30;
    unsigned char _pad2[0x38 - 0x34];
    float* m_38;
    unsigned char _pad3[0x40 - 0x40];
    float* m_40;
    unsigned char _pad4[0x108 - 0x48];
    char m_108;
    int f_0xad8fe0();
};
int CCC::f_0xad8fe0() {
    if (m_30 == 2) {
        float a = *m_38;
        float b = *m_40;
        m_108 = 0;
        fn_6ba5c0(g_10936a0, a, b);
    }
    return 0;
}
} } }
