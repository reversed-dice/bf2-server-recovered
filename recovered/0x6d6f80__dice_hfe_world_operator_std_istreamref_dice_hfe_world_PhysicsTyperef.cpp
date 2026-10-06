// FUNCTION: BF2 0x6d6f80
#include <cstdio>
#include <sstream>
#include <string>

namespace dice { namespace hfe { namespace world {
enum PhysicsType { PhysicsType_0 };
std::ostream& operator<<(std::ostream& os, PhysicsType v);
} } } 

namespace dice { namespace hfe { namespace world {

std::istream& operator>>(std::istream& is, ::dice::hfe::world::PhysicsType& v)
{
    std::string s;
    is >> s;
    std::ostringstream ss;
    if (s.length() < 4) {
        int i = -1;
        if (sscanf(s.c_str(), "%d", &i) == 1)
            ss << (::dice::hfe::world::PhysicsType)i;
    }
    if (s.compare("None") == 0 || ss.str().compare("None") == 0)
        v = ::dice::hfe::world::PhysicsType(0);
    else if (s.compare("Point") == 0 || ss.str().compare("Point") == 0)
        v = ::dice::hfe::world::PhysicsType(1);
    else if (s.compare("RotationalPoint") == 0 || ss.str().compare("RotationalPoint") == 0)
        v = ::dice::hfe::world::PhysicsType(2);
    else if (s.compare("Mesh") == 0 || ss.str().compare("Mesh") == 0)
        v = ::dice::hfe::world::PhysicsType(3);
    else if (s.compare("Platform") == 0 || ss.str().compare("Platform") == 0)
        v = ::dice::hfe::world::PhysicsType(4);
    return is;
}

} } } 
