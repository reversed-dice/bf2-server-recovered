// FUNCTION: BF2 0x6d2150
// BF2_FLAGS: --param inline-unit-growth=100000 --param large-function-growth=100000 -fno-strict-aliasing
#include <sstream>
#include <string>
#include <map>

namespace dice { namespace hfe {
struct NoCaseStringCompare {
    bool operator()(const std::string& a, const std::string& b) const;
};
} }

namespace dice { namespace anim {

class ValueHolder {
};

class ValueHolderManager {
public:
    std::map<std::string, ValueHolder*, dice::hfe::NoCaseStringCompare> m_holders;

    std::string listValueHolders() const;
};

std::string ValueHolderManager::listValueHolders() const {
    std::stringstream ss;
    std::map<std::string, ValueHolder*, dice::hfe::NoCaseStringCompare>::const_iterator it = m_holders.begin();
    if (it != m_holders.end()) {
        do {
            ss << it->first << "\n";
            ++it;
        } while (it != m_holders.end());
    }
    return ss.str();
}

} }
