// FUNCTION: BF2 0xab4970
// BF2_FLAGS: --param inline-unit-growth=0 -fno-strict-aliasing
#include <sstream>
#include <string>

namespace dice {
namespace hfe {

class ConsoleObjectBaseImpl {};

namespace world {

struct ArgVec2 {
    float x;
    float y;
    ArgVec2() : x(0.0f), y(0.0f) {}
};

struct ArgVec3 {
    float x;
    float y;
    float z;
    ArgVec3() : x(0.0f), y(0.0f), z(0.0f) {}
};

class ConsoleClass263 : public ConsoleObjectBaseImpl {
public:
    void setArgFromString(int index, const std::string& str);

    char m_pad[0x38];
    void* m_arg1;
    void* m_arg2;
    void* m_arg3;
    void* m_arg4;
};

void ConsoleClass263::setArgFromString(int index, const std::string& str) {
    if (index == 1) {
        static ArgVec2 arg;
        std::istringstream ss(str);
        float f;
        char c;
        ss >> f >> c;
        arg.x = f;
        ss >> f;
        arg.y = f;
        m_arg1 = &arg;
    }
    if (index == 2) {
        static ArgVec2 arg;
        std::istringstream ss(str);
        float f;
        char c;
        ss >> f >> c;
        arg.x = f;
        ss >> f;
        arg.y = f;
        m_arg2 = &arg;
    }
    if (index == 3) {
        static int arg;
        std::istringstream ss(str);
        ss >> arg;
        m_arg3 = &arg;
    }
    if (index == 4) {
        static ArgVec3 arg;
        std::istringstream ss(str);
        float f;
        char c;
        ss >> f >> c;
        arg.x = f;
        ss >> f >> c;
        arg.y = f;
        ss >> f;
        arg.z = f;
        m_arg4 = &arg;
    }
}

} // namespace world
} // namespace hfe
} // namespace dice
