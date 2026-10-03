// FUNCTION: BF2 0x513590
namespace dice { namespace hfe {
class ControlPointTemplate {
public:
    char _pad[0x218];
    int field;
    void setControlPointId(int v);
};
void ControlPointTemplate::setControlPointId(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_ControlPointTemplate_setControlPointId (0x513590)
