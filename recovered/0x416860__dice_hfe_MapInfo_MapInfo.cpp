// FUNCTION: BF2 0x416860
#include <string>
#include <vector>
namespace dice { namespace hfe {

class MapInfo {
public:
    MapInfo();
    std::string m_name;
    std::string m_mode;
    std::string m_description;
    int m_maxPlayers;
    bool m_enabled;
    int m_size;
    short m_24;
    bool m_custom;
    std::vector<int> m_sizes;
};

MapInfo::MapInfo()
    : m_maxPlayers(16), m_enabled(true), m_size(0), m_custom(true)
{
}

} }
