// BF2_FLAGS: -fcrossjumping
// FUNCTION: BF2 0x562ee0
#include <list>
#include <math.h>

namespace dice { namespace hfe {

namespace io {
struct PlayerInput {
    char _pad[0x111];
};
}

struct Vec3 {
    float x, y, z;
};

namespace world {

class IObject {
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
    virtual const Vec3& getPosition();
    char m_pad0[0x50 - 8];
    IObject* m_parent;
};

IObject* getRootParent(const IObject* obj);

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
    virtual bool getIsAIPlayer() const;
    virtual void p26();
    virtual bool getIsAlive() const;
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
    virtual io::PlayerInput* getAIPlayerInput() const;
    virtual void p40();
    virtual IObject* getDefaultVehicle();
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
    virtual void p58();
    virtual void p59();
    virtual void p60();
    virtual void p61();
    virtual void p62();
    virtual void p63();
    virtual void p64();
    virtual void p65();
    virtual void p66();
    virtual void p67();
    virtual void p68();
    virtual void p69();
    virtual void p70();
    virtual void p71();
    virtual void p72();
    virtual void p73();
    virtual void p74();
    virtual void p75();
    virtual void p76();
    virtual void p77();
    virtual void p78();
    virtual void p79();
    virtual void p80();
    virtual void p81();
    virtual void p82();
    virtual void p83();
    virtual void p84();
    virtual void p85();
    virtual void p86();
    virtual void p87();
    virtual void p88();
    virtual void p89();
    virtual void p90();
    virtual void p91();
    virtual void p92();
    virtual void p93();
    virtual void p94();
    virtual void p95();
    virtual void p96();
    virtual void p97();
    virtual void p98();
    virtual void p99();
    virtual void p100();
    virtual void p101();
    virtual void p102();
    virtual void p103();
    virtual void p104();
    virtual void p105();
    virtual void p106();
    virtual void p107();
    virtual void p108();
    virtual void p109();
    virtual void p110();
    virtual void p111();
    virtual void p112();
    virtual void p113();
    virtual void p114();
    virtual void p115();
    virtual void p116();
    virtual void p117();
    virtual void p118();
    virtual void p119();
    virtual void p120();
    virtual void p121();
    virtual void p122();
    virtual void p123();
    virtual void p124();
    virtual void p125();
    virtual void p126();
    virtual void p127();
    virtual void p128();
    virtual void p129();
    virtual void p130();
    virtual void p131();
    virtual void p132();
    virtual void p133();
    virtual void p134();
    virtual void p135();
    virtual void p136();
    virtual void p137();
    virtual void p138();
    virtual void p139();
    virtual void p140();
    virtual void p141();
    virtual void p142();
    virtual void p143();
    virtual void p144();
    virtual void p145();
    virtual void p146();
    virtual void p147();
    virtual void p148();
    virtual void p149();
    virtual void p150();
    virtual void p151();
    virtual void p152();
    virtual void p153();
    virtual void p154();
    virtual void p155();
    virtual void p156();
    virtual void p157();
    virtual void p158();
    virtual void p159();
    virtual void p160();
    virtual void p161();
    virtual void p162();
    virtual void p163();
    virtual void p164();
    virtual void p165();
    virtual void p166();
    virtual void p167();
    virtual void p168();
    virtual void p169();
    virtual void p170();
    virtual void p171();
    virtual void p172();
    virtual void p173();
    virtual void p174();
    virtual void p175();
    virtual void p176();
    virtual void p177();
    virtual void p178();
    virtual void p179();
    virtual void p180();
    virtual void p181();
    virtual void p182();
    virtual void p183();
    virtual void p184();
    virtual void p185();
    virtual void p186();
    virtual void p187();
    virtual void p188();
    virtual io::PlayerInput getPlayerInput();
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
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual std::list<IPlayer*>& getPlayers();
};

extern IPlayerManager* playerManager;

class TriggerableManager {
public:
    unsigned char m_pad0[0x208];
    unsigned int m_types;
    float m_radius;
};

class Triggerable : public IObject {
public:
    unsigned int getTypes() const;
    void playActivateSound();
    bool checkTriggerableArea();
private:
    unsigned char m_pad1[0x248 - 0x58];
    TriggerableManager* m_manager;
};

bool Triggerable::checkTriggerableArea() {
    std::list<IPlayer*>& players = playerManager->getPlayers();
    for (std::list<IPlayer*>::iterator it = players.begin(); it != players.end(); ++it) {
        IPlayer* player = *it;
        if (!player->getIsAlive())
            continue;
        IObject* vehicle = player->getDefaultVehicle();
        if (!vehicle)
            continue;
        if (vehicle->m_parent && getRootParent(vehicle) != getRootParent(this))
            continue;
        const Vec3& a = vehicle->getPosition();
        const Vec3& b = getPosition();
        float dx = a.x - b.x;
        float dy = a.y - b.y;
        float dz = a.z - b.z;
        if (sqrtf(dx * dx + dy * dy + dz * dz) <= m_manager->m_radius) {
            unsigned int types = getTypes();
            if (types == 1) {
                io::PlayerInput input;
                input = player->getPlayerInput();
                if ((*(unsigned char*)((char*)&input + 0x101) & 4) != 0 && *(float*)((char*)&input + 0x28) > 0.5f) {
                    playActivateSound();
                    return true;
                }
                if (player->getIsAIPlayer()) {
                    io::PlayerInput* ai = player->getAIPlayerInput();
                    if ((*(unsigned char*)((char*)ai + 0x101) & 4) != 0 && *(float*)((char*)ai + 0x28) > 0.5f) {
                        playActivateSound();
                        return true;
                    }
                }
            } else if (types == 3) {
                playActivateSound();
                return true;
            }
        }
    }
    return false;
}

} } }
