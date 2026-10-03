// FUNCTION: BF2 0x521a10
namespace dice { namespace hfe {
class PlayerControlObjectTemplate {
public:
    char _pad[0x3cc];
    bool field;
    void setMaintainCameraOnExit(bool v);
};
void PlayerControlObjectTemplate::setMaintainCameraOnExit(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_PlayerControlObjectTemplate_setMaintainCameraOnExit (0x521a10)
