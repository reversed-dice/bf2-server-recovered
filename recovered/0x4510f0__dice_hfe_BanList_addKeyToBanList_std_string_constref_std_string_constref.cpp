// FUNCTION: BF2 0x4510f0
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
#include <map>

namespace dice { namespace hfe {

struct BanInfo {
    unsigned int a;
    unsigned int b;
};

class BanList {
public:
    bool parseBanTime(const std::string& reason, BanInfo& info);
    bool addKeyToBanList(const std::string& key, const std::string& reason);
    bool isKeyBanned(const std::string& key) const;

    std::map<std::string, BanInfo> m_keys;
    std::map<std::string, BanInfo> m_addresses;
    std::map<std::string, BanInfo>::iterator m_cachedKey;
    std::map<std::string, BanInfo>::iterator m_cachedAddress;
};

bool BanList::addKeyToBanList(const std::string& key, const std::string& reason)
{
    BanInfo info;
    if (!parseBanTime(reason, info))
        return false;
    std::map<std::string, BanInfo>::iterator it = m_keys.lower_bound(key);
    if (it == m_keys.end() || key < it->first) {
        std::map<std::string, BanInfo>::value_type v(key, BanInfo());
        it = m_keys.insert(it, v);
    }
    it->second = info;
    m_cachedKey = m_keys.begin();
    return true;
}

} }
