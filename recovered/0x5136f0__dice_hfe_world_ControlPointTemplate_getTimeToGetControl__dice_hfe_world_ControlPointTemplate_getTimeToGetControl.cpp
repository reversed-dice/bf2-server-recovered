// FUNCTION: BF2 0x5136f0
namespace dice { namespace hfe { namespace world {

class ControlPointTemplate {
public:
    float getTimeToGetControl() const;
};

float ControlPointTemplate::getTimeToGetControl() const {
    return *(const float*)((const char*)this + 0x21c);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_ControlPointTemplate_getTimeToGetControl (0x5136f0)