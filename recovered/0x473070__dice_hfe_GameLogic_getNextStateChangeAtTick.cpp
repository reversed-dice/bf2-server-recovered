// FUNCTION: BF2 0x473070
namespace dice { namespace hfe {
class GameLogic {
public:
    char _pad[0x42c];
    int field;
    int getNextStateChangeAtTick() const;
};
int GameLogic::getNextStateChangeAtTick() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_GameLogic_getNextStateChangeAtTick (0x473070)
