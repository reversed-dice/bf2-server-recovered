// FUNCTION: BF2 0x4a26a0
namespace dice { namespace hfe {
class Player {
public:
    char _pad[0x130];
    int field;
    int getSquadId() const;
};
int Player::getSquadId() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_Player_getSquadId (0x4a26a0)
