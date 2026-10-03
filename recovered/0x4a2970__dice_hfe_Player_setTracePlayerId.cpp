// FUNCTION: BF2 0x4a2970
namespace dice { namespace hfe {
class Player {
public:
    char _pad[0x44c];
    int field;
    void setTracePlayerId(int v);
};
void Player::setTracePlayerId(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_Player_setTracePlayerId (0x4a2970)
