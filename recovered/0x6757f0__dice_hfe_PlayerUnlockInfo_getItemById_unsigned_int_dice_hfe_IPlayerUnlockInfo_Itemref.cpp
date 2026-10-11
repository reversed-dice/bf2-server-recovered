// FUNCTION: BF2 0x6757f0
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

    bool getItemById(unsigned int id, dice::hfe::IPlayerUnlockInfo::Item& out);
};

bool PlayerUnlockInfo::getItemById(unsigned int id, dice::hfe::IPlayerUnlockInfo::Item& out) {
    for (unsigned int i = 0; i < m_items.size(); ++i) {
        if (m_items[i].m_id == (int)id) {
            out = m_items[i];
            return true;
        }
    }
    return false;
}

} }
