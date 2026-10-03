// FUNCTION: BF2 0x4730a0
namespace dice { namespace hfe {

class GameLogic {
public:
    void setNoVehiclesMode(unsigned char);
};

void GameLogic::setNoVehiclesMode(unsigned char value) {
    *(unsigned char*)((char*)this + 0x488) = value;
}

} }
