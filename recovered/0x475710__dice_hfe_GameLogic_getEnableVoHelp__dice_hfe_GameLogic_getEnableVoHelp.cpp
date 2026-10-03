// FUNCTION: BF2 0x475710
namespace dice { namespace hfe {

class GameLogic {
public:
    unsigned char getEnableVoHelp();
};

unsigned char GameLogic::getEnableVoHelp() {
    return *(unsigned char*)((char*)this + 0x3a1);
}

} }
