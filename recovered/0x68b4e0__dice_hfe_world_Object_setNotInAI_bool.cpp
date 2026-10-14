// BF2_FLAGS: -mbranch-cost=0
// FUNCTION: BF2 0x68b4e0
#include <string>

namespace dice { namespace hfe {

class ISettings {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual const std::string* getString(const std::string& name, const std::string& defVal);
};

extern ISettings* settings;

int compareIgnoreCase(const std::string& a, const std::string& b);

namespace ai { namespace AIInstanceServer {
extern void* m_iAI;
} }

namespace world {

class Object {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void destroy(bool);

    unsigned char _pad[0x208];
    bool m_notInAI;

    void setNotInAI(bool notInAI);
};

void Object::setNotInAI(bool notInAI) {
    std::string gamemode = "gpm_cq";
    if (settings) {
        gamemode = *settings->getString("GSGameMode", "gpm_cq");
    }
    int cmp = compareIgnoreCase(gamemode, "gpm_coop");
    m_notInAI = notInAI;
    if (notInAI && (ai::AIInstanceServer::m_iAI != 0 || cmp == 0)) {
        destroy(true);
    }
}

} } }
