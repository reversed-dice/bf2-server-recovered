// FUNCTION: BF2 0x473090
namespace dice { namespace hfe {

class GameLogic {
public:
    unsigned char getNoVehiclesMode();
};

unsigned char GameLogic::getNoVehiclesMode() {
    return *(unsigned char*)((char*)this + 0x488);
}

} }
