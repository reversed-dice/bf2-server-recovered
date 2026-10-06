// FUNCTION: BF2 0x90c7b0
// BF2_FLAGS: --param inline-unit-growth=0 -fno-strict-aliasing
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

namespace dice { namespace hfe { namespace world { namespace {

class ConsoleClass273 {
public:
    virtual ~ConsoleClass273();
    void setArgFromString(int index, const std::string& str);
    char _pad[0x30];
    std::string* m_arg1;
    int* m_arg2;
    ::dice::hfe::Vec3* m_arg3;
    float* m_arg4;
    float* m_arg5;
};

void ConsoleClass273::setArgFromString(int index, const std::string& str)
{
    if (index == 1) {
        static std::string arg;
        std::istringstream ss(str);
        ss >> arg;
        m_arg1 = &arg;
    }
    if (index == 2) {
        static int arg;
        std::istringstream ss(str);
        ss >> arg;
        m_arg2 = &arg;
    }
    if (index == 3) {
        static ::dice::hfe::Vec3 arg;
        std::istringstream ss(str);
        ss >> arg;
        m_arg3 = &arg;
    }
    if (index == 4) {
        static float arg;
        std::istringstream ss(str);
        ss >> arg;
        m_arg4 = &arg;
    }
    if (index == 5) {
        static float arg;
        std::istringstream ss(str);
        ss >> arg;
        m_arg5 = &arg;
    }
}

} } } }
