// FUNCTION: BF2 0x6d3c20
// maya::operator<<(std::ostream&, maya::AwPoint const&)
#include <ostream>

namespace maya {

class AwPoint {
public:
    double x;
    double y;
    double z;
    double w;
};

std::ostream& operator<<(std::ostream& os, AwPoint const& p);

std::ostream& operator<<(std::ostream& os, AwPoint const& p)
{
    std::ostream& out = os;
    out << "[" << p.x << ", " << p.y << ", " << p.z << ", " << p.w << "]";
    return out;
}

}
