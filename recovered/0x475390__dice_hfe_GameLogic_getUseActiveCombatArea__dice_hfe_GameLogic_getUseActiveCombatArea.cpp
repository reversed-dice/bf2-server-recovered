// FUNCTION: BF2 0x475390
namespace dice { namespace hfe {

class GameLogic {
public:
    unsigned char getUseActiveCombatArea();
};

unsigned char GameLogic::getUseActiveCombatArea() {
    return *(unsigned char*)((char*)this + 0x468);
}

} }
