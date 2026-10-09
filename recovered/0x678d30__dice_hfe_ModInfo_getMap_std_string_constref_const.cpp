// FUNCTION: BF2 0x678d30
#include <string>
#include <vector>

namespace dice { namespace hfe {

int compareIgnoreCase(std::string const& a, std::string const& b);

class IModInfo {
public:
    struct Map {
        std::string name; // +0x0
        char _pad[0x48 - 0x8]; // sizeof(Map) == 0x48
    };

    struct Mod {
        char _pad[0x48];
        std::vector<Map> maps; // +0x48
    };

    virtual void v00();
    virtual void v08();
    virtual void v10();
    virtual void v18();
    virtual void v20();
    virtual void v28();
    virtual void v30();
    virtual IModInfo::Mod const* getCurrentMod() const; // slot 7 (+0x38)
    virtual IModInfo::Map const* getMap(std::string const& mapName) const; // slot 6 (+0x30)
};

class ModInfo : public IModInfo {
public:
    virtual IModInfo::Map const* getMap(std::string const& mapName) const;
};

IModInfo::Map const* ModInfo::getMap(std::string const& mapName) const
{
    IModInfo::Mod const* mod = getCurrentMod();
    for (unsigned int i = 0; i < mod->maps.size(); ++i) {
        if (compareIgnoreCase(mapName, mod->maps[i].name) == 0) {
            return &mod->maps[i];
        }
    }
    return 0;
}

} }
