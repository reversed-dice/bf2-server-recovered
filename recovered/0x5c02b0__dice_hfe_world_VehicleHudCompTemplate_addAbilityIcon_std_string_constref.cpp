// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x5c02b0
#include <string>
#include <vector>

namespace dice { namespace hfe { namespace world {

struct VHCT_b {
    char pad0[0xb8];
    std::vector<std::string> m_abilityIcons;   // 0xb8
    char pad1[0x30];
    std::vector<int> m_abilityIconFlags;       // 0x100
};

void addAbilityIcon(long self, std::string const& name) {
    VHCT_b* m = (VHCT_b*)self;
    m->m_abilityIcons.push_back(name);
    std::string tmp(name.c_str());
    m->m_abilityIconFlags.push_back(0);
}

}}}
