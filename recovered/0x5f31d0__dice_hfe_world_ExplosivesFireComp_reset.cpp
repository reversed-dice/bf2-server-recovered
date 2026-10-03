// FUNCTION: BF2 0x5f31d0
namespace dice { namespace hfe { namespace world {
extern void fn_5f51c0(void* self, int a);
struct EFC {
    unsigned char _pad[0x16c];
    char m_16c;
    unsigned char _pad2[0x174 - 0x16d];
    int m_174;
    unsigned char _pad3[0x1b8 - 0x178];
    char m_1b8;
    unsigned char _pad4[0x1c0 - 0x1b9];
    char m_1c0;
    unsigned char _pad5[0x1d0 - 0x1c1];
    char m_1d0;
    void reset_0x5f31d0();
};
void EFC::reset_0x5f31d0() {
    fn_5f51c0(this, 0);
    m_1b8 = 0;
    m_174 = 0;
    m_1c0 = 0;
    m_16c = 0;
    m_1d0 = 0;
}
} } }
