// FUNCTION: BF2 0x73fbb0
namespace dice { namespace hfe {
struct TI2 {
    void* m_0;
    unsigned char _pad[0x8 - 0x8];
    char m_8;
    void ctor_0x73fbb0();
};
void TI2::ctor_0x73fbb0() {
    m_0 = 0;
    m_8 = (char)((m_8 | 1) & ~2);
}
} }
