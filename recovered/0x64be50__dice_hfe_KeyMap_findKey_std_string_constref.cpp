// FUNCTION: BF2 0x64be50
#include <vector>
#include <string>

namespace dice { namespace hfe {

extern int compareIgnoreCase(std::string const&, std::string const&);

struct KeyValue {
    std::string m_key;
    std::string m_value;
};

class KeyMap {
public:
    std::vector<KeyValue> m_entries;

    KeyValue* findKey(std::string const& key);
};

KeyValue* KeyMap::findKey(std::string const& key) {
    for (unsigned int i = 0; i < m_entries.size(); ++i) {
        if (compareIgnoreCase(m_entries[i].m_key, key) == 0)
            return &m_entries[i];
    }
    return 0;
}

} }
