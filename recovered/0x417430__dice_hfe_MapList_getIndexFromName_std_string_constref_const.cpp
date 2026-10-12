// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x417430
#include <deque>
#include <string>

namespace dice { namespace hfe {

struct MapListEntry {
    std::string name;
    std::string mode;
    int size;
    int rounds;
};

class MapList {
public:
    int getIndexFromName(std::string const& name) const;

    char _pad0[0x10];
    std::deque<MapListEntry> m_maps;
};

int MapList::getIndexFromName(std::string const& name) const
{
    int index = 0;
    for (std::deque<MapListEntry>::const_iterator it = m_maps.begin(); it != m_maps.end(); ++it, ++index) {
        if (name == it->name)
            return index;
    }
    return -1;
}

} }
