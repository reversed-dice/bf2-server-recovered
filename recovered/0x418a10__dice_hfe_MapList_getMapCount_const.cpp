// FUNCTION: BF2 0x418a10
#include <deque>
namespace dice { namespace hfe {

struct MapListEntry {
    void* name;
    void* mode;
    int size;
    int rounds;
};

class MapList {
public:
    int getMapCount() const;
    char _pad0[0x10];
    std::deque<MapListEntry> m_maps;
};

int MapList::getMapCount() const
{
    return m_maps.size();
}

} }
