// FUNCTION: BF2 0x678ca0
#include <string>
#include <vector>

namespace dice { namespace hfe {

int compareIgnoreCase(char const* a, char const* b);

class IModInfo {
public:
    struct Mod {
        std::string path; // +0x0
        std::string name; // +0x8
        char _pad[0x88 - 0x10]; // sizeof(Mod) == 0x88
    };

    virtual ~IModInfo();
};

class ModInfo : public IModInfo {
public:
    virtual IModInfo::Mod const* getModFromName(std::string const& modName);

    char _pad[0x10 - 0x8];
    std::vector<IModInfo::Mod> m_mods; // +0x10
};

IModInfo::Mod const* ModInfo::getModFromName(std::string const& modName)
{
    for (unsigned int i = 0; i < m_mods.size(); ++i) {
        if (compareIgnoreCase(m_mods[i].name.c_str(), modName.c_str()) == 0) {
            return &m_mods[i];
        }
    }
    return 0;
}

} }
