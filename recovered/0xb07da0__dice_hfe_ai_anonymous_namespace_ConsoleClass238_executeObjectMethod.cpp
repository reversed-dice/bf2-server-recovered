// FUNCTION: BF2 0xb07da0
namespace dice { namespace hfe { namespace ai {
extern void fn_afedd0();
struct CC2 {
    unsigned char _pad[0x30];
    int m_30;
    unsigned char _pad2[0x108 - 0x34];
    char m_108;
    int f_0xb07da0();
};
int CC2::f_0xb07da0() {
    if (m_30 == 1) {
        m_108 = 0;
        fn_afedd0();
    }
    return 0;
}
} } }
