// FUNCTION: BF2 0x464dc0
namespace dice { namespace hfe {

class GameServer {
public:
    unsigned char useContentChecking();
};

unsigned char GameServer::useContentChecking() {
    return *(unsigned char*)((char*)this + 0x300);
}

} }
