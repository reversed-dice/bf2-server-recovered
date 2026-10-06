// BF2_FLAGS: -fcrossjumping
// FUNCTION: BF2 0x874d00
#include <istream>
#include <string>

namespace dice { namespace hfe {
enum KitType { KitType_0 };
} } 

namespace dice { namespace hfe {

std::istream& operator>>(std::istream& is, ::dice::hfe::KitType& v)
{
    std::string s;
    is >> s;
    if (s.compare("KTSpecops") == 0 || s.compare("Specops") == 0 || s.compare("0") == 0)
        v = ::dice::hfe::KitType(0);
    else if (s.compare("KTSniper") == 0 || s.compare("Sniper") == 0 || s.compare("1") == 0)
        v = ::dice::hfe::KitType(1);
    else if (s.compare("KTAssault") == 0 || s.compare("Assault") == 0 || s.compare("2") == 0)
        v = ::dice::hfe::KitType(2);
    else if (s.compare("KTSupport") == 0 || s.compare("Support") == 0 || s.compare("3") == 0)
        v = ::dice::hfe::KitType(3);
    else if (s.compare("KTEngineer") == 0 || s.compare("Engineer") == 0 || s.compare("4") == 0)
        v = ::dice::hfe::KitType(4);
    else if (s.compare("KTMedic") == 0 || s.compare("Medic") == 0 || s.compare("5") == 0)
        v = ::dice::hfe::KitType(5);
    else if (s.compare("KTAT") == 0 || s.compare("AT") == 0 || s.compare("6") == 0)
        v = ::dice::hfe::KitType(6);
    else if (s.compare("KTNoKit") == 0 || s.compare("NoKit") == 0 || s.compare("7") == 0)
        v = ::dice::hfe::KitType(13);
    else
        v = ::dice::hfe::KitType(13);
    return is;
}

} } 
