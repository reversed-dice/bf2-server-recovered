// FUNCTION: BF2 0x679470
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
#include <map>

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
    virtual IModInfo::Mod const* getCurrentMod() const;
    virtual void v40();
    virtual void v48();
    virtual void v50();
    virtual void v58();
    virtual void v60();
    virtual void v68();
    virtual void v70();
    virtual void v78();
    virtual void v80();
    virtual void v88();
};

class ModInfo : public IModInfo {
public:
    char _pad[0x30 - 0x8];
    std::map<std::string, std::string> m_names;
    virtual void addNameForGameMode(std::string const& name, std::string const& gameMode);
};

void ModInfo::addNameForGameMode(std::string const& name, std::string const& gameMode)
{
    m_names[name] = gameMode;
}

} }
