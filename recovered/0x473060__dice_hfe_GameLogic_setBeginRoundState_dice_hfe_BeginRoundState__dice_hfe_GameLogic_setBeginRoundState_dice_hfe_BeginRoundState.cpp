// FUNCTION: BF2 0x473060
namespace dice { namespace hfe {

class GameLogic {
public:
    void setBeginRoundState(unsigned int);
};

void GameLogic::setBeginRoundState(unsigned int value) {
    *(unsigned int*)((char*)this + 0x428) = value;
}

} }
