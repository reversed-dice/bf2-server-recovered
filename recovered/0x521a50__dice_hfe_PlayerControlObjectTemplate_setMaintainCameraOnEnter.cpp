// FUNCTION: BF2 0x521a50
namespace dice { namespace hfe {
class PlayerControlObjectTemplate {
public:
    char _pad[0x3cd];
    bool field;
    void setMaintainCameraOnEnter(bool v);
};
void PlayerControlObjectTemplate::setMaintainCameraOnEnter(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_PlayerControlObjectTemplate_setMaintainCameraOnEnter (0x521a50)
