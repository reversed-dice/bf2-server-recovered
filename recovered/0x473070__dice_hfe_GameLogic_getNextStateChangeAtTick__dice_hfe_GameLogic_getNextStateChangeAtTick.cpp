// FUNCTION: BF2 0x473070
namespace dice { namespace hfe {

class GameLogic {
public:
    int getNextStateChangeAtTick();
};

int GameLogic::getNextStateChangeAtTick() {
    return *(int*)((char*)this + 0x42c);
}

} }
