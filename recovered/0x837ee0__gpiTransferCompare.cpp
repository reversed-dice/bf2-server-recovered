// FUNCTION: BF2 0x837ee0
namespace dice { namespace hfe {
struct G {
    unsigned char _pad[0x1c];
    int m_1c;
    int gpiTransferCompare_0x837ee0(const G* b) const;
};
int G::gpiTransferCompare_0x837ee0(const G* b) const {
    return m_1c - b->m_1c;
}
} }
