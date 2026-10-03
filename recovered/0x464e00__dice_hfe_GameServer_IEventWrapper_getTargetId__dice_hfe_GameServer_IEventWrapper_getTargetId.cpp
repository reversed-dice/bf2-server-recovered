// FUNCTION: BF2 0x464e00
namespace dice { namespace hfe {

class GameServer {
public:
    class IEventWrapper {
    public:
        unsigned int getTargetId();
    };
};

unsigned int GameServer::IEventWrapper::getTargetId() {
    return 0xffffffff;
}

} }
// REVERSED_FUNCTION: dice_hfe_GameServer_IEventWrapper_getTargetId (0x464e00)