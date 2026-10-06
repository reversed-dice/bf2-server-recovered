// FUNCTION: BF2 0x85c1d0
// BF2_FLAGS: --param inline-unit-growth=0
#include <sstream>
#include <string>

namespace dice { namespace hfe { namespace io {
enum InputDeviceButtons { InputDeviceButtons_0 };
} } } 
namespace dice { namespace hfe { namespace io {
std::istream& operator>>(std::istream& is, ::dice::hfe::io::InputDeviceButtons& v);
} } } 

namespace dice { namespace hfe { namespace io {
enum InputDeviceFlags { InputDeviceFlags_0 };
} } } 
namespace dice { namespace hfe { namespace io {
std::istream& operator>>(std::istream& is, ::dice::hfe::io::InputDeviceFlags& v);
} } } 

namespace dice { namespace hfe { namespace io {
enum InputDeviceKeys { InputDeviceKeys_0 };
} } } 
namespace dice { namespace hfe { namespace io {
std::istream& operator>>(std::istream& is, ::dice::hfe::io::InputDeviceKeys& v);
} } } 

namespace dice { namespace hfe { namespace io { namespace {

class ConsoleClass536 {
public:
    virtual ~ConsoleClass536();
    void setArgFromString(int index, const std::string& str);
    char _pad[0x30];
    int* m_arg1;
    ::dice::hfe::io::InputDeviceFlags* m_arg2;
    ::dice::hfe::io::InputDeviceButtons* m_arg3;
    ::dice::hfe::io::InputDeviceFlags* m_arg4;
    ::dice::hfe::io::InputDeviceKeys* m_arg5;
    bool* m_arg6;
};

void ConsoleClass536::setArgFromString(int index, const std::string& str)
{
    if (index == 1) {
        static int arg;
        std::istringstream ss(str);
        ss >> arg;
        m_arg1 = &arg;
    }
    if (index == 2) {
        static ::dice::hfe::io::InputDeviceFlags arg;
        std::istringstream ss(str);
        ss >> arg;
        m_arg2 = &arg;
    }
    if (index == 3) {
        static ::dice::hfe::io::InputDeviceButtons arg;
        std::istringstream ss(str);
        ss >> arg;
        m_arg3 = &arg;
    }
    if (index == 4) {
        static ::dice::hfe::io::InputDeviceFlags arg;
        std::istringstream ss(str);
        ss >> arg;
        m_arg4 = &arg;
    }
    if (index == 5) {
        static ::dice::hfe::io::InputDeviceKeys arg;
        std::istringstream ss(str);
        ss >> arg;
        m_arg5 = &arg;
    }
    if (index == 6) {
        static bool arg;
        std::istringstream ss(str);
        ss >> arg;
        m_arg6 = &arg;
    }
}

} } } }
