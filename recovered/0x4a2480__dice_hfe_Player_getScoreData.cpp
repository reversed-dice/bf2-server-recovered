// FUNCTION: BF2 0x4a2480
namespace dice { namespace hfe {
class Player {
public:
    char _pad[0x128];
    void* field;
    void* getScoreData() const;
};
void* Player::getScoreData() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_Player_getScoreData (0x4a2480)
