// FUNCTION: BF2 0x64a580
#include <string>
#include <vector>

namespace dice { namespace hfe {

struct KeyValue { std::string m_key; std::string m_value; };
class KeyMap { public: KeyValue* findKey(std::string const&) const; std::vector<KeyValue> m_entries; };

class GSServerSideNameValidation {
public:
    KeyMap* getKeyMap(unsigned int);
    std::string getKeyValue(unsigned int, std::string const&);
};

std::string GSServerSideNameValidation::getKeyValue(unsigned int id, std::string const& key) {
    KeyMap* map = getKeyMap(id);
    if (map == 0) return std::string("");
    if (map->findKey(key) == 0) return std::string("");
    return map->findKey(key)->m_value;
}

} }
