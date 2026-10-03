// FUNCTION: BF2 0x475380
namespace dice { namespace hfe {

class GameLogic {
public:
    void setUseActiveCombatArea(unsigned char);
};

void GameLogic::setUseActiveCombatArea(unsigned char value) {
    *(unsigned char*)((char*)this + 0x468) = value;
}

} }
