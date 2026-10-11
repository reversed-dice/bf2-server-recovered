// BF2_FLAGS: -fno-gcse
// FUNCTION: BF2 0x7e8470
#include <iostream>

namespace dice { namespace hfe { namespace io {

enum InputDeviceTypes {
    IDTUndefined = 0,
    IDTMouse = 1,
    IDTGameController = 2,
    IDTKeyboard = 3
};

std::ostream& operator<<(std::ostream& os, InputDeviceTypes type) {
    if (type == 1) {
        os << "IDTMouse";
        return os;
    }
    if (type > 1) {
        if (type == 2) {
            os << "IDTGameController";
            return os;
        }
        if (type == 3) {
            os << "IDTKeyboard";
            return os;
        }
    }
    os << "IDTUndefined";
    return os;
}

} } }
