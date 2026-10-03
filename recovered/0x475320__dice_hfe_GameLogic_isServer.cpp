// FUNCTION: BF2 0x475320
namespace dice { namespace hfe {
class GameLogic {
public:
    char _pad[0xae];
    bool field;
    int isServer() const;
};
int GameLogic::isServer() const { return (int)field; }
} }
// REVERSED_FUNCTION: dice_hfe_GameLogic_isServer (0x475320)
