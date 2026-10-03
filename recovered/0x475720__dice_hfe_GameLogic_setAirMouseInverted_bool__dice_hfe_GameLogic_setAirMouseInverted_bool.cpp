// FUNCTION: BF2 0x475720
namespace dice { namespace hfe {

class GameLogic {
public:
    void setAirMouseInverted(unsigned char);
};

void GameLogic::setAirMouseInverted(unsigned char value) {
    *(unsigned char*)((char*)this + 0x420) = value;
}

} }
