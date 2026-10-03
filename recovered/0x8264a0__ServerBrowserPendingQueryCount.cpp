// FUNCTION: BF2 0x8264a0
namespace dice { namespace hfe {
struct SBPQ {
    unsigned char _pad[0x18];
    int m_18;
    unsigned char _pad2[0x30 - 0x1c];
    int m_30;
    int pending_0x8264a0();
};
int SBPQ::pending_0x8264a0() {
    return m_18 + m_30;
}
} }
