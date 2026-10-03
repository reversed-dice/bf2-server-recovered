// FUNCTION: BF2 0x513690
namespace dice { namespace hfe {
class ControlPointTemplate {
public:
    char _pad[0x227];
    bool field;
    void setLoseControlWhenNotClose(bool v);
};
void ControlPointTemplate::setLoseControlWhenNotClose(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_ControlPointTemplate_setLoseControlWhenNotClose (0x513690)
