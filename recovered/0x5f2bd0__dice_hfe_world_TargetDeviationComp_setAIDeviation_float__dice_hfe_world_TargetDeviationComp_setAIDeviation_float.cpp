// FUNCTION: BF2 0x5f2bd0
namespace dice { namespace hfe { namespace world {

class TargetDeviationComp {
    char gap0[0x58];
    float m_aiDeviation;
public:
    void setAIDeviation(float);
};

void TargetDeviationComp::setAIDeviation(float deviation) {
    m_aiDeviation = deviation;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_TargetDeviationComp_setAIDeviation_float (0x5f2bd0)