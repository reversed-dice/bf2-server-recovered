// BF2_FLAGS: -fcrossjumping
// FUNCTION: BF2 0x79b7a0
#include <istream>
#include <string>

namespace dice { namespace hfe {
int compareIgnoreCase(const std::string& a, const std::string& b);
namespace ai {
enum CombatStrengthType { CombatStrengthType_0 };

std::istream& operator>>(std::istream& is, CombatStrengthType& v)
{
    std::string s;
    is >> s;
    if (s == "0" || s == "CSTInfantry" || s == "CSTInfantery" || compareIgnoreCase(s, "Infantry") == 0 || compareIgnoreCase(s, "Infantery") == 0)
        v = CombatStrengthType(0);
    else if (s == "1" || s == "CSTLightArmour" || compareIgnoreCase(s, "LightArmour") == 0)
        v = CombatStrengthType(1);
    else if (s == "2" || s == "CSTHeavyArmour" || compareIgnoreCase(s, "HeavyArmour") == 0)
        v = CombatStrengthType(2);
    else if (s == "3" || s == "CSTNavalArmour" || compareIgnoreCase(s, "NavalArmour") == 0)
        v = CombatStrengthType(3);
    else if (s == "4" || s == "CSTHelicopter" || compareIgnoreCase(s, "Helicopter") == 0)
        v = CombatStrengthType(4);
    else if (s == "5" || s == "CSTAirPlane" || compareIgnoreCase(s, "AirPlane") == 0)
        v = CombatStrengthType(5);
    else if (s == "CSTNumberOfTypes" || s == "All")
        v = CombatStrengthType(6);
    else
        v = CombatStrengthType(6);
    return is;
}

} } }
