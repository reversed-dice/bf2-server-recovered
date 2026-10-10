// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x5c3e70
#include <vector>

namespace dice { namespace hfe { namespace world {

class WeaponHudCompTemplate {
public:
    void addShowOnCamMode(int mode);

    char _pad[0x68];
    std::vector<int> m_showOnCamModes;
};

void WeaponHudCompTemplate::addShowOnCamMode(int mode)
{
    m_showOnCamModes.push_back(mode);
}

} } }
