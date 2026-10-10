// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x5c0740
#include <string>
#include <vector>

namespace dice { namespace hfe { namespace world {

struct VHCT_setb {
    char pad0[0xb8];
    std::vector<std::string> m_icons;   // 0xb8
    char pad1[0x30];
    std::vector<int> m_flags;           // 0x100
};

void setAbilityIcon(long self, std::string const& name) {
    VHCT_setb* m = (VHCT_setb*)self;
    m->m_icons.resize(0);
    m->m_icons.push_back(name);
    m->m_flags.resize(0);
    std::string copy(name.c_str());
    m->m_flags.push_back(0);
}

}}}
