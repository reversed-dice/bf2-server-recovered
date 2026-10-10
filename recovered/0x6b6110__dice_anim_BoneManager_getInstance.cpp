// FUNCTION: BF2 0x6b6110
#include <string>
#include <vector>

namespace dice { namespace anim {

class BoneManager {
public:
    std::vector<std::string> m_boneNames;
    std::string m_invalidBoneName;

    BoneManager()
        : m_boneNames(), m_invalidBoneName("Invalid bone name index")
    {
    }

    static BoneManager* getInstance();
};

BoneManager* BoneManager::getInstance() {
    static BoneManager boneManager;
    return &boneManager;
}

} }
