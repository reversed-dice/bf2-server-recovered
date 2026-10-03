// FUNCTION: BF2 0x4a2980
namespace dice { namespace hfe {
class Player {
public:
    char _pad[0x44c];
    int field;
    int getTracePlayerId() const;
};
int Player::getTracePlayerId() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_Player_getTracePlayerId (0x4a2980)
