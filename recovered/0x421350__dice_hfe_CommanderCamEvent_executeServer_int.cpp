// FUNCTION: BF2 0x421350
namespace dice { namespace hfe {

struct Vec3 { float x, y, z; };


class IBase {
public:
    virtual void addRef(); virtual void getRef(); virtual void release();
    virtual IBase* queryInterface(unsigned int iid);
};
extern IBase* game;
extern unsigned int IID_IGameServer;

namespace world {
class ITemplate {
public:
    virtual void t0(); virtual void t1(); virtual void t2(); virtual void t3();
    virtual unsigned int getClassID();
};
class IObject {
public:
    virtual void o0();
    char _pad[0x20];
    ITemplate* m_template;
};
class OverheadCamera : public IObject {
public:
    void forceSetPosition(const Vec3& pos);
};
extern unsigned int CID_OverheadCameraTemplate;

class IPlayer {
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
    virtual void p15();
    virtual void p16();
    virtual void p17();
    virtual void p18();
    virtual void p19();
    virtual void p20();
    virtual void p21();
    virtual void p22();
    virtual void p23();
    virtual void p24();
    virtual void p25();
    virtual void p26();
    virtual void p27();
    virtual void p28();
    virtual void p29();
    virtual void p30();
    virtual void p31();
    virtual void p32();
    virtual void p33();
    virtual void p34();
    virtual void p35();
    virtual void p36();
    virtual void p37();
    virtual void p38();
    virtual void p39();
    virtual void p40();
    virtual void p41();
    virtual void p42();
    virtual void p43();
    virtual void p44();
    virtual void p45();
    virtual void p46();
    virtual void p47();
    virtual void p48();
    virtual void p49();
    virtual void p50();
    virtual void p51();
    virtual void p52();
    virtual void p53();
    virtual void p54();
    virtual void p55();
    virtual void p56();
    virtual void p57();
    virtual int getTeam();          // 0x1d0
    virtual void p59(); virtual void p60(); virtual void p61(); virtual void p62(); virtual void p63();
    virtual void p64(); virtual void p65(); virtual void p66(); virtual void p67(); virtual void p68();
    virtual bool isCommander();     // 0x228
};
class IPlayerManager {
public:
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual IPlayer* getPlayerFromId(int id);   // 0x40
};
extern IPlayerManager* playerManager;
}

class ISquadManager {
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
    virtual void s17();
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
    virtual int getCommander(int team);                     // 0xe0
    virtual world::IObject* getCommanderCamera(int team);   // 0xe8
};
extern ISquadManager* squadManager;

class CommanderCamEvent {
public:
    virtual ~CommanderCamEvent();
    bool executeServer(int playerId);
    char _pad[8];
    Vec3 m_pos;
};

bool CommanderCamEvent::executeServer(int playerId)
{
    if (!game->queryInterface(IID_IGameServer))
        return false;
    world::IPlayer* player = world::playerManager->getPlayerFromId(playerId);
    if (!player)
        return false;
    if (!player->isCommander()) {
        world::playerManager->getPlayerFromId(squadManager->getCommander(player->getTeam()));
        return false;
    }
    if (!squadManager)
        return true;
    world::IObject* cam = squadManager->getCommanderCamera(player->getTeam());
    if (!cam)
        return false;
    if (cam->m_template->getClassID() != world::CID_OverheadCameraTemplate)
        return false;
    static_cast<world::OverheadCamera*>(cam)->forceSetPosition(m_pos);
    return false;
}

} }
