// FUNCTION: BF2 0x64c620
#include <vector>
namespace dice { namespace hfe {

struct KeyMap {
    void* a;
    void* b;
    void* c;
};

class KeyParser {
public:
    KeyMap* getKeyMap(unsigned int index);
    std::vector<KeyMap> m_keyMaps;
};

KeyMap* KeyParser::getKeyMap(unsigned int index)
{
    if (index < m_keyMaps.size())
        return &m_keyMaps[index];
    return 0;
}

} }
