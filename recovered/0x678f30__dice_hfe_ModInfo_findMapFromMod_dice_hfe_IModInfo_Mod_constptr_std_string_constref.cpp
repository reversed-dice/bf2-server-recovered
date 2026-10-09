// FUNCTION: BF2 0x678f30
#include <string>
#include <vector>

namespace dice { namespace hfe {

int compareIgnoreCase(char const* a, char const* b);

class IModInfo {
public:
    struct Map {
        std::string path; // +0x0
        std::string name; // +0x8
        char _pad[0x48 - 0x10]; // sizeof(Map) == 0x48
    };

    struct Mod {
        char _pad[0x48];
        std::vector<Map> maps; // +0x48
    };

    virtual ~IModInfo();
};

class ModInfo : public IModInfo {
public:
    virtual IModInfo::Map const* findMapFromMod(IModInfo::Mod const* mod, std::string const& mapPath);
};

IModInfo::Map const* ModInfo::findMapFromMod(IModInfo::Mod const* mod, std::string const& mapPath)
{
    if (!mod)
        return 0;
    for (unsigned int i = 0; i < mod->maps.size(); ++i) {
        if (compareIgnoreCase(mod->maps[i].path.c_str(), mapPath.c_str()) == 0) {
            return &mod->maps[i];
        }
    }
    return 0;
}

} }
