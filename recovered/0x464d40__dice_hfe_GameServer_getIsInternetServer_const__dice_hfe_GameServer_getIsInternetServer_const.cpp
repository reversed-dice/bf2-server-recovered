// FUNCTION: BF2 0x464d40
namespace dice { namespace hfe {

class GameServer {
public:
    unsigned char getIsInternetServer() const;
};

unsigned char GameServer::getIsInternetServer() const {
    return *(unsigned char*)((char*)this + 0x1f8);
}

} }
