// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x469d80
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
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual const bool& boolGet(const std::string& key, const bool& def);
};

extern ISettingsRepostitory* settings;

namespace io {
class FileManager {
public:
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual void f6();
    virtual bool exists(const std::string& f);
};
extern FileManager* fileManager;
}

namespace ai {
class AIInstanceServer {
public:
    static int* m_iAI;
};
}

class ServerSettings {
public:
    bool m_ranked;
    void setRanked(bool b);
};

void ServerSettings::setRanked(bool b) {
    if ((b == true && ai::AIInstanceServer::m_iAI != 0) ||
        !io::fileManager->exists(std::string("python/bf2/stats/medals.py")) ||
        !io::fileManager->exists(std::string("python/bf2/stats/medal_data.py"))) {
        *(bool*)((char*)this + 0x145) = false;
        return;
    }
    const bool& v = settings->boolGet(std::string("GSRanked"), false);
    bool r = v ? true : b;
    *(bool*)((char*)this + 0x145) = r;
}

} }
