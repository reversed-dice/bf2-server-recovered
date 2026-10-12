// FUNCTION: BF2 0x4505a0
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

    void clearBanList();
};

void BanList::clearBanList()
{
    m_addresses.clear();
    m_keys.clear();
    m_cachedAddress = m_addresses.end();
    m_cachedKey = m_keys.end();
}

} }
