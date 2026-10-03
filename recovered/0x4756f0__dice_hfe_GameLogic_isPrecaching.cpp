// FUNCTION: BF2 0x4756f0
namespace dice { namespace hfe {
class GameLogic {
public:
    char _pad[0x3a0];
    bool field;
    int isPrecaching() const;
};
int GameLogic::isPrecaching() const { return (int)field; }
} }
// REVERSED_FUNCTION: dice_hfe_GameLogic_isPrecaching (0x4756f0)
