// FUNCTION: BF2 0x473020
namespace dice { namespace hfe {

class GameLogic {
public:
    int getEndPreStoredNetID() const;
};

int GameLogic::getEndPreStoredNetID() const {
    return *(int*)((char*)this + 0x2fc);
}

} }
