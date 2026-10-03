// FUNCTION: BF2 0x4b53a0
#include <string>

namespace dice { namespace hfe { namespace world {
class TriggerableTarget {
public:
    unsigned char _pad[0x8];
    std::string m_str;
    std::string TriggerableTarget_getName() const;
};
std::string TriggerableTarget::TriggerableTarget_getName() const {
    return m_str;
}
} } }
