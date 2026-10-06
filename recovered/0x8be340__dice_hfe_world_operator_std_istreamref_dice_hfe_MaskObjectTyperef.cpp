// BF2_FLAGS: -fcrossjumping
// FUNCTION: BF2 0x8be340
#include <istream>
#include <string>

namespace dice { namespace hfe {
enum MaskObjectType { MaskObjectType_0 };
} } 

namespace dice { namespace hfe { namespace world {

std::istream& operator>>(std::istream& is, ::dice::hfe::MaskObjectType& v)
{
    std::string s;
    is >> s;
    if (s.compare("MOTNightVisionGoggles") == 0 || s.compare("NightVisionGoggles") == 0 || s.compare("0") == 0)
        v = ::dice::hfe::MaskObjectType(0);
    else if (s.compare("MOTGasMask") == 0 || s.compare("GasMask") == 0 || s.compare("1") == 0)
        v = ::dice::hfe::MaskObjectType(1);
    else if (s.compare("MOTNoMask") == 0 || s.compare("NoMask") == 0 || s.compare("2") == 0)
        v = ::dice::hfe::MaskObjectType(2);
    else
        v = ::dice::hfe::MaskObjectType(2);
    return is;
}

} } } 
