// FUNCTION: BF2 0x451250
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
#include <map>

namespace dice { namespace hfe { namespace io {

struct ISocket {
    struct Address { unsigned char _pad[32]; };
};

class UDPSocket {
public:
    static int nameToAddress(const std::string& name, void* out, void* list);
};

} } }

namespace dice { namespace hfe {

struct BanInfo {
    unsigned int a;
    unsigned int b;
};

class BanList {
public:
    bool parseBanTime(const std::string& reason, BanInfo& info);
    bool addAddressToBanList(const std::string& address, const std::string& reason);

    std::map<std::string, BanInfo> m_keys;
    std::map<std::string, BanInfo> m_addresses;
    std::map<std::string, BanInfo>::iterator m_cachedKey;
    std::map<std::string, BanInfo>::iterator m_cachedAddress;
};

bool BanList::addAddressToBanList(const std::string& address, const std::string& reason)
{
    char addr[17] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0x10 };
    int _r = io::UDPSocket::nameToAddress(address, addr, 0);
    if (_r != 0)
        return false;

    BanInfo info;
    if (!parseBanTime(reason, info))
        return false;
    std::map<std::string, BanInfo>::iterator it = m_addresses.lower_bound(address);
    if (it == m_addresses.end() || address < it->first) {
        std::map<std::string, BanInfo>::value_type v(address, BanInfo());
        it = m_addresses.insert(it, v);
    }
    it->second = info;
    m_cachedAddress = m_addresses.begin();
    return true;
}

} }
