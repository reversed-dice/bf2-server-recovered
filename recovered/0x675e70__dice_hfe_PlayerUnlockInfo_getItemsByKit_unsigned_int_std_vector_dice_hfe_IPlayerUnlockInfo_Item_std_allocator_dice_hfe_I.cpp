// FUNCTION: BF2 0x675e70
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
#include <vector>

namespace dice { namespace hfe {

class IPlayerUnlockInfo {
public:
    struct Item {
        int m_id;
        int m_type;
        std::string m_name;
        std::string m_description;
    };
};

class PlayerUnlockInfo {
public:
    char _pad0[0x48];
    std::vector<dice::hfe::IPlayerUnlockInfo::Item> m_items;

    bool getItemsByKit(unsigned int kit, std::vector<dice::hfe::IPlayerUnlockInfo::Item>& out);
};

bool PlayerUnlockInfo::getItemsByKit(unsigned int kit, std::vector<dice::hfe::IPlayerUnlockInfo::Item>& out) {
    for (unsigned int i = 0; i < m_items.size(); ++i) {
        if (m_items[i].m_type == (int)kit) {
            out.push_back(m_items[i]);
        }
    }
    return true;
}

} }
