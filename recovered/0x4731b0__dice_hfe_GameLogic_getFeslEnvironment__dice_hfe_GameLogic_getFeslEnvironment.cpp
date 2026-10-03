// FUNCTION: BF2 0x4731b0
namespace dice { namespace hfe {

class GameLogic {
public:
    int getFeslEnvironment();
};

int GameLogic::getFeslEnvironment() {
    return *(int*)((char*)this + 0x3c0);
}

} }
