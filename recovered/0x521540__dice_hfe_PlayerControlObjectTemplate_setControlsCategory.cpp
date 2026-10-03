// FUNCTION: BF2 0x521540
namespace dice { namespace hfe {
class PlayerControlObjectTemplate {
public:
    char _pad[0x308];
    int field;
    void setControlsCategory(int v);
};
void PlayerControlObjectTemplate::setControlsCategory(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_PlayerControlObjectTemplate_setControlsCategory (0x521540)
