// FUNCTION: BF2 0x881700
// BF2_FLAGS: --param inline-unit-growth=25 -fno-strict-aliasing
#include <sstream>
#include <string>

namespace dice { namespace hfe {
class Vec3 {
public:
    Vec3() : x(0), y(0), z(0) {}
    float x, y, z;
};
inline std::istream& operator>>(std::istream& is, Vec3& v)
{
    float f;
    char c;
    is >> f >> c;
    v.x = f;
    is >> f >> c;
    v.y = f;
    is >> f;
    v.z = f;
    return is;
}
} }

namespace dice { namespace hfe { namespace {

class ConsoleClass199 {
public:
    virtual ~ConsoleClass199();
    void setArgFromString(int index, const std::string& str);
    char _pad[0x30];
    ::dice::hfe::Vec3* m_arg1;
    ::dice::hfe::Vec3* m_arg2;
};

void ConsoleClass199::setArgFromString(int index, const std::string& str)
{
    if (index == 1) {
        static ::dice::hfe::Vec3 arg;
        std::istringstream ss(str);
        ss >> arg;
        m_arg1 = &arg;
    }
    if (index == 2) {
        static ::dice::hfe::Vec3 arg;
        std::istringstream ss(str);
        ss >> arg;
        m_arg2 = &arg;
    }
}

} } }
