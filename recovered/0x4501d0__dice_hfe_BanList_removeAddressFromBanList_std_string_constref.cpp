// FUNCTION: BF2 0x4501d0
// BF2_FLAGS: -fno-tree-loop-optimize -fno-strict-aliasing
#include <map>
#include <string>

namespace dice { namespace hfe {

struct BanInfo {
    char pad[0x20];
};

class BanList {
public:
    char pad0[0x30];
    std::map<std::string, BanInfo> m_addresses;
    char pad1[8];
    std::map<std::string, BanInfo>::iterator m_cachedAddress;

    bool removeAddressFromBanList(const std::string& address);
};

bool BanList::removeAddressFromBanList(const std::string& address)
{
    std::map<std::string, BanInfo>::iterator it = m_addresses.begin();
    for (; it != m_addresses.end(); ++it) {
        if (it->first == address) {
            m_addresses.erase(it);
            m_cachedAddress = m_addresses.begin();
            return true;
        }
    }
    return false;
}

} }
