// FUNCTION: BF2 0x464da0
namespace dice { namespace hfe {
class GameServer {
public:
    char _pad[0x1e8];
    void* field;
    void* getAutoRecorder() const;
};
void* GameServer::getAutoRecorder() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_GameServer_getAutoRecorder (0x464da0)
