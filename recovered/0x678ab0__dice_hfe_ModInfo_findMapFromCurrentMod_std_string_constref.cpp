// FUNCTION: BF2 0x678ab0
#include <string>

namespace dice { namespace hfe {

class IModInfo {
public:
    struct Mod;
    struct Map;
    virtual void v00();
    virtual void v08();
    virtual void v10();
    virtual void v18();
    virtual void v20();
    virtual void v28();
    virtual void v30();
    virtual IModInfo::Mod const* getCurrentMod() const; // slot 7 (+0x38)
    virtual void v40();
    virtual IModInfo::Map const* findMapFromCurrentMod(std::string const& mapName); // slot 9 (+0x48)
    virtual IModInfo::Map const* findMapFromMod(IModInfo::Mod const* mod, std::string const& mapName); // slot 10 (+0x50)
};

class ModInfo : public IModInfo {
public:
    virtual IModInfo::Map const* findMapFromCurrentMod(std::string const& mapName);
};

IModInfo::Map const* ModInfo::findMapFromCurrentMod(std::string const& mapName)
{
    IModInfo::Mod const* mod = getCurrentMod();
    if (!mod)
        return 0;
    return findMapFromMod(mod, mapName);
}

} }
