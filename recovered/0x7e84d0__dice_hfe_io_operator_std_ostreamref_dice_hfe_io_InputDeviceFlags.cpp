// FUNCTION: BF2 0x7e84d0
// BF2_FLAGS: -fcrossjumping
#include <ostream>

extern "C" std::ostream& op_7e84d0(std::ostream& os, unsigned int val) {
    switch (val) {
        case 0: os << "IDFNone"; break;
        case 1: os << "IDFMouse"; break;
        case 2: os << "IDFKeyboard"; break;
        case 4: os << "IDFGameController_0"; break;
        case 8: os << "IDFGameController_1"; break;
        case 0x10: os << "IDFGameController_2"; break;
        case 0x20: os << "IDFGameController_3"; break;
        case 0x40: os << "IDFGameController_4"; break;
        case 0x80: os << "IDFGameController_5"; break;
        case 0x100: os << "IDFGameController_6"; break;
        case 0x200: os << "IDFGameController_7"; break;
        case 0x400: os << "IDFFalcon"; break;
        case 0xffffffff: os << "IDFAll"; break;
        default: os << "IDFNone"; break;
    }
    return os;
}
// REVERSED_FUNCTION: dice_hfe_io_operator_std_ostreamref_dice_hfe_io_InputDeviceFlags (0x7e84d0)
