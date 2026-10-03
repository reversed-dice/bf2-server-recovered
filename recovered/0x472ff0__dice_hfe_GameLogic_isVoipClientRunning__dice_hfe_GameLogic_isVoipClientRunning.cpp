// FUNCTION: BF2 0x472ff0
namespace dice { namespace hfe {

class GameLogic {
public:
    unsigned char isVoipClientRunning();
};

unsigned char GameLogic::isVoipClientRunning() {
    return *(unsigned char*)((char*)this + 0x40c);
}

} }
