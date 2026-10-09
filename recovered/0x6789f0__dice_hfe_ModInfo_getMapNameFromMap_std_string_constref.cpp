// FUNCTION: BF2 0x6789f0
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
    virtual std::string getMapNameFromMap(std::string const& mapPath);
    virtual void v78();
    virtual std::string getMapNameFromMap(IModInfo::Mod const* mod, std::string const& mapPath); // slot 16 (+0x80)
};

class ModInfo : public IModInfo {
public:
    using IModInfo::getMapNameFromMap;
    virtual std::string getMapNameFromMap(std::string const& mapPath);
};

std::string ModInfo::getMapNameFromMap(std::string const& mapPath)
{
    return getMapNameFromMap(getCurrentMod(), mapPath);
}

} }
