// FUNCTION: BF2 0x64cea0
#include <vector>
#include <string>

namespace dice { namespace hfe {

struct KeyValue {
    std::string m_key;
    std::string m_value;
};

class KeyMap {
public:
    std::vector<KeyValue> m_entries;
    ~KeyMap();
};

class KeyParser {
public:
    std::vector<KeyMap> m_keyMaps;
    ~KeyParser();
};

KeyParser::~KeyParser() {
}

} }
