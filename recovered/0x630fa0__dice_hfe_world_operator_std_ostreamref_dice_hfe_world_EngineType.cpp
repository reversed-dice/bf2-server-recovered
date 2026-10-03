// FUNCTION: BF2 0x630fa0
#include <ostream>

extern "C" std::ostream& op_630fa0(std::ostream& os, int val) {
    switch (val) {
        case 1: os << "c_ETPlane"; break;
        case 2: os << "c_ETCar"; break;
        case 6: os << "c_ETTank"; break;
        case 9: os << "c_ETShip"; break;
        case 0x11: os << "c_ETRocket"; break;
        case 0x19: os << "c_ETTorpedo"; break;
        case 0x21: os << "c_ETHelicopter"; break;
        case 0x42: os << "c_ETNewCar"; break;
        case 0x46: os << "c_ETNewTank"; break;
        case 0xc2: os << "c_ETNewCar2"; break;
    }
    return os;
}
// REVERSED_FUNCTION: dice_hfe_world_operator_std_ostreamref_dice_hfe_world_EngineType (0x630fa0)
