// FUNCTION: BF2 0x418a70
#include <deque>

namespace dice { namespace hfe {

struct MapListEntry {
    char _pad[0x18];
};

class MapList {
public:
    char _pad0[0x8];
    int m_count;                         // +0x8
    char _pad1[0x4];
    std::deque<MapListEntry> m_entries;  // +0x10
    char _pad2[0x10];
    char m_70;                           // +0x70

    bool validateIndex(int) const;
    bool isModifiable() const;
    void internalSetDirty();
    bool removeEntry(int index, bool flag);
};

bool MapList::removeEntry(int index, bool flag)
{
    char old = m_70;
    if (flag)
        m_70 = 1;
    if (!validateIndex(index) || !isModifiable()) {
        m_70 = old;
        return false;
    }
    internalSetDirty();
    std::deque<MapListEntry>::iterator it = m_entries.begin();
    it += index;
    m_entries.erase(it);
    int c = m_count;
    if (index <= c)
        m_count = c - 1;
    m_70 = old;
    return true;
}

}}
