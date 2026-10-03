// FUNCTION: BF2 0x475730
namespace dice { namespace hfe {

class GameLogic {
public:
    unsigned char getAirMouseInverted();
};

unsigned char GameLogic::getAirMouseInverted() {
    return *(unsigned char*)((char*)this + 0x420);
}

} }
