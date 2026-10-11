// BF2_FLAGS: -fno-gcse
// FUNCTION: BF2 0x7c3a00
#include <iostream>

namespace dice { namespace hfe { namespace io {

enum PredictionMode {
    PMNone = 0,
    PMLinear = 1,
    PMCubic = 2,
    PMUsePhysics = 3
};

std::ostream& operator<<(std::ostream& os, PredictionMode mode) {
    if (mode == 1) {
        os << "PMLinear";
        return os;
    }
    if (mode > 1) {
        if (mode == 2) {
            os << "PMCubic";
            return os;
        }
        if (mode == 3) {
            os << "PMUsePhysics";
            return os;
        }
    }
    os << "PMNone";
    return os;
}

} } }
