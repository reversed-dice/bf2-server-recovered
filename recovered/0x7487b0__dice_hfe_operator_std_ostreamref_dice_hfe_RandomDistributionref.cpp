// FUNCTION: BF2 0x7487b0
// BF2_FLAGS: -fno-strict-aliasing
#include <ostream>
namespace dice { namespace hfe {

enum ContRandDist {};
std::ostream& operator<<(std::ostream& os, ContRandDist d);

struct RandomDistribution {
    ContRandDist type;
    float a;
    float b;
    bool clamp;
};

std::ostream& operator<<(std::ostream& os, RandomDistribution& d)
{
    os << d.type << '/' << d.a << '/' << d.b << '/' << d.clamp;
    return os;
}

} }
