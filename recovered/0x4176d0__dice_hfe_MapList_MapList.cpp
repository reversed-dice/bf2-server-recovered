// FUNCTION: BF2 0x4176d0
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
#include <deque>

namespace dice { namespace hfe {

struct MapListEntry {
    char _pad[0x18];
};

class MapList {
public:
    std::string m_name;
    int m_currentMap;
    std::deque<MapListEntry> m_maps;
    bool m_60;
    bool m_61;
    int m_64;
    void* m_68;
    bool m_70;

    MapList();
};

MapList::MapList()
    : m_name(),
      m_currentMap(-1),
      m_maps(),
      m_60(false),
      m_61(false),
      m_64(0),
      m_68(0),
      m_70(false)
{
}

} }
