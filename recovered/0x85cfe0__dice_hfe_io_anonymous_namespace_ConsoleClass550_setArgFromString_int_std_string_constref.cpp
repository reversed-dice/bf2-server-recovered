// FUNCTION: BF2 0x85cfe0
// BF2_FLAGS: --param inline-unit-growth=0
#include <sstream>
#include <string>

namespace dice { namespace hfe { namespace io {
enum InputDeviceAxes { InputDeviceAxes_0 };
} } } 
namespace dice { namespace hfe { namespace io {
std::istream& operator>>(std::istream& is, ::dice::hfe::io::InputDeviceAxes& v);
} } } 

namespace dice { namespace hfe { namespace io {
enum InputDeviceFlags { InputDeviceFlags_0 };
} } } 
namespace dice { namespace hfe { namespace io {
std::istream& operator>>(std::istream& is, ::dice::hfe::io::InputDeviceFlags& v);
} } } 

namespace dice { namespace hfe { namespace io { namespace {

class ConsoleClass550 {
public:
    virtual ~ConsoleClass550();
    void setArgFromString(int index, const std::string& str);
    char _pad[0x30];
    int* m_arg1;
    int* m_arg2;
    ::dice::hfe::io::InputDeviceFlags* m_arg3;
    ::dice::hfe::io::InputDeviceAxes* m_arg4;
    bool* m_arg5;
};

void ConsoleClass550::setArgFromString(int index, const std::string& str)
{
    if (index == 1) {
        static int arg;
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
        static ::dice::hfe::io::InputDeviceFlags arg;
        std::istringstream ss(str);
        ss >> arg;
        m_arg3 = &arg;
    }
    if (index == 4) {
        static ::dice::hfe::io::InputDeviceAxes arg;
        std::istringstream ss(str);
        ss >> arg;
        m_arg4 = &arg;
    }
    if (index == 5) {
        static bool arg;
        std::istringstream ss(str);
        ss >> arg;
        m_arg5 = &arg;
    }
}

} } } }
