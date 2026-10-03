// FUNCTION: BF2 0x528a90
namespace dice { namespace hfe { namespace world {

struct KitPartRankInfo {
    unsigned char pad_0x000[0x22c];
    unsigned int m_rank;
};

class KitPart {
public:
    unsigned int getRank() const;
private:
    unsigned char pad_0x000[0x248];
    KitPartRankInfo* m_rankInfo;
};

unsigned int KitPart::getRank() const {
    return m_rankInfo->m_rank;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_KitPart_getRank_const (0x528a90)