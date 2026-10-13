// BF2_FLAGS: -fcrossjumping
// FUNCTION: BF2 0x678e80
#include <string>
#include <vector>

namespace dice { namespace hfe {

unsigned int compareIgnoreCase(char const*, char const*);

struct ModMap {
    std::string m_path;
    std::string m_name;
    char pad[0x38];
};

struct Mod {
    char pad[0x48];
    std::vector<ModMap> m_maps;
};

struct ModInfo {
    std::string getMapPathFromMap(Mod const* mod, std::string const& name);
};

std::string ModInfo::getMapPathFromMap(Mod const* mod, std::string const& name) {
    if (mod == 0) return name;
    for (unsigned int i = 0; i < mod->m_maps.size(); ++i) {
        if (compareIgnoreCase(mod->m_maps[i].m_name.c_str(), name.c_str()) == 0) {
            return mod->m_maps[i].m_path;
        }
    }
    return name;
}

} }
