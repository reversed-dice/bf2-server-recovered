// FUNCTION: BF2 0x64c250
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
#include <vector>

namespace dice { namespace hfe {

class KeyMap {
public:
    struct Key {
        std::string m_key;
        std::string m_value;
    };

    std::vector<Key> m_entries;
};

} }

template class std::vector<dice::hfe::KeyMap::Key>;
