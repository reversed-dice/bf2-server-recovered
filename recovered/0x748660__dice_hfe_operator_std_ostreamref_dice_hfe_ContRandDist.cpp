// BF2_FLAGS: -fno-gcse
// FUNCTION: BF2 0x748660
#include <iostream>

namespace dice { namespace hfe {

enum ContRandDist {
    CRD_NONE = 0,
    CRD_UNIFORM = 1,
    CRD_EXPONENTIAL = 2,
    CRD_NORMAL = 3
};

std::ostream& operator<<(std::ostream& os, ContRandDist dist) {
    if (dist == 1) {
        os << "CRD_UNIFORM";
        return os;
    }
    if (dist > 1) {
        if (dist == 2) {
            os << "CRD_EXPONENTIAL";
            return os;
        }
        if (dist == 3) {
            os << "CRD_NORMAL";
            return os;
        }
    }
    os << "CRD_NONE";
    return os;
}

} }
