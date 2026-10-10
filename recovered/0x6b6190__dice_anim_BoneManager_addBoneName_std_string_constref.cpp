// FUNCTION: BF2 0x6b6190
#include <string>
#include <vector>

namespace dice {
namespace hfe {
int compareIgnoreCase(std::string const& a, std::string const& b);
}

namespace anim {

class BoneManager {
public:
    std::vector<std::string> m_boneNames;

    short addBoneName(std::string const& name);
};

short BoneManager::addBoneName(std::string const& name) {
    for (short i = 0; i < (short)m_boneNames.size(); ++i) {
        if (dice::hfe::compareIgnoreCase(name, m_boneNames[i]) == 0) {
            return i;
        }
    }
    m_boneNames.push_back(name);
    return (short)(m_boneNames.size() - 1);
}

} }
