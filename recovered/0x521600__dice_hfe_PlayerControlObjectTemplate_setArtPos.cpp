// FUNCTION: BF2 0x521600
namespace dice { namespace hfe {
class PlayerControlObjectTemplate {
public:
    char _pad[0x314];
    bool field;
    void setArtPos(bool v);
};
void PlayerControlObjectTemplate::setArtPos(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_PlayerControlObjectTemplate_setArtPos (0x521600)
