// FUNCTION: BF2 0x4871a0
namespace dice { namespace hfe {
class GameLogic {
public:
    char _pad[0x10];
    int field;
    int getRef() const;
};
int GameLogic::getRef() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_GameLogic_getRef (0x4871a0)
