// FUNCTION: BF2 0x418f40
#include <deque>

namespace dice { namespace hfe {

struct MapListEntry {
    char _pad[0x18];
};

class MapList {
public:
    char _pad0[0x10];
    std::deque<MapListEntry> m_entries;

    bool validateIndex(int) const;
    MapListEntry* getEntry(int) const;
    bool removeEntry(int, bool);
    bool moveUp(int index);
};

bool MapList::moveUp(int index)
{
    if (!validateIndex(index) || index <= 0)
        return false;
    MapListEntry const* e = getEntry(index);
    std::deque<MapListEntry>::iterator it = m_entries.begin();
    it += index - 1;
    m_entries.insert(it, *e);
    removeEntry(index + 1, false);
    return true;
}

}}
