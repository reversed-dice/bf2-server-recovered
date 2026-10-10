// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x5c0640
#include <string>
#include <vector>

namespace dice { namespace hfe { namespace world {

struct VHCT_a {
    char pad0[0xa0];
    std::vector<std::string> m_vehicleIcons;   // 0xa0
    char pad1[0x30];
    std::vector<int> m_vehicleIconFlags;       // 0xe8
};

void addVehicleIcon(long self, std::string const& name) {
    VHCT_a* m = (VHCT_a*)self;
    m->m_vehicleIcons.push_back(name);
    std::string tmp(name.c_str());
    m->m_vehicleIconFlags.push_back(0);
}

}}}
