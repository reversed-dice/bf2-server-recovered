// FUNCTION: BF2 0x5c0010
#include <string>

namespace dice { namespace hfe { namespace world {

class VehicleHudCompTemplate {
public:
    char        _pad0[0xd0];
    std::string m_str;
    char        _pad1[0x40];
    int         m_flag;
    void setMiniMapIcon(std::string name);
};

void VehicleHudCompTemplate::setMiniMapIcon(std::string name)
{
    m_str.assign(name);
    std::string tmp(name.c_str());
    m_flag = 0;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_VehicleHudCompTemplate_setMiniMapIcon_std_string (0x5c0010)
