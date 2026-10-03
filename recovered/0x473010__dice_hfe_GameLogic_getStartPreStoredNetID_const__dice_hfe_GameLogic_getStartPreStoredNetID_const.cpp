// FUNCTION: BF2 0x473010
namespace dice { namespace hfe {

class GameLogic {
public:
    int getStartPreStoredNetID() const;
};

int GameLogic::getStartPreStoredNetID() const {
    return *(int*)((char*)this + 0x2f8);
}

} }
