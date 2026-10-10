// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x5c0440
#include <string>
#include <vector>

namespace dice { namespace hfe { namespace world {

struct VHCT_set {
    char pad0[0xa0];
    std::vector<std::string> m_icons;   // 0xa0
    char pad1[0x30];
    std::vector<int> m_flags;           // 0xe8
};

void setVehicleIcon(long self, std::string const& name) {
    VHCT_set* m = (VHCT_set*)self;
    m->m_icons.resize(0);
    m->m_icons.push_back(name);
    m->m_flags.resize(0);
    std::string copy(name);
    m->m_flags.push_back(0);
}

}}}
