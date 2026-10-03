// FUNCTION: BF2 0x464d20
namespace dice { namespace hfe {

class GameServer {
public:
    unsigned char getInitComplete() const;
};

unsigned char GameServer::getInitComplete() const {
    return *(unsigned char*)((char*)this + 0x1f9);
}

} }
