// FUNCTION: BF2 0x4730d0
namespace dice { namespace hfe {

class GameLogic {
public:
    int getDropVehicleDeviationMinRadius();
};

int GameLogic::getDropVehicleDeviationMinRadius() {
    return *(int*)((char*)this + 0x354);
}

} }
