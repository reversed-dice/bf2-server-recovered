// FUNCTION: BF2 0x6575b0
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

class PlayerStatsManager {
public:
    char _pad0[0x10];
    std::string m_name;                  // +0x10
    std::string m_path;                  // +0x18
    std::vector<PlayerStatKey> m_keys;   // +0x20

    PlayerStatKey* findKey(std::string const& key);
};

PlayerStatKey* PlayerStatsManager::findKey(std::string const& key)
{
    for (unsigned int i = 0; i < m_keys.size(); ++i) {
        if (compareIgnoreCase(m_keys[i].m_name, key) != 0)
            return &m_keys[i];
    }
    return 0;
}

} }
