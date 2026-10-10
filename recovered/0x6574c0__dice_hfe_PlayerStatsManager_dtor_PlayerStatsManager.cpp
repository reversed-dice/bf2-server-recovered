// FUNCTION: BF2 0x6574c0
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
#include <vector>

namespace dice { namespace hfe {

class PlayerStatKey {
public:
    ~PlayerStatKey();
    char _pad0[0x28];
};

class IPlayerStatsManager {
public:
    virtual void v0();
    char _pad0[0x8];
};

class PlayerStatsManager : public IPlayerStatsManager {
public:
    std::string m_name;                  // +0x10
    std::string m_path;                  // +0x18
    std::vector<PlayerStatKey> m_keys;   // +0x20

    void disconnect();
    virtual ~PlayerStatsManager();
};

PlayerStatsManager::~PlayerStatsManager()
{
    *reinterpret_cast<void**>(this) = reinterpret_cast<void*>(0xb8a5d0);
    disconnect();
}

} }
