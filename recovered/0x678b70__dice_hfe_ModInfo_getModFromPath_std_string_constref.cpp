// FUNCTION: BF2 0x678b70
#include <string>
#include <vector>

namespace dice { namespace hfe {

int compareIgnoreCase(char const* a, char const* b);

class IModInfo {
public:
    struct Mod {
        std::string path; // +0x0
        char _pad[0x88 - 0x8]; // sizeof(Mod) == 0x88
    };

    virtual ~IModInfo();
};

class ModInfo : public IModInfo {
public:
    virtual IModInfo::Mod const* getModFromPath(std::string const& modPath);

    char _pad[0x10 - 0x8];
    std::vector<IModInfo::Mod> m_mods; // +0x10
};

IModInfo::Mod const* ModInfo::getModFromPath(std::string const& modPath)
{
    for (unsigned int i = 0; i < m_mods.size(); ++i) {
        if (compareIgnoreCase(m_mods[i].path.c_str(), modPath.c_str()) == 0) {
            return &m_mods[i];
        }
    }
    return 0;
}

} }
