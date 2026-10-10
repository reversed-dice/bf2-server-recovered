// FUNCTION: BF2 0x657640
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
#include <vector>

namespace dice { namespace hfe {

int compareIgnoreCase(std::string const& a, std::string const& b);

class PlayerStatKey {
public:
    ~PlayerStatKey();
    char _pad0[0x8];
    std::string m_name;   // +0x8
    char _pad1[0x18];
};

void cbCompleted(int state, int result, char* buffer, int len, void* user);
extern "C" int ghttpGetA(char const* url, int, void (*cb)(int, int, char*, int, void*), void* data);

extern std::string fetchUrlPrefix;

class PlayerStatsManager {
public:
    virtual void addRef();
    virtual void getRef();
    virtual void release();
    virtual void queryInterface(unsigned int) const;
    virtual void connect();
    virtual void disconnect();
    virtual bool isConnected();
    virtual bool isUpdating();
    bool update();

    char _pad0[0x5];                     // +0x8
    bool m_started;                      // +0xd
    std::string m_name;                  // +0x10
    std::string m_path;                  // +0x18
    std::vector<PlayerStatKey> m_keys;   // +0x20
};

bool PlayerStatsManager::update()
{
    if (!isConnected())
        return false;
    if (isUpdating())
        return false;
    std::string url = fetchUrlPrefix + m_name + m_path;
    bool ok = false;
    if (ghttpGetA(url.c_str(), 0, cbCompleted, this) >= 0) {
        m_started = true;
        ok = true;
    }
    return ok;
}

} }
