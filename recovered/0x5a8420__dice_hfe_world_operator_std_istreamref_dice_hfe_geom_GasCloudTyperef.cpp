// FUNCTION: BF2 0x5a8420
// BF2_FLAGS: -fcrossjumping
#include <cstdio>
#include <istream>
#include <sstream>
#include <string>

namespace dice { namespace hfe { namespace geom {
enum GasCloudType { GASCLOUD_NONE = 0, GASCLOUD_TEARGAS = 1 };
} } }

namespace dice { namespace hfe { namespace world {
std::ostream& operator<<(std::ostream& os, dice::hfe::geom::GasCloudType t);

std::istream& operator>>(std::istream& is, dice::hfe::geom::GasCloudType& v)
{
    std::string s;
    is >> s;
    std::ostringstream ss;
    if (s.length() < 4) {
        int i = -1;
        if (sscanf(s.c_str(), "%d", &i) == 1)
            operator<<(ss, (dice::hfe::geom::GasCloudType)i);
    }
    if (s.compare("None") == 0) {
        v = dice::hfe::geom::GASCLOUD_NONE;
    } else if (ss.str().compare("None") == 0) {
        v = dice::hfe::geom::GASCLOUD_NONE;
    } else if (s.compare("TearGas") == 0) {
        v = dice::hfe::geom::GASCLOUD_TEARGAS;
    } else if (ss.str().compare("TearGas") == 0) {
        v = dice::hfe::geom::GASCLOUD_TEARGAS;
    }
    return is;
}

} } }
