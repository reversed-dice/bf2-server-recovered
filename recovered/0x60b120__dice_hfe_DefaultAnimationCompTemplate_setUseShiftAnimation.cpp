// FUNCTION: BF2 0x60b120
namespace dice { namespace hfe {
class DefaultAnimationCompTemplate {
public:
    char _pad[0x18];
    bool field;
    void setUseShiftAnimation(bool v);
};
void DefaultAnimationCompTemplate::setUseShiftAnimation(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_DefaultAnimationCompTemplate_setUseShiftAnimation (0x60b120)
