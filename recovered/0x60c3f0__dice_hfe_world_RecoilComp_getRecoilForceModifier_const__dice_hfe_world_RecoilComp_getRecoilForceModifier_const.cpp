// FUNCTION: BF2 0x60c3f0
extern const float s_recoilForceModifier_00b2f3bc;

namespace dice { namespace hfe { namespace world {

class RecoilComp {
public:
    float getRecoilForceModifier() const;
};

float RecoilComp::getRecoilForceModifier() const {
    return s_recoilForceModifier_00b2f3bc;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_RecoilComp_getRecoilForceModifier_const (0x60c3f0)