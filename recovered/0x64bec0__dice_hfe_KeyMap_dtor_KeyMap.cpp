// FUNCTION: BF2 0x64bec0
#include <string>
#include <vector>

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

KeyMap::~KeyMap()
{
}

} }
