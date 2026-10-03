// FUNCTION: BF2 0x473010
namespace dice { namespace hfe {
class GameLogic {
public:
    char _pad[0x2f8];
    int field;
    int getStartPreStoredNetID() const;
};
int GameLogic::getStartPreStoredNetID() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_GameLogic_getStartPreStoredNetID (0x473010)
