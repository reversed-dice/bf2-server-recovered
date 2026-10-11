// FUNCTION: BF2 0xac4e40
// BF2_FLAGS: --param inline-unit-growth=0 -fno-strict-aliasing
#include <sstream>
#include <string>

namespace dice {
namespace hfe {

class ConsoleObjectBaseImpl {};

namespace world {

class IObjectTemplate_ptrproxy {
public:
    void* m_p;
    IObjectTemplate_ptrproxy() : m_p(0) {}
};

std::istream& operator>>(std::istream& is, IObjectTemplate_ptrproxy& v);

struct ArgVec3 {
    float x;
    float y;
    float z;
    ArgVec3() : x(0.0f), y(0.0f), z(0.0f) {}
};

} // namespace world

namespace tool {

class ConsoleClass125 : public ConsoleObjectBaseImpl {
public:
    void setArgFromString(int index, const std::string& str);

    char m_pad[0x38];
    void* m_arg1;
    void* m_arg2;
    void* m_arg3;
};

void ConsoleClass125::setArgFromString(int index, const std::string& str) {
    if (index == 1) {
        static world::IObjectTemplate_ptrproxy arg;
        std::istringstream ss(str);
        ss >> arg;
        m_arg1 = &arg;
    }
    if (index == 2) {
        static world::ArgVec3 arg;
        std::istringstream ss(str);
        float f;
        char c;
        ss >> f >> c;
        arg.x = f;
        ss >> f >> c;
        arg.y = f;
        ss >> f;
        arg.z = f;
        m_arg2 = &arg;
    }
    if (index == 3) {
        static world::ArgVec3 arg;
        std::istringstream ss(str);
        float f;
        char c;
        ss >> f >> c;
        arg.x = f;
        ss >> f >> c;
        arg.y = f;
        ss >> f;
        arg.z = f;
        m_arg3 = &arg;
    }
}

} // namespace tool
} // namespace hfe
} // namespace dice
