// FUNCTION: BF2 0x513550
namespace dice { namespace hfe { namespace world {

class ControlPointTemplate {
public:
    float getRadius() const;
};

float ControlPointTemplate::getRadius() const {
    return *reinterpret_cast<const float*>(reinterpret_cast<const char*>(this) + 0x204);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_ControlPointTemplate_getRadius_const (0x513550)