// BF2_FLAGS: -fcrossjumping -fno-strict-aliasing
// FUNCTION: BF2 0x47cbf0
#include <list>
#include <sstream>
#include <string>
#include <vector>

namespace dice { namespace hfe {

class Console {
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
    virtual bool execute(const std::string& f, const std::string& a1 = "", const std::string& a2 = "", const std::string& a3 = "", const std::string& a4 = "", const std::string& a5 = "", const std::string& a6 = "", const std::string& a7 = "", const std::string& a8 = "", std::string* out = &ignoredString); // slot 10, +0x50
    virtual bool executeFile(const std::string& f, const std::string& a1 = "", const std::string& a2 = "", const std::string& a3 = "", const std::string& a4 = "", const std::string& a5 = "", const std::string& a6 = "", const std::string& a7 = "", const std::string& a8 = "", std::string* out = &ignoredString); // slot 11, +0x58
    static std::string ignoredString;
};

class FileManager {
public:
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual void f6();
    virtual bool exists(const std::string& f); // slot 7, +0x38
    virtual void f8();
    virtual void f9();
    virtual void f10();
    virtual void f11();
    virtual void f12();
    virtual void f13();
    virtual void f14();
    virtual void f15();
    virtual void f16();
    virtual void f17();
    virtual void f18();
    virtual void f19();
    virtual void f20();
    virtual void f21();
    virtual void f22();
    virtual void f23();
    virtual void f24();
    virtual void f25();
    virtual void f26();
    virtual void f27();
    virtual void f28();
    virtual void f29();
    virtual void setMounting(bool b); // slot 30, +0xf0
    virtual void mountArchive(const std::string& archive, const std::string& path, bool b); // slot 31, +0xf8
    virtual void addArchive(const std::string& archive); // slot 32, +0x100
};

class Game {
public:
    virtual void g0();
    virtual void g1();
    virtual void g2();
    virtual void g3();
    virtual void g4();
    virtual void g5();
    virtual void g6();
    virtual void g7();
    virtual void g8();
    virtual void g9();
    virtual void g10();
    virtual void g11();
    virtual void g12();
    virtual void g13();
    virtual void g14();
    virtual void g15();
    virtual void g16();
    virtual void g17();
    virtual void g18();
    virtual void g19();
    virtual void g20();
    virtual void g21();
    virtual void g22();
    virtual void g23();
    virtual void g24();
    virtual void g25();
    virtual void g26();
    virtual void g27();
    virtual void g28();
    virtual void g29();
    virtual void g30();
    virtual void g31();
    virtual void g32();
    virtual void g33();
    virtual void g34();
    virtual void g35();
    virtual void g36();
    virtual void g37();
    virtual void g38();
    virtual void g39();
    virtual void g40();
    virtual void g41();
    virtual void g42();
    virtual void g43();
    virtual void g44();
    virtual void g45();
    virtual void g46();
    virtual void g47();
    virtual void g48();
    virtual void g49();
    virtual void g50();
    virtual void g51();
    virtual void g52();
    virtual void g53();
    virtual void g54();
    virtual void g55();
    virtual void g56();
    virtual void g57();
    virtual void g58();
    virtual void g59();
    virtual void g60();
    virtual const std::string& getModeName(); // slot 61, +0x1e8
    virtual void g62();
    virtual int getModeSize(); // slot 63, +0x1f8
    virtual void g64();
    virtual void setModeSize(int n); // slot 65, +0x208
};

class EventManager {
public:
    virtual void e0();
    virtual void e1();
    virtual void e2();
    virtual void e3();
    virtual void e4();
    virtual void post(int a, int b, const char* text, float f); // slot 5, +0x28
};

class ISettings {
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
    virtual void setString(const std::string& name, const std::string& v); // slot 17, +0x88
};

class IAI {
public:
    virtual void a0();
    virtual void a1();
    virtual void a2();
    virtual void a3();
    virtual void a4();
    virtual void setActive(bool b); // slot 5, +0x28
    virtual void a6();
    virtual bool isEnabled(); // slot 7, +0x38
};

class IPlayer {
public:
    virtual void ip0();
    virtual void ip1();
    virtual void ip2();
    virtual void ip3();
    virtual void ip4();
    virtual void ip5();
    virtual void ip6();
    virtual void ip7();
    virtual void ip8();
    virtual void ip9();
    virtual void ip10();
    virtual void ip11();
    virtual void ip12();
    virtual void ip13();
    virtual void ip14();
    virtual void ip15();
    virtual void ip16();
    virtual void ip17();
    virtual void ip18();
    virtual void ip19();
    virtual void ip20();
    virtual void ip21();
    virtual void ip22();
    virtual void ip23();
    virtual void ip24();
    virtual void ip25();
    virtual void ip26();
    virtual void ip27();
    virtual void ip28();
    virtual void ip29();
    virtual void ip30();
    virtual void ip31();
    virtual void ip32();
    virtual void ip33();
    virtual void ip34();
    virtual void ip35();
    virtual void ip36();
    virtual void ip37();
    virtual void ip38();
    virtual void ip39();
    virtual void ip40();
    virtual void ip41();
    virtual void ip42();
    virtual void ip43();
    virtual void ip44();
    virtual void ip45();
    virtual void ip46();
    virtual void ip47();
    virtual void ip48();
    virtual void ip49();
    virtual void ip50();
    virtual void ip51();
    virtual void ip52();
    virtual void ip53();
    virtual void ip54();
    virtual void ip55();
    virtual void ip56();
    virtual void ip57();
    virtual void ip58();
    virtual void ip59();
    virtual void ip60();
    virtual void ip61();
    virtual void ip62();
    virtual void ip63();
    virtual void ip64();
    virtual void ip65();
    virtual void ip66();
    virtual void ip67();
    virtual void ip68();
    virtual void ip69();
    virtual void ip70();
    virtual void ip71();
    virtual void ip72();
    virtual void ip73();
    virtual void ip74();
    virtual void ip75();
    virtual void ip76();
    virtual void ip77();
    virtual void ip78();
    virtual void ip79();
    virtual void ip80();
    virtual void ip81();
    virtual void ip82();
    virtual void ip83();
    virtual void ip84();
    virtual void ip85();
    virtual void ip86();
    virtual void ip87();
    virtual void ip88();
    virtual void ip89();
    virtual void ip90();
    virtual void ip91();
    virtual void ip92();
    virtual void ip93();
    virtual void ip94();
    virtual void ip95();
    virtual void ip96();
    virtual void ip97();
    virtual void ip98();
    virtual void ip99();
    virtual void ip100();
    virtual void ip101();
    virtual void ip102();
    virtual void ip103();
    virtual void ip104();
    virtual void ip105();
    virtual void ip106();
    virtual void ip107();
    virtual void ip108();
    virtual void ip109();
    virtual void ip110();
    virtual void ip111();
    virtual void ip112();
    virtual void ip113();
    virtual void ip114();
    virtual void ip115();
    virtual void ip116();
    virtual void ip117();
    virtual void ip118();
    virtual void ip119();
    virtual void ip120();
    virtual void ip121();
    virtual void ip122();
    virtual void ip123();
    virtual void ip124();
    virtual void ip125();
    virtual void ip126();
    virtual void ip127();
    virtual void ip128();
    virtual void ip129();
    virtual void ip130();
    virtual void ip131();
    virtual void ip132();
    virtual void ip133();
    virtual void ip134();
    virtual void ip135();
    virtual void ip136();
    virtual void ip137();
    virtual void ip138();
    virtual void ip139();
    virtual void ip140();
    virtual void ip141();
    virtual void ip142();
    virtual void ip143();
    virtual void ip144();
    virtual void ip145();
    virtual void ip146();
    virtual void ip147();
    virtual void ip148();
    virtual void ip149();
    virtual void ip150();
    virtual void ip151();
    virtual void ip152();
    virtual void ip153();
    virtual void ip154();
    virtual void ip155();
    virtual void ip156();
    virtual void ip157();
    virtual void ip158();
    virtual void ip159();
    virtual void ip160();
    virtual void ip161();
    virtual void ip162();
    virtual void ip163();
    virtual void ip164();
    virtual void ip165();
    virtual void ip166();
    virtual void ip167();
    virtual void ip168();
    virtual void ip169();
    virtual void ip170();
    virtual void ip171();
    virtual void ip172();
    virtual void ip173();
    virtual void ip174();
    virtual void ip175();
    virtual void ip176();
    virtual void ip177();
    virtual void ip178();
    virtual void ip179();
    virtual void ip180();
    virtual void ip181();
    virtual void ip182();
    virtual void ip183();
    virtual void ip184();
    virtual void ip185();
    virtual void ip186();
    virtual void ip187();
    virtual void ip188();
    virtual void ip189();
    virtual void ip190();
    virtual void ip191();
    virtual void ip192();
    virtual void ip193();
    virtual void playerStep(); // +0x610
};

class PlayerManager {
public:
    virtual void p0();
    virtual void p1();
    virtual void p2();
    virtual void p3();
    virtual void p4();
    virtual void p5();
    virtual void p6();
    virtual void p7();
    virtual void p8();
    virtual void p9();
    virtual void p10();
    virtual void p11();
    virtual void p12();
    virtual void p13();
    virtual void p14();
    virtual std::list<IPlayer*>& getPlayers(); // slot 15, +0x78
};

class ObjectManager {
public:
    virtual void o0();
    virtual void o1();
    virtual void o2();
    virtual void o3();
    virtual void o4();
    virtual void o5();
    virtual void o6();
    virtual void o7();
    virtual void o8();
    virtual void o9();
    virtual void o10();
    virtual void o11();
    virtual void o12();
    virtual void o13();
    virtual void o14();
    virtual void o15();
    virtual void o16();
    virtual void o17();
    virtual void o18();
    virtual void o19();
    virtual void o20();
    virtual void o21();
    virtual void o22();
    virtual void o23();
    virtual void o24();
    virtual void o25();
    virtual void o26();
    virtual void o27();
    virtual void o28();
    virtual void o29();
    virtual void o30();
    virtual void o31();
    virtual void o32();
    virtual void o33();
    virtual void o34();
    virtual void o35();
    virtual void o36();
    virtual void o37();
    virtual void objectsStep1(); // slot 38, +0x130
    virtual void o39();
    virtual void o40();
    virtual void o41();
    virtual void o42();
    virtual void o43();
    virtual void o44();
    virtual void objectsStep2(); // slot 45, +0x168
};

class ObjectTemplateManager {
public:
    virtual void t0();
    virtual void t1();
    virtual void t2();
    virtual void t3();
    virtual void t4();
    virtual void t5();
    virtual void t6();
    virtual void t7();
    virtual void t8();
    virtual void t9();
    virtual void t10();
    virtual void t11();
    virtual void t12();
    virtual void t13();
    virtual void t14();
    virtual void t15();
    virtual void t16();
    virtual void t17();
    virtual void t18();
    virtual void t19();
    virtual void t20();
    virtual void t21();
    virtual void t22();
    virtual void t23();
    virtual void t24();
    virtual void t25();
    virtual void t26();
    virtual void t27();
    virtual void t28();
    virtual void step(); // slot 29, +0xe8
};

class VoipServerConnection {
public:
    static VoipServerConnection* GetInstance();
    void ResetPlayerRouting();
};

namespace world {
class TriggerableManager { public: static TriggerableManager* m_instance; void reset(); };
class TriggerManager { public: static TriggerManager* m_instance; void setupTriggerLinks(); };
class ArtilleryManager { public: static ArtilleryManager* m_instance; void init(); };
class UAVVehicleManager { public: static UAVVehicleManager* m_instance; void init(); };
class ObjectTemplate { public: static void setIsPreCaching(bool b); };
extern ObjectManager* objectManager;
extern ObjectTemplateManager* objectTemplateManager;
extern PlayerManager* playerManager;
}

namespace io { extern FileManager* fileManager; extern Console* mainConsole; }
namespace ai { class AIInstanceServer { public: static IAI* m_iAI; }; }

extern Game* game;
extern EventManager* eventManager;
extern ISettings* settings;

int compareIgnoreCase(const char* a, const char* b);
std::string formatString(const char* fmt, ...);

struct Debug {
    char _pad[0x20];
    std::ostream os;
    char _tail[0x50];
    Debug(int type, const std::string& file, int line, const std::string& tag);
    ~Debug();
};

class GameLogic {
public:
    virtual void gl0();
    virtual void gl1();
    virtual void gl2();
    virtual void gl3();
    virtual void gl4();
    virtual void gl5();
    virtual void gl6();
    virtual void gl7();
    virtual void gl8();
    virtual void gl9();
    virtual void gl10();
    virtual void gl11();
    virtual void gl12();
    virtual void gl13();
    virtual void gl14();
    virtual void gl15();
    virtual void gl16();
    virtual void gl17();
    virtual void gl18();
    virtual void gl19();
    virtual void gl20();
    virtual void gl21();
    virtual void gl22();
    virtual void gl23();
    virtual void gl24();
    virtual void gl25();
    virtual void gl26();
    virtual void gl27();
    virtual void gl28();
    virtual void gl29();
    virtual void gl30();
    virtual void gl31();
    virtual void gl32();
    virtual void gl33();
    virtual void gl34();
    virtual void gl35();
    virtual void gl36();
    virtual void gl37();
    virtual void gl38();
    virtual void gl39();
    virtual void gl40();
    virtual void gl41();
    virtual void gl42();
    virtual void gl43();
    virtual void gl44();
    virtual void gl45();
    virtual void gl46();
    virtual void gl47();
    virtual void gl48();
    virtual void gl49();
    virtual void gl50();
    virtual void gl51();
    virtual void gl52();
    virtual void gl53();
    virtual void gl54();
    virtual void gl55();
    virtual void gl56();
    virtual void gl57();
    virtual void gl58();
    virtual void gl59();
    virtual void gl60();
    virtual void gl61();
    virtual void gl62();
    virtual void gl63();
    virtual void gl64();
    virtual void gl65();
    virtual void gl66();
    virtual void gl67();
    virtual void gl68();
    virtual void gl69();
    virtual void gl70();
    virtual void gl71();
    virtual void gl72();
    virtual void gl73();
    virtual void gl74();
    virtual void gl75();
    virtual void gl76();
    virtual void gl77();
    virtual void gl78();
    virtual bool isServer(); // slot 79
    virtual void gl80();
    virtual void gl81();
    virtual void gl82();
    virtual void gl83();
    virtual void gl84();
    virtual void gl85();
    virtual void gl86();
    virtual void gl87();
    virtual void gl88();
    virtual void gl89();
    virtual void gl90();
    virtual void gl91();
    virtual void gl92();
    virtual void gl93();
    virtual void gl94();
    virtual void gl95();
    virtual void gl96();
    virtual void gl97();
    virtual void gl98();
    virtual void gl99();
    virtual void gl100();
    virtual void gl101();
    virtual void gl102();
    virtual void gl103();
    virtual void gl104();
    virtual void gl105();
    virtual void gl106();
    virtual void gl107();
    virtual void gl108();
    virtual void gl109();
    virtual void gl110();
    virtual void gl111();
    virtual void gl112();
    virtual void gl113();
    virtual void gl114();
    virtual void gl115();
    virtual void gl116();
    virtual void gl117();
    virtual void gl118();
    virtual void gl119();
    virtual void gl120();
    virtual void gl121();
    virtual void gl122();
    virtual void gl123();
    virtual void gl124();
    virtual void gl125();
    virtual void gl126();
    virtual void gl127();
    virtual void gl128();
    virtual void gl129();
    virtual void gl130();
    virtual void gl131();
    virtual void gl132();
    virtual void gl133();
    virtual void gl134();
    virtual void gl135();
    virtual void gl136();
    virtual void gl137();
    virtual void gl138();
    virtual void gl139();
    virtual void gl140();
    virtual void gl141();
    virtual void gl142();
    virtual void gl143();
    virtual void gl144();
    virtual void gl145();
    virtual void gl146();
    virtual void gl147();
    virtual void gl148();
    virtual void gl149();
    virtual void gl150();
    virtual void gl151();
    virtual void gl152();
    virtual void gl153();
    virtual void gl154();
    virtual void gl155();
    virtual void gl156();
    virtual void gl157();
    virtual void gl158();
    virtual void gl159();
    virtual void gl160();
    virtual void gl161();
    virtual void gl162();
    virtual void gl163();
    virtual void gl164();
    virtual void gl165();
    virtual void gl166();
    virtual void gl167();
    virtual void gl168();
    virtual void gl169();
    virtual void gl170();
    virtual void gl171();
    virtual void gl172();
    virtual void gl173();
    virtual void gl174();
    virtual void gl175();
    virtual void gl176();
    virtual void gl177();
    virtual void gl178();
    virtual void gl179();
    virtual void loadStep0(); // slot 180
    virtual void gl181();
    virtual void gl182();
    virtual bool loadStep3(); // slot 183
    virtual void loadStep4(); // slot 184
    virtual bool loadStep5(); // slot 185
    virtual bool loadStep6(const std::string& path); // slot 186
    virtual bool loadStep7(const std::string& path); // slot 187
    virtual void loadStep8(); // slot 188
    virtual bool loadStep9(); // slot 189
    virtual void loadStep10(); // slot 190
    bool load(const std::string& path);
    bool convertDynamicObjects();
    void beginLoadStats(const std::string& path);
    char _padA[0xac - 8];
    bool m_loaded;            // +0xac
    bool m_flagAd;            // +0xad
    char _padB[0x3a0 - 0xae];
    bool m_precaching;        // +0x3a0
    char _padC[0x418 - 0x3a1];
    std::string m_levelPath;  // +0x418
    char _padD[0x448 - 0x420];
    bool m_abort;             // +0x448
};

static const short sizes[] = { 0x10, 0x20, 0x40, 0x80 };

bool GameLogic::load(const std::string& path)
{
    if (world::TriggerableManager::m_instance)
        world::TriggerableManager::m_instance->reset();
    loadStep0();
    if (m_loaded || m_abort)
        return false;

    std::string levelName(path);
    levelName.erase(0, 7);
    if (levelName.size() != 0)
        levelName.erase(levelName.size() - 1);
    io::fileManager->addArchive(std::string("*levels"));
    if (compareIgnoreCase(levelName.c_str(), "Midnight_Sun") == 0 ||
        compareIgnoreCase(levelName.c_str(), "OperationHarvest") == 0 ||
        compareIgnoreCase(levelName.c_str(), "OperationRoadRage") == 0) {
        io::fileManager->setMounting(true);
        io::fileManager->mountArchive(std::string("Booster_server.zip"), std::string("Objects"), true);
        io::fileManager->setMounting(false);
    } else {
        io::fileManager->addArchive(std::string("Booster_server.zip"));
        io::fileManager->addArchive(std::string("Booster_client.zip"));
    }
    m_levelPath.assign(std::string(path, 0, path.size() - 1));
    io::fileManager->setMounting(true);
    io::fileManager->mountArchive(m_levelPath + "/server.zip", m_levelPath, true);
    io::mainConsole->executeFile(m_levelPath + "/ServerArchives.con");
    io::fileManager->setMounting(false);

    int wanted = game->getModeSize();
    std::string modeName(game->getModeName());
    short chosen = (short)wanted;
    {
    std::string gmPath = ("GameModes/" + modeName) + "/";
    std::vector<int> found;
    for (int i = 0; i < 4; ++i) {
        std::ostringstream oss;
        oss << path << gmPath << sizes[i] << "/GamePlayObjects.con";
        if (io::fileManager->exists(oss.str()))
            found.push_back((int)sizes[i]);
    }
    if (found.empty()) {
        Debug(6, std::string("Game/GameLogic/GameLogic.cpp"), 0x47b, std::string("")).os
            << "Unable to find GamePlayObjects.con";
    } else {
        int last = found.back();
        if (wanted < last) {
            for (std::vector<int>::iterator it = found.begin(); it != found.end(); ++it) {
                if (wanted <= *it) {
                    chosen = (short)*it;
                    break;
                }
            }
        } else {
            chosen = (short)last;
        }
    }
    done_in: ;
    }
done:
    game->setModeSize((int)chosen);
    settings->setString(std::string("GLGameLevelPath"), path);
    beginLoadStats(path);
    loadStep10();
    eventManager->post(10, 6, "Loading Templates..", 0.0f);
    io::mainConsole->execute(std::string("Settings/ScoreManagerSetup.con"));
    if (ai::AIInstanceServer::m_iAI && ai::AIInstanceServer::m_iAI->isEnabled()) {
        io::mainConsole->execute(std::string("AI/AIDefault.ai"));
        ai::AIInstanceServer::m_iAI->setActive(true);
        io::mainConsole->execute(std::string("AI/AIBehaviours.ai"));
    }
    if (loadStep7(std::string("Objects/"))) {
        io::mainConsole->execute(std::string("Common/Material/MaterialManagerSettings.con"));
        if (!m_abort && loadStep6(path) && (loadStep8(), !m_abort)) {
            const char* side = isServer() ? "host" : "client";
            if (ai::AIInstanceServer::m_iAI && ai::AIInstanceServer::m_iAI->isEnabled()) {
                io::mainConsole->execute(std::string("AI/AIRadioMessages.ai"));
                if (chosen != 0) {
                    std::string gp = formatString("GameModes/%s/%d", modeName.c_str(), (unsigned)chosen);
                    io::mainConsole->execute((path + gp) + "/AI/StrategicAreas.ai");
                    io::mainConsole->execute(path + "AI/AI.ai");
                    std::string strat((path + gp) + "/AI/Strategies.ai");
                    if (io::fileManager->exists(strat)) {
                        io::mainConsole->execute(strat);
                    } else {
                        io::mainConsole->execute(std::string("AI/AIDefaultStrategies.ai"));
                        io::mainConsole->execute(std::string("AI/AIDefaultStrategiesAdd.ai"));
                    }
                    if (m_abort)
                        return false;
                }
            }
            world::objectManager->objectsStep1();
            io::mainConsole->execute(path + "StaticObjects.con");
            if (!m_abort && convertDynamicObjects()) {
                {
                std::string gp2 = formatString("GameModes/%s/%d/", modeName.c_str(), (int)chosen);
                bool gpOk = io::mainConsole->execute((path + gp2) + "GamePlayObjects.con", side); if (!gpOk) {
                    Debug(6, std::string("Game/GameLogic/GameLogic.cpp"), 0x4f8, std::string("")).os
                        << "Unable to load " << path << gp2 << "GamePlayeObjects.con";
                }
                if (m_abort)
                    return false;
                }
                {
                    io::mainConsole->execute(std::string("Common/Score/ScoreManagerSettings.con"));
                    if (isServer())
                        io::mainConsole->execute(path + "Triggerables.con", side);
                    world::objectManager->objectsStep1();
                    world::objectManager->objectsStep2();
                    world::ObjectTemplate::setIsPreCaching(true);
                    m_precaching = true;
                    world::objectTemplateManager->step();
                    if (!m_abort && loadStep3() && loadStep9() && loadStep5()) {
                        loadStep4();
                        world::objectManager->objectsStep1();
                        world::objectManager->objectsStep2();
                        m_precaching = false;
                        world::ObjectTemplate::setIsPreCaching(false);
                        if (isServer())
                            VoipServerConnection::GetInstance()->ResetPlayerRouting();
                        if (!m_abort) {
                            std::list<IPlayer*>& pl = world::playerManager->getPlayers();
                            for (std::list<IPlayer*>::iterator it = pl.begin(); it != pl.end(); ++it)
                                (*it)->playerStep();
                            if (world::TriggerManager::m_instance)
                                world::TriggerManager::m_instance->setupTriggerLinks();
                            if (world::ArtilleryManager::m_instance)
                                world::ArtilleryManager::m_instance->init();
                            if (world::UAVVehicleManager::m_instance)
                                world::UAVVehicleManager::m_instance->init();
                            m_loaded = true;
                            m_flagAd = true;
                            return true;
                        }
                    }
                }
            }
        }
    }
    return false;
}

} }
