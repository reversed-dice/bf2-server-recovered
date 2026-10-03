// FUNCTION: BF2 0x510750
#include <string>

namespace dice { namespace hfe { namespace world {
class ControlPoint {
public:
    unsigned char _pad[0x248];
    void* m_248;
    std::string getName() const;
};
std::string ControlPoint::getName() const {
    return *(std::string*)((char*)m_248 + 0x18);
}
} } }
