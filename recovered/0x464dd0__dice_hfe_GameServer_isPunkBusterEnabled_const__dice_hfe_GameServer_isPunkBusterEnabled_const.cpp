// FUNCTION: BF2 0x464dd0
namespace dice { namespace hfe {

class GameServer {
public:
    unsigned char isPunkBusterEnabled() const;
};

unsigned char GameServer::isPunkBusterEnabled() const {
    return *(unsigned char*)((char*)this + 0x31c);
}

} }
