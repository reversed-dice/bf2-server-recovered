// FUNCTION: BF2 0x5215c0
namespace dice { namespace hfe {
class PlayerControlObjectTemplate {
public:
    char _pad[0x310];
    int field;
    void setToolTipType(int v);
};
void PlayerControlObjectTemplate::setToolTipType(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_PlayerControlObjectTemplate_setToolTipType (0x5215c0)
