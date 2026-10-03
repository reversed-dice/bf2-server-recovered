// FUNCTION: BF2 0x473080
namespace dice { namespace hfe {

class GameLogic {
public:
    void setNextStateChangeAtTick(unsigned int);
};

void GameLogic::setNextStateChangeAtTick(unsigned int value) {
    *(unsigned int*)((char*)this + 0x42c) = value;
}

} }
