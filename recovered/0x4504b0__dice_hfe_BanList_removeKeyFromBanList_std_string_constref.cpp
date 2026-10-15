// BF2_FLAGS: -fno-tree-loop-optimize -fno-strict-aliasing
// FUNCTION: BF2 0x4504b0
#include <map>
#include <string>

namespace dice { namespace hfe {

struct BanInfo {
    char pad[0x20];
};

class BanList {
public:
    std::map<std::string, BanInfo> m_keys;
    std::map<std::string, BanInfo> m_addresses;
    std::map<std::string, BanInfo>::iterator m_cachedKey;
    std::map<std::string, BanInfo>::iterator m_cachedAddress;

    bool removeKeyFromBanList(const std::string& key);
};

bool BanList::removeKeyFromBanList(const std::string& key)
{
    for (std::map<std::string, BanInfo>::iterator it = m_keys.begin(); it != m_keys.end(); ++it)
    {
        if (it->first == key)
        {
            m_keys.erase(it);
            m_cachedKey = m_keys.begin();
            return true;
        }
    }
    return false;
}

} }
