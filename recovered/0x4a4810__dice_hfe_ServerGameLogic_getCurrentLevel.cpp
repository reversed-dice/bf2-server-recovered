// FUNCTION: BF2 0x4a4810
namespace dice { namespace hfe {
class ServerGameLogic {
public:
    char _pad[0x564];
    int field;
    int getCurrentLevel() const;
};
int ServerGameLogic::getCurrentLevel() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_ServerGameLogic_getCurrentLevel (0x4a4810)
