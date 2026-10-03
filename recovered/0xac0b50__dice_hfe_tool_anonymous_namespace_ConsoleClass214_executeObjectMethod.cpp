// FUNCTION: BF2 0xac0b50
namespace dice { namespace hfe {
extern void fn_0x006a7840(void* a);
struct CCG {
    unsigned char _pad[0x30];
    int m_30;
    unsigned char _pad2[0x108 - 0x34];
    char m_108;
    int f_ac0b50();
};
int CCG::f_ac0b50() {
    if (__builtin_expect(m_30 == 0, 1)) {
        m_108 = 0;
        fn_0x006a7840((void*)0x1092d80);
    }
    return 0;
}
} }
