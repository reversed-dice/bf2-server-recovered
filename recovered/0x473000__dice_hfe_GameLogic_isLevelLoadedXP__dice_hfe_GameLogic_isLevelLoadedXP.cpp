// FUNCTION: BF2 0x473000
namespace dice { namespace hfe {

class GameLogic {
public:
    unsigned char isLevelLoadedXP();
};

unsigned char GameLogic::isLevelLoadedXP() {
    return *(unsigned char*)((char*)this + 0xad);
}

} }
