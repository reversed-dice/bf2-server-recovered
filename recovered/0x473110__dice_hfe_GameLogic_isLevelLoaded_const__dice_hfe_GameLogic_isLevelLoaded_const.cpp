// FUNCTION: BF2 0x473110
namespace dice { namespace hfe {

class GameLogic {
public:
    unsigned char isLevelLoaded() const;
};

unsigned char GameLogic::isLevelLoaded() const {
    return *(unsigned char*)((char*)this + 0xac);
}

} }
