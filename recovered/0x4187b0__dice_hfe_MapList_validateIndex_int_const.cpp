// FUNCTION: BF2 0x4187b0
#include <deque>

namespace dice { namespace hfe {

struct MapListEntry {
    char _pad[0x18];
};

class MapList {
public:
    char _pad0[0x10];
    std::deque<MapListEntry> m_maps;

    bool validateIndex(int index) const;
};

bool MapList::validateIndex(int index) const
{
    if (index < 0)
        return false;
    if (__builtin_expect((unsigned int)index < m_maps.size(), 1))
        return true;
    return false;
}

} }
