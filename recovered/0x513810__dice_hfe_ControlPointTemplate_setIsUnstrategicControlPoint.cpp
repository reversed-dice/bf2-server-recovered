// FUNCTION: BF2 0x513810
namespace dice { namespace hfe {
class ControlPointTemplate {
public:
    char _pad[0x230];
    bool field;
    void setIsUnstrategicControlPoint(bool v);
};
void ControlPointTemplate::setIsUnstrategicControlPoint(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_ControlPointTemplate_setIsUnstrategicControlPoint (0x513810)
