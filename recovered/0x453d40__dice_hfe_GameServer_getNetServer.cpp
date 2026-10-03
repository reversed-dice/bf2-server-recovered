// FUNCTION: BF2 0x453d40
namespace dice { namespace hfe {
class GameServer {
public:
    char _pad[0xb0];
    void* field;
    void* getNetServer() const;
};
void* GameServer::getNetServer() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_GameServer_getNetServer (0x453d40)
