// FUNCTION: BF2 0x513910
namespace dice { namespace hfe {
class ControlPointTemplate {
public:
    char _pad[0x244];
    bool field;
    void setShowOnMinimap(bool v);
};
void ControlPointTemplate::setShowOnMinimap(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_ControlPointTemplate_setShowOnMinimap (0x513910)
