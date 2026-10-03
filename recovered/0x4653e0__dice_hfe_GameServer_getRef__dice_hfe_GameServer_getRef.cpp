// FUNCTION: BF2 0x4653e0
namespace dice { namespace hfe {

class GameServer {
public:
    int getRef();
};

int GameServer::getRef() {
    return *(int*)((char*)this + 0x90);
}

} }
