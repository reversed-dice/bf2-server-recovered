// FUNCTION: BF2 0x453d00
namespace dice { namespace hfe {

class GameServer {
public:
    int getNumDroppedFrames() const;
};

int GameServer::getNumDroppedFrames() const {
    return *(int*)((char*)this + 0x1f0);
}

} }
