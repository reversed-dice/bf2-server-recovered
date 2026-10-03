// FUNCTION: BF2 0x5f1e90
namespace dice { namespace hfe { namespace world {

class SoldierDeviationComp {
public:
    void setAIDeviation(float deviation);
};

void SoldierDeviationComp::setAIDeviation(float deviation) {
    // offset 0x70: m_aiDeviation
    *(float*)((unsigned long long)this + 0x70) = deviation;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_SoldierDeviationComp_setAIDeviation_float (0x5f1e90)