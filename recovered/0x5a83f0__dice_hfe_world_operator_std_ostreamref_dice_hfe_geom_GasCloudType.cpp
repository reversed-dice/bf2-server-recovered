// FUNCTION: BF2 0x5a83f0
// BF2_FLAGS: -fcrossjumping
#include <iostream>

namespace dice { namespace hfe { namespace geom {
enum GasCloudType {
    GASCLOUD_NONE = 0,
    GASCLOUD_TEARGAS = 1
};
} } }

namespace dice { namespace hfe { namespace world {

std::ostream& operator<<(std::ostream& os, dice::hfe::geom::GasCloudType t)
{
    if (t == dice::hfe::geom::GASCLOUD_NONE)
        os << "None";
    else if (t == dice::hfe::geom::GASCLOUD_TEARGAS)
        os << "TearGas";
    else
        os << "None";
    return os;
}

} } }
