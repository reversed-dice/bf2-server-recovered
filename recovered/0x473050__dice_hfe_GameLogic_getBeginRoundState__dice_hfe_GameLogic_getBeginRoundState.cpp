// FUNCTION: BF2 0x473050
namespace dice { namespace hfe {

class GameLogic {
public:
    int getBeginRoundState();
};

int GameLogic::getBeginRoundState() {
    return *(int*)((char*)this + 0x428);
}

} }
