// FUNCTION: BF2 0x42a610
namespace dice { namespace hfe {

struct Vec3 {
    float x, y, z;
};

class GameEvent {
public:
    virtual ~GameEvent();
    virtual void _v08();
    virtual void _v10();
    virtual void _v18();
    virtual void _v20();
    virtual void _v28();
    virtual void _v30();
    virtual void _v38();
    virtual void _v40();
    virtual bool executeClient(); // slot +0x48
};

class EventManager {
public:
    virtual void _v00();
    virtual void _v08();
    virtual void _v10();
    virtual void _v18();
    virtual void _v20();
    virtual void triggerEvent(int a, int b, void* data, float delay); // slot +0x28
};

extern EventManager* eventManager;

namespace world {

class IPlayer;

class PlayerManager {
public:
    virtual void _v00(); virtual void _v08(); virtual void _v10(); virtual void _v18();
    virtual void _v20(); virtual void _v28(); virtual void _v30(); virtual void _v38();
    virtual IPlayer* getPlayer(int id); // slot 8 (+0x40)
};

extern PlayerManager* playerManager;

class IObjectTemplate {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual unsigned int getClassID(); // slot 4 (+0x20)
};

class IObject {
public:
    virtual void v0();
    char _pad[0x20];
    IObjectTemplate* m_template; // +0x28
};

extern const unsigned int CID_SoldierTemplate;

} // namespace world

class Player {
public:
    virtual void _v00(); virtual void _v08(); virtual void _v10(); virtual void _v18();
    virtual void _v20(); virtual void _v28(); virtual void _v30(); virtual void _v38();
    virtual void _v40(); virtual void _v48(); virtual void _v50(); virtual void _v58();
    virtual void _v60(); virtual void _v68(); virtual void _v70(); virtual void _v78();
    virtual void _v80(); virtual void _v88();
    virtual world::IObject* getSoldier(); // slot 18 (+0x90)
};

Player* getPlayer(world::IPlayer*);

class Ragdoll {
public:
    virtual void v0();
    // slots up to 45 (+0x168) and 47 (+0x178)
};

class KilledByEvent : public GameEvent {
public:
    virtual ~KilledByEvent();
    virtual bool executeClient();

    char _pad0[0x8];             // +0x8 (vptr is at +0x0)
    unsigned char m_victimId;    // +0x10
    unsigned char m_killerId;    // +0x11
    char _pad1[0xe];             // +0x12..+0x20
    Vec3 m_force;                // +0x20
    unsigned char m_boneId;      // +0x2c
};

struct IRagdoll {
    virtual void _v00();
    // 0x168 / 8 = 45
    virtual void _v08(); virtual void _v10(); virtual void _v18(); virtual void _v20();
    virtual void _v28(); virtual void _v30(); virtual void _v38(); virtual void _v40();
    virtual void _v48(); virtual void _v50(); virtual void _v58(); virtual void _v60();
    virtual void _v68(); virtual void _v70(); virtual void _v78(); virtual void _v80();
    virtual void _v88(); virtual void _v90(); virtual void _v98(); virtual void _va0();
    virtual void _va8(); virtual void _vb0(); virtual void _vb8(); virtual void _vc0();
    virtual void _vc8(); virtual void _vd0(); virtual void _vd8(); virtual void _ve0();
    virtual void _ve8(); virtual void _vf0(); virtual void _vf8(); virtual void _v100();
    virtual void _v108(); virtual void _v110(); virtual void _v118(); virtual void _v120();
    virtual void _v128(); virtual void _v130(); virtual void _v138(); virtual void _v140();
    virtual void _v148(); virtual void _v150(); virtual void _v158(); virtual void _v160();
    virtual void applyImpulseBone(unsigned char bone, int flag); // slot 45 (+0x168)
    virtual void _v170();
    virtual void applyImpulse(Vec3 const* force, int flag);      // slot 47 (+0x178)
};

bool KilledByEvent::executeClient()
{
    eventManager->triggerEvent(0, 3, &m_victimId, 0.0f);
    world::IPlayer* ip = world::playerManager->getPlayer(m_killerId);
    Player* p = getPlayer(ip);
    if (p) {
        world::IObject* s = p->getSoldier();
        if (s && s->m_template->getClassID() == world::CID_SoldierTemplate) {
            IRagdoll* rd = *(IRagdoll**)((char*)s + 0x78);
            rd->applyImpulseBone(m_boneId, 1);
            rd->applyImpulse(&m_force, 1);
        }
    }
    return true;
}

} }
