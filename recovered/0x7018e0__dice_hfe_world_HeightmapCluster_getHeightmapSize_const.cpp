// FUNCTION: BF2 0x7018e0
namespace dice { namespace hfe { namespace world {
struct HMC {
    unsigned char _pad[0x38];
    float m_size;
    int getHeightmapSize_0x7018e0() const;
};
int HMC::getHeightmapSize_0x7018e0() const {
    return (int)m_size;
}
} } }
