// FUNCTION: BF2 0x5f2110
namespace dice { namespace hfe { namespace world {

struct DeviationData {
    unsigned char gap0[0x18];
    float m_baseDeviation;        // offset 0x18
    float m_zoomDeviation;        // offset 0x1c
};

class TargetDeviationComp {
    unsigned char gap0[0x90];
    DeviationData* m_deviationData;  // offset 0x90
public:
    float getMaxDeviation() const;
};

float TargetDeviationComp::getMaxDeviation() const {
    return m_deviationData->m_baseDeviation + m_deviationData->m_zoomDeviation;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_TargetDeviationComp_getMaxDeviation_const (0x5f2110)
