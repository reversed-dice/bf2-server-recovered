// FUNCTION: BF2 0x475700
namespace dice { namespace hfe {

class GameLogic {
public:
    void setEnableVoHelp(unsigned char);
};

void GameLogic::setEnableVoHelp(unsigned char value) {
    *(unsigned char*)((char*)this + 0x3a1) = value;
}

} }
