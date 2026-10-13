// FUNCTION: BF2 0x64c0c0
#include <string>
#include <vector>
namespace dice { namespace hfe {

class KeyMap {
public:
    struct Key {
        std::string name;
        std::string value;
    };
    void addKey(const Key& key);
private:
    std::vector<Key> m_keys;
};

void KeyMap::addKey(const Key& key)
{
    m_keys.push_back(key);
}

} }
