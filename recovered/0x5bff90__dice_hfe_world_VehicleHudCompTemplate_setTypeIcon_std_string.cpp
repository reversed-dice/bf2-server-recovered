// FUNCTION: BF2 0x5bff90
#include <string>

namespace dice { namespace hfe { namespace world {

class VehicleHudCompTemplate {
public:
    char        _pad0[0xd8];
    std::string m_icon;      // +0xd8
    char        _pad1[0x3c];
    int         m_flag;      // +0x11c
    void setTypeIcon(std::string name);
};

void VehicleHudCompTemplate::setTypeIcon(std::string name)
{
    m_icon.assign(name);
    std::string tmp(name.c_str());
    m_flag = 0;
}

} } }

// REVERSED_FUNCTION: dice_hfe_world_VehicleHudCompTemplate_setTypeIcon_std_string (0x5bff90)
