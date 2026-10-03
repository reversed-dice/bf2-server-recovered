// FUNCTION: BF2 0x473040
namespace dice { namespace hfe {

class GameLogic {
public:
    int getGameStatus();
};

int GameLogic::getGameStatus() {
    return *(int*)((char*)this + 0xa8);
}

} }
