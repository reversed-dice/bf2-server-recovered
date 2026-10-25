// FUNCTION: BF2 0x5c0090
#include <string>
#include <cstring>

namespace dice { namespace hfe {

std::string getLowerCase(std::string const& name);

namespace world {

class VehicleHudCompTemplate {
public:
    char        _pad0[0x28];
    int         m_size;
    char        _pad1[4];
    std::string m_str;
    void setMiniMapIconLeaderSize(std::string const& name);
};

void VehicleHudCompTemplate::setMiniMapIconLeaderSize(std::string const& name)
{
    m_str.assign(name);
    if (strncmp(getLowerCase(name).c_str(), "small", 6) == 0)
        m_size = 0;
    else if (strncmp(getLowerCase(name).c_str(), "medium", 7) == 0)
        m_size = 1;
    else if (strncmp(getLowerCase(name).c_str(), "large", 6) == 0)
        m_size = 2;
}

} } }
