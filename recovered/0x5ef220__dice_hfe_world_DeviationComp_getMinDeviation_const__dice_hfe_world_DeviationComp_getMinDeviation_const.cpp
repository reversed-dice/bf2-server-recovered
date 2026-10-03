// FUNCTION: BF2 0x5ef220
namespace dice { namespace hfe { namespace world {

struct DeviationInfo {
    char __pad_00[0x1c];
    float m_minDeviation;
};

class DeviationComp {
public:
    float getMinDeviation() const;

private:
    char __pad_00[0x40];
    DeviationInfo* m_deviationInfo;
};

float DeviationComp::getMinDeviation() const {
    return m_deviationInfo->m_minDeviation;
}

} } } // namespace dice::hfe::world
// REVERSED_FUNCTION: dice_hfe_world_DeviationComp_getMinDeviation_const (0x5ef220)