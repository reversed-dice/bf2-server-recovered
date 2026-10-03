// FUNCTION: BF2 0x4ae6a0
namespace dice { namespace hfe {
class ServerGameLogic {
public:
    char _pad[0x568];
    int field;
    void setNextLevel(int v);
};
void ServerGameLogic::setNextLevel(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_ServerGameLogic_setNextLevel (0x4ae6a0)
