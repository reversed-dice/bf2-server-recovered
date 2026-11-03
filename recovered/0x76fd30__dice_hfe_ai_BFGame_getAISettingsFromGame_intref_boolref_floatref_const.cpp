// FUNCTION: BF2 0x76fd30
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
#include <ostream>

namespace dice { namespace hfe {

class ConsoleObject {
public:
    virtual void s0();
    virtual void s1();
    virtual void s2();
    virtual void s3();
    virtual void s4();
    virtual void s5();
    virtual void s6();
    virtual void s7();
    virtual void s8();
    virtual void s9();
    virtual void s10();
    virtual void s11();
    virtual void s12();
    virtual void s13();
    virtual void s14();
    virtual void s15();
    virtual void s16();
    virtual void* s17();
    virtual void s18();
    virtual void s19();
    virtual void s20();
    virtual void s21();
    virtual void s22();
    virtual void s23();
    virtual void s24();
    virtual void s25();
    virtual void s26();
    virtual void s27();
    virtual void s28();
    virtual void s29();
    virtual void s30();
    virtual void s31();
    virtual void s32();
    virtual void s33();
    virtual void s34();
    virtual void s35();
    virtual void s36();
    virtual void s37();
    virtual void s38();
    virtual void s39();
    virtual void s40();
    virtual void s41();
    virtual void s42();
    virtual void s43();
    virtual int s44();
    virtual void s45(int);
    virtual bool s46();
    virtual void s47();
    virtual float s48();
    virtual void s49();
    virtual void s50();
    virtual void s51();
    virtual void s52();
    virtual void s53();
    virtual void s54();
    virtual void s55();
    virtual void s56();
    virtual void s57();
    virtual void s58();
    virtual void s59();
    virtual void s60();
    virtual void s61(int);
};

class ClassManager {
public:
    virtual void c0();
    virtual void c1();
    virtual void c2();
    virtual void c3();
    virtual void c4();
    virtual void c5();
    virtual void c6();
    virtual void c7();
    virtual void c8();
    virtual void c9();
    virtual void c10();
    virtual void c11();
    virtual void c12();
    virtual void c13();
    virtual void c14();
    virtual void c15();
    virtual void c16();
    virtual void c17();
    virtual void c18();
    virtual ConsoleObject* find(std::string name);
};

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

class ServerSettings {
public:
    int getCoopBotCount() const;
    float getCoopBotDifficulty() const;
};

typedef int DebugType;

class Debug {
    char _pad[0x20];
    char _stream[0x160];
public:
    Debug(DebugType type, std::string const& file, int line, std::string const& func = "");
    ~Debug();
    template <typename T>
    std::ostream& operator<<(T const& val) {
        return *(std::ostream*)(_stream) << val;
    }
};

extern ClassManager* classManager;
extern ISettingsRepostitory* settings;
extern ServerSettings* serverSettings;

int compareIgnoreCase(const std::string& a, const std::string& b);

namespace ai {

class IAISettings {
public:
    virtual int v0();
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
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual bool v46();
};

struct CommonSingletonServer {
    static IAISettings* m_iaiSettings;
};

class BFGame {
public:
    bool getAISettingsFromGame(int& botCount, bool& coopBots, float& difficulty) const;
};

bool BFGame::getAISettingsFromGame(int& botCount, bool& coopBots, float& difficulty) const
{
    using ai::CommonSingletonServer;
    ConsoleObject* gen = classManager->find(std::string("GeneralSettings"));
    if (gen != 0) {
        ConsoleObject* lpm = classManager->find(std::string("LocalProfileManager"));
        if (lpm == 0) return false;
        if (lpm->s17() == 0) return false;
        std::string gameMode = settings->stringGet(std::string("GSGameMode"), std::string("gpm_cq"));
        if (compareIgnoreCase(gameMode, std::string("sp1")) == 0) {
            int bots = 0x10;
            if (CommonSingletonServer::m_iaiSettings != 0 && CommonSingletonServer::m_iaiSettings->v46())
                bots = CommonSingletonServer::m_iaiSettings->v0();
            gen->s45(bots);
        }
        botCount = gen->s44();
        coopBots = gen->s46();
        difficulty = gen->s48();
        return true;
    }
    if (serverSettings != 0) {
        botCount = serverSettings->getCoopBotCount();
        coopBots = false;
        difficulty = serverSettings->getCoopBotDifficulty() * 0.01f;
        return true;
    }
    Debug(DebugType(6), std::string("AI/AIInterface/BFKnowledge/BFGame.cpp"), 0x68, std::string("")) << "GeneralSettings are not available, no settings importade from menu.";
    return false;
}

} } }
