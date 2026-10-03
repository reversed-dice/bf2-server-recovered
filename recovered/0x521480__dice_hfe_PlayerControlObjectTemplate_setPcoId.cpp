// FUNCTION: BF2 0x521480
namespace dice { namespace hfe {
class PlayerControlObjectTemplate {
public:
    char _pad[0x2e4];
    int field;
    void setPcoId(int v);
};
void PlayerControlObjectTemplate::setPcoId(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_PlayerControlObjectTemplate_setPcoId (0x521480)
