// FUNCTION: BF2 0x7d0720
namespace dice { namespace hfe { namespace io {
struct NS {
    unsigned char _pad[0x49c];
    int m_max;
    void setMaxConnections_0x7d0720(unsigned int x);
};
void NS::setMaxConnections_0x7d0720(unsigned int x) {
    if (x <= 0x100)
        m_max = x;
}
} } }
