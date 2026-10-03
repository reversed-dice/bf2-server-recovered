// FUNCTION: BF2 0x513ad0
namespace dice { namespace hfe {
class ControlPointTemplate {
public:
    char _pad[0x231];
    bool field;
    void setIsHemisphere(bool v);
};
void ControlPointTemplate::setIsHemisphere(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_ControlPointTemplate_setIsHemisphere (0x513ad0)
