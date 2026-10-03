// FUNCTION: BF2 0x473020
namespace dice { namespace hfe {
class GameLogic {
public:
    char _pad[0x2fc];
    int field;
    int getEndPreStoredNetID() const;
};
int GameLogic::getEndPreStoredNetID() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_GameLogic_getEndPreStoredNetID (0x473020)
