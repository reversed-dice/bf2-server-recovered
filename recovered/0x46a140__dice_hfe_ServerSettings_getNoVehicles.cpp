// FUNCTION: BF2 0x46a140
#include <string>

namespace dice { namespace hfe {

class ISettingsRepostitory {
public:
    virtual void v00();
    virtual void v01();
    virtual void v02();
    virtual void v03();
    virtual void v04();
    virtual void v05();
    virtual void v06();
    virtual void v07();
    virtual void v08();
    virtual void v09();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual const std::string& stringGet(const std::string& key, const std::string& def);
};

extern ISettingsRepostitory* settings;

int compareIgnoreCase(const std::string& a, const std::string& b);

class ServerSettings {
public:
    bool getNoVehicles();
};

bool ServerSettings::getNoVehicles() {
    std::string mode = settings->stringGet(std::string("GSGameMode"), std::string("gpm_cq"));
    if (compareIgnoreCase(mode, std::string("gpm_coop")) == 0)
        *(char*)((char*)this + 0x151) = 0;
    return *(bool*)((char*)this + 0x151);
}

} }
