// FUNCTION: BF2 0x4501b0
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

    bool isKeyBanned(const std::string& key) const;
};

bool BanList::isKeyBanned(const std::string& key) const
{
    std::map<std::string, BanInfo>::const_iterator it = m_keys.find(key);
    std::map<std::string, BanInfo>::const_iterator e = m_keys.end();
    return e != it;
}

} }
