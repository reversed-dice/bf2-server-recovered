// FUNCTION: BF2 0x6d6f20
// BF2_FLAGS: -fcrossjumping
#include <ostream>

namespace dice { namespace hfe { namespace world {

enum PhysicsType
{
    PHYS_TYPE_NONE = 0,
    PHYS_TYPE_POINT = 1,
    PHYS_TYPE_PLATFORM = 2,
    PHYS_TYPE_MESH = 3,
    PHYS_TYPE_ROTATIONAL_POINT = 4
};

std::ostream& operator<<(std::ostream& os, PhysicsType v)
{
    switch (v) {
    case PHYS_TYPE_NONE:
        os << "None";
        break;
    case PHYS_TYPE_POINT:
        os << "Point";
        break;
    case PHYS_TYPE_PLATFORM:
        os << "Platform";
        break;
    case PHYS_TYPE_MESH:
        os << "Mesh";
        break;
    case PHYS_TYPE_ROTATIONAL_POINT:
        os << "RotationalPoint";
        break;
    default:
        os << "None";
        break;
    }
    return os;
}

} } }
