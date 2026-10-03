// FUNCTION: BF2 0x528e30
namespace dice { namespace hfe { namespace world {
struct KitPart {
    unsigned char _pad[0x1f2];
    short m_idx;
    int getBoneNameIndex_0x528e30() const;
};
int KitPart::getBoneNameIndex_0x528e30() const {
    return m_idx;
}
} } }
