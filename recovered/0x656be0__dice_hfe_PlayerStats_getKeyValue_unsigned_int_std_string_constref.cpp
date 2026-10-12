// FUNCTION: BF2 0x656be0
#include <string>

namespace dice { namespace hfe {

class KeyMapEntry {
public:
    std::string m_key;
    std::string m_value;
};

class KeyMap {
public:
    KeyMapEntry* findKey(std::string const&) const;
};

class PlayerStats {
public:
    KeyMap* getKeyMap(unsigned int);
    std::string getKeyValue(unsigned int, std::string const&);
};

std::string PlayerStats::getKeyValue(unsigned int id, std::string const& key)
{
    KeyMap* km = getKeyMap(id);
    if (km == 0)
        return std::string("");
    if (km->findKey(key) == 0)
        return std::string("");
    return km->findKey(key)->m_value;
}

} }
