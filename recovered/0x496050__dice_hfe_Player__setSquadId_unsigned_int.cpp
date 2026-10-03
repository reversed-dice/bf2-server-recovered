// FUNCTION: BF2 0x496050
namespace dice { namespace hfe {
class Player {
public:
    void setSquadId_unsigned_int(unsigned int squadId);
    void setSquadId_unsigned_short(unsigned short squadId);
};
void Player::setSquadId_unsigned_int(unsigned int squadId) {
    setSquadId_unsigned_short((unsigned short)squadId);
}
} }
// REVERSED_FUNCTION: dice::hfe::Player::setSquadId_unsigned_int (0x496050)