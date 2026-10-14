// FUNCTION: BF2 0x675f60
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

    bool getItems(std::vector<dice::hfe::IPlayerUnlockInfo::Item>& out);
};

bool PlayerUnlockInfo::getItems(std::vector<dice::hfe::IPlayerUnlockInfo::Item>& out) {
    for (unsigned int i = 0; i < m_items.size(); ++i) {
        out.push_back(m_items[i]);
    }
    return true;
}

} }
