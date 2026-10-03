// FUNCTION: BF2 0x453d10
namespace dice { namespace hfe {

class GameServer {
public:
    int getNumOvershotFrames() const;
};

int GameServer::getNumOvershotFrames() const {
    return *(int*)((char*)this + 0x1f4);
}

} }
