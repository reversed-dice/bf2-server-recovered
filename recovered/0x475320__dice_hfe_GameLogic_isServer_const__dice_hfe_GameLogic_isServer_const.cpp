// FUNCTION: BF2 0x475320
namespace dice { namespace hfe {

class GameLogic {
public:
    unsigned char isServer() const;
};

unsigned char GameLogic::isServer() const {
    return *(unsigned char*)((char*)this + 0xae);
}

} }
