// FUNCTION: BF2 0x464cd0
namespace dice { namespace hfe {

class GameServer {
public:
    int getCurrentInputIndex();
};

int GameServer::getCurrentInputIndex() {
    return *(int*)((char*)this + 0x124);
}

} }
