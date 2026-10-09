// FUNCTION: BF2 0x678a50
#include <string>

namespace dice { namespace hfe {

class IModInfo {
public:
    struct Mod;
    virtual void v00();
    virtual void v08();
    virtual void v10();
    virtual void v18();
    virtual void v20();
    virtual void v28();
    virtual void v30();
    virtual IModInfo::Mod const* getCurrentMod() const; // slot 7 (+0x38)
    virtual void v40();
    virtual void v48();
    virtual void v50();
    virtual void v58();
    virtual void v60();
    virtual void v68();
    virtual void v70();
    virtual std::string getMapPathFromMap(std::string const& mapName); // slot 15 (+0x78)
    virtual void v80();
    virtual std::string getMapPathFromMap(IModInfo::Mod const* mod, std::string const& mapName); // slot 17 (+0x88)
};

class ModInfo : public IModInfo {
public:
    using IModInfo::getMapPathFromMap;
    virtual std::string getMapPathFromMap(std::string const& mapName);
};

std::string ModInfo::getMapPathFromMap(std::string const& mapName)
{
    return getMapPathFromMap(getCurrentMod(), mapName);
}

} }
