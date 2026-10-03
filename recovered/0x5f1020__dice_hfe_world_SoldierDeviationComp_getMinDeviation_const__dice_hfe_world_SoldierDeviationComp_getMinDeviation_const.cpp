// FUNCTION: BF2 0x5f1020
namespace dice { namespace hfe { namespace world {

class SoldierDeviationComp {
public:
    float getMinDeviation() const;

private:
    struct DeviationData {
        unsigned char _pad_0x00[0x1c];
        float m_deviationScale;
        unsigned char _pad_0x20[0x3c];
        float m_baseMinDeviation;
    };

    unsigned char _pad_this_0x00[0x78];
    DeviationData* m_deviationData;
};

float SoldierDeviationComp::getMinDeviation() const {
    return m_deviationData->m_baseMinDeviation * m_deviationData->m_deviationScale;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_SoldierDeviationComp_getMinDeviation_const (0x5f1020)
