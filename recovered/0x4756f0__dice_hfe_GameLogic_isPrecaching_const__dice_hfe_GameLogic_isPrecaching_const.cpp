// FUNCTION: BF2 0x4756f0
namespace dice { namespace hfe {

class GameLogic {
public:
    unsigned char isPrecaching() const;
};

unsigned char GameLogic::isPrecaching() const {
    return *(unsigned char*)((char*)this + 0x3a0);
}

} }
