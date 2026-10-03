// FUNCTION: BF2 0x494820
namespace dice { namespace hfe {
class Player {
public:
    void setIsSquadLeader_bool(bool value);
    void setIsSquadLeader_int(unsigned int value);
};
void Player::setIsSquadLeader_bool(bool value) {
    setIsSquadLeader_int((unsigned int)value);
}
} }
// REVERSED_FUNCTION: dice::hfe::Player::setIsSquadLeader_bool (0x494820)