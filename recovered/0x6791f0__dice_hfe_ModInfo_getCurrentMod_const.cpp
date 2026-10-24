// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x6791f0
#include <string>
#include <vector>

namespace dice { namespace hfe {

int compareIgnoreCase(char const* a, char const* b);

class Settings {
public:
    virtual void p0();  virtual void p1();  virtual void p2();  virtual void p3();
    virtual void p4();  virtual void p5();  virtual void p6();  virtual void p7();
    virtual void p8();  virtual void p9();  virtual void p10(); virtual void p11();
    virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15();
    virtual const std::string& getString(const std::string& key, const std::string& def);
};

extern Settings* settings;

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
    virtual IModInfo::Mod const* getCurrentMod() const;

    char _pad[0x10 - 0x8];
    std::vector<IModInfo::Mod> m_mods; // +0x10
};

IModInfo::Mod const* ModInfo::getCurrentMod() const
{
    std::string name = settings->getString(std::string("GSModDirectory"), std::string("mods/bf2"));
    for (unsigned int i = 0; i < m_mods.size(); ++i) {
        if (compareIgnoreCase(m_mods[i].path.c_str(), name.c_str()) == 0) {
            return &m_mods[i];
        }
    }
    return 0;
}

} }
