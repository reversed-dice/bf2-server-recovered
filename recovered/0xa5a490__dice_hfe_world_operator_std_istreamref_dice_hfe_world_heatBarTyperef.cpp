// BF2_FLAGS: -fcrossjumping
// FUNCTION: BF2 0xa5a490
#include <istream>
#include <string>

namespace dice { namespace hfe {
int compareIgnoreCase(const char* a, const char* b);
namespace world {
enum heatBarType { heatBarType_0 };

std::istream& operator>>(std::istream& is, heatBarType& v)
{
    std::string s;
    is >> s;
    if (compareIgnoreCase(s.c_str(), "R") || s == "0" || s == "4")
        v = heatBarType(4);
    else if (compareIgnoreCase(s.c_str(), "G") || s == "1" || s == "5")
        v = heatBarType(5);
    else if (compareIgnoreCase(s.c_str(), "B") || s == "2" || s == "6")
        v = heatBarType(6);
    else
        v = heatBarType(4);
    return is;
}

} } }
