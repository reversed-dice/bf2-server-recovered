// FUNCTION: BF2 0x4730c0
namespace dice { namespace hfe {

class GameLogic {
public:
    int getDropVehicleDeviationRadius();
};

int GameLogic::getDropVehicleDeviationRadius() {
    return *(int*)((char*)this + 0x350);
}

} }
