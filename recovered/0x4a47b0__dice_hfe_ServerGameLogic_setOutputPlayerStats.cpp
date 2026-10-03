// FUNCTION: BF2 0x4a47b0
namespace dice { namespace hfe {
class ServerGameLogic {
public:
    char _pad[0x55c];
    bool field;
    void setOutputPlayerStats(bool v);
};
void ServerGameLogic::setOutputPlayerStats(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_ServerGameLogic_setOutputPlayerStats (0x4a47b0)
