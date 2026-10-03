// FUNCTION: BF2 0x4731b0
namespace dice { namespace hfe {
class GameLogic {
public:
    char _pad[0x3c0];
    int field;
    int getFeslEnvironment() const;
};
int GameLogic::getFeslEnvironment() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_GameLogic_getFeslEnvironment (0x4731b0)
