// FUNCTION: BF2 0x64be20
#include <vector>

namespace dice { namespace hfe {

struct KeyEntry {
    unsigned int m_key;
    unsigned int m_state;
    unsigned int m_pad[2];
};

class KeyMap {
public:
    KeyEntry* getKey(unsigned int index);
private:
    std::vector<KeyEntry> m_keys;
};

KeyEntry* KeyMap::getKey(unsigned int index) {
    if (index >= m_keys.size())
        return 0;
    return &m_keys[index];
}

} }
