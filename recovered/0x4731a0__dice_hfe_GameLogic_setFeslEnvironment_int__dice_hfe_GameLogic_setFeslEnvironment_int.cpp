// FUNCTION: BF2 0x4731a0
namespace dice { namespace hfe {

class GameLogic {
public:
    void setFeslEnvironment(unsigned int);
};

void GameLogic::setFeslEnvironment(unsigned int value) {
    *(unsigned int*)((char*)this + 0x3c0) = value;
}

} }
