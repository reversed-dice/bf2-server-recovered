// FUNCTION: BF2 0x9936d0
// BF2_FLAGS: --param inline-unit-growth=0
#include <sstream>
#include <string>

namespace dice { namespace hfe {
class Vec3 {
public:
    Vec3() : x(0), y(0), z(0) {}
    float x, y, z;
};
std::istream& operator>>(std::istream& is, Vec3& v);
} }

namespace dice { namespace hfe { namespace world { namespace {

class ConsoleClass193 {
public:
    virtual ~ConsoleClass193();
    void setArgFromString(int index, const std::string& str);
    char _pad[0x30];
    ::dice::hfe::Vec3* m_arg1;
    int* m_arg2;
};

void ConsoleClass193::setArgFromString(int index, const std::string& str)
{
    if (index == 1) {
        static ::dice::hfe::Vec3 arg;
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
}

} } } }
