// FUNCTION: BF2 0x5c0230
#include <string>

namespace dice { namespace hfe { namespace world {

class VehicleHudCompTemplate {
public:
    char        _pad0[0xe0];
    std::string m_str;
    char        _pad1[0x38];
    int         m_flag;
    void setSpottedIcon(std::string name);
};

void VehicleHudCompTemplate::setSpottedIcon(std::string name)
{
    m_str.assign(name);
    std::string tmp(name.c_str());
    m_flag = 0;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_VehicleHudCompTemplate_setSpottedIcon_std_string_constref (0x5c0230)
