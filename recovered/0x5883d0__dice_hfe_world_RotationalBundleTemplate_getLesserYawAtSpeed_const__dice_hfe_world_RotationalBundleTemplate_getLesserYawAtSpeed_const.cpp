// FUNCTION: BF2 0x5883d0
namespace dice { namespace hfe { namespace world {

class RotationalBundleTemplate {
public:
    float getLesserYawAtSpeed() const;
};

float RotationalBundleTemplate::getLesserYawAtSpeed() const {
    // offset 0x268: float m_lesserYawAtSpeed
    return *reinterpret_cast<const float*>(
        reinterpret_cast<const char*>(this) + 0x268
    );
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_RotationalBundleTemplate_getLesserYawAtSpeed_const (0x5883d0)