// FUNCTION: BF2 0x679370
#include <string>

namespace dice { namespace hfe {

class Settings {
public:
    virtual void p0();  virtual void p1();  virtual void p2();  virtual void p3();
    virtual void p4();  virtual void p5();  virtual void p6();  virtual void p7();
    virtual void p8();  virtual void p9();  virtual void p10(); virtual void p11();
    virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15();
    virtual const std::string& getString(const std::string& key, const std::string& def);
};

extern Settings* settings;

class ModInfo {
public:
    static std::string getCurrentModPath();
};

std::string ModInfo::getCurrentModPath() {
    return settings->getString(std::string("GSModDirectory"), std::string("mods/bf2"));
}

} }
