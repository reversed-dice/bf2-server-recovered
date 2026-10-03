// FUNCTION: BF2 0x416770
#include <string>
#include <vector>
namespace dice { namespace hfe {

const std::string& getEmptyString();

class MapInfo {
public:
    void clear();
    std::string m_name;
    std::string m_mode;
    std::string m_description;
    int m_maxPlayers;
    bool m_enabled;
    int m_size;
    bool m_24;
    char _pad25;
    bool m_custom;
    std::vector<int> m_sizes;
};

void MapInfo::clear()
{
    m_name = m_mode = m_description = getEmptyString();
    m_maxPlayers = 16;
    m_enabled = true;
    m_24 = false;
    m_custom = true;
}

} }
