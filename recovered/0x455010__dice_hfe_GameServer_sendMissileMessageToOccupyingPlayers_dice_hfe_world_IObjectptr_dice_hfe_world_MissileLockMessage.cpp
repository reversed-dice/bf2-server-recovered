// FUNCTION: BF2 0x455010
// BF2_FLAGS: -fno-strict-aliasing
#include <map>

namespace dice { namespace hfe {

enum EventCategory { EC_0 = 0, EC_1 = 1, EC_2 = 2, EC_3 = 3 };

class PostRemoteEvent;

namespace world {

class IObject;
class IPlayer;
class IPlayerControlObject;
class IWeaponObject;
class ITemplate;
class IPlayerControlObjectTemplate;

extern IObject* getRootParent(IObject const* obj);

extern unsigned int IID_IPlayerControlObject;
extern unsigned int IID_IWeaponObject;
extern unsigned int IID_IPlayerControlObjectTemplate;

struct MissileLockMessage {
    int m_0;
    int m_4;
    int m_8;
    int m_c;
};

class ITemplate {
public:
    virtual void _v0();
    virtual void _v1();
    virtual void _v2();
    virtual void* queryInterface(unsigned int iid);   // 0x18
};

class IPlayerControlObjectTemplate {
public:
#define V(n) virtual void _v##n();
    V(0) V(1) V(2) V(3) V(4) V(5) V(6) V(7) V(8)
#undef V
    virtual int method_0x48();                        // 0x48
};

class Container {
public:
#define V(n) virtual void _v##n();
    V(0) V(1) V(2) V(3) V(4) V(5) V(6) V(7) V(8) V(9) V(10)
    V(11) V(12) V(13) V(14) V(15) V(16) V(17) V(18) V(19) V(20)
#undef V
    virtual int method_0xa8();                        // 0xa8

    char _pad[0x20];
    ITemplate* m_template;                            // 0x28
    char _pad2[0x38];
    void* m_handle;                                   // 0x68
};

class IObject {
public:
    virtual void _v0();
    virtual void _v1();
    virtual void _v2();
    virtual void* queryInterface(unsigned int iid);   // 0x18

    char _pad[0x20];
    ITemplate* m_template;                            // 0x28
    char _pad2[0x20];
    IObject* m_parentRef;                             // 0x50
    IObject* m_nextSibling;                           // 0x58
};

class IPlayer {
public:
#define V(n) virtual void _v##n();
    V(0) V(1) V(2) V(3) V(4) V(5) V(6) V(7) V(8) V(9) V(10)
    V(11) V(12) V(13) V(14) V(15) V(16) V(17)
    virtual Container* getVehicle();                  // 0x90
    V(19) V(20)
    virtual int getId();                              // 0xa8
    V(22)
    virtual bool getIsRemote();                       // 0xb8
    V(24)
    virtual bool getIsAIPlayer();                     // 0xc8
#undef V
#define V(n) virtual void _v##n();
    V(26) V(27) V(28) V(29) V(30) V(31) V(32) V(33) V(34) V(35)
    V(36) V(37) V(38) V(39) V(40) V(41) V(42) V(43) V(44) V(45)
    V(46) V(47) V(48) V(49) V(50) V(51) V(52) V(53) V(54) V(55)
    V(56) V(57)
#undef V
    virtual int getTeam();                            // 0x1d0
};

class IPlayerControlObject {
public:
    virtual void _v0();
    virtual void _v1();
    virtual void _v2();
    virtual void _v3();
    virtual IPlayer* getPlayer();                     // 0x20
#define V(n) virtual void _v##n();
    V(5) V(6) V(7) V(8) V(9) V(10) V(11) V(12) V(13) V(14)
    V(15) V(16) V(17) V(18) V(19) V(20) V(21) V(22) V(23)
#undef V
    virtual std::map<int, IPlayerControlObject*>& getOccupyingPlayers();   // 0xc0
};

class IWeaponObject {
public:
    virtual void _v0();
    virtual void _v1();
    virtual void _v2();
    virtual void* queryInterface(unsigned int iid);   // 0x18
#define V(n) virtual void _v##n();
    V(4) V(5) V(6) V(7) V(8) V(9) V(10) V(11) V(12) V(13)
    V(14) V(15) V(16) V(17) V(18) V(19) V(20) V(21) V(22) V(23)
    V(24)
#undef V
    virtual IPlayer* method_0xc8();                   // 0xc8
#define V(n) virtual void _v##n();
    V(26) V(27) V(28) V(29) V(30) V(31) V(32) V(33) V(34) V(35)
    V(36) V(37) V(38) V(39) V(40) V(41) V(42) V(43) V(44) V(45)
    V(46) V(47) V(48) V(49) V(50) V(51) V(52) V(53) V(54) V(55)
    V(56) V(57) V(58) V(59) V(60) V(61) V(62) V(63) V(64) V(65)
    V(66) V(67) V(68) V(69) V(70) V(71) V(72) V(73) V(74) V(75)
#undef V
    virtual int method_0x260();                       // 0x260
};

class ObjectManager {
public:
#define V(n) virtual void _v##n();
    V(0) V(1) V(2) V(3) V(4) V(5) V(6) V(7) V(8) V(9) V(10) V(11)
#undef V
    virtual IObject* method_0x60(int id);             // 0x60
};

extern ObjectManager* objectManager;

} } }

namespace dice { namespace hfe {

class GameEvent {
public:
    virtual ~GameEvent();
};

class PostRemoteEvent : public GameEvent {
public:
    PostRemoteEvent(EventCategory cat, unsigned int id, bool b, void* data, unsigned int size, float delay);
    char _pad[0x50];
};

class Game {
public:
#define V(n) virtual void _v##n();
    V(0) V(1) V(2) V(3) V(4) V(5) V(6) V(7) V(8) V(9) V(10)
    V(11) V(12) V(13) V(14) V(15) V(16) V(17) V(18) V(19) V(20)
    V(21) V(22) V(23) V(24) V(25) V(26) V(27) V(28) V(29) V(30)
    V(31) V(32) V(33) V(34) V(35) V(36) V(37)
#undef V
    virtual void sendEventToPlayer(int player, PostRemoteEvent* e);   // 0x130
};

extern Game* game;

class EventManager {
public:
#define V(n) virtual void _v##n();
    V(0) V(1) V(2) V(3) V(4)
#undef V
    virtual void sendEvent(int cat, int type, void* data, float delay);   // 0x28
};

extern EventManager* eventManager;

class GameServer : public Game {
public:
    void sendMissileMessageToOccupyingPlayers(world::IObject* obj, world::MissileLockMessage msg);
};

namespace ai {

class ICourier {
public:
    virtual void _v0();
    virtual void _v1();
    virtual void sendEvent(void* a, void* b);         // 0x10
};

class BFSingletonServer {
public:
    static ICourier* m_iaiEventCourier;
};

}

void GameServer::sendMissileMessageToOccupyingPlayers(world::IObject* obj, world::MissileLockMessage msg)
{
    world::IObject* p = world::getRootParent(obj);
    world::IPlayerControlObject* pl = 0;
    while (p != 0) {
        pl = (world::IPlayerControlObject*)p->queryInterface(world::IID_IPlayerControlObject);
        if (pl != 0)
            break;
        p = p->m_parentRef;
    }
    if (p == 0)
        return;

    std::map<int, world::IPlayerControlObject*> players = pl->getOccupyingPlayers();

    for (std::map<int, world::IPlayerControlObject*>::iterator it = players.begin(); it != players.end(); ++it) {
        world::IPlayer* player = it->second->getPlayer();
        if (player == 0)
            continue;
        if (player->getIsAIPlayer() && msg.m_4 != -1) {
            world::IObject* wobj = world::objectManager->method_0x60(msg.m_8);
            if (wobj == 0)
                continue;
            world::IWeaponObject* weapon = (world::IWeaponObject*)wobj->queryInterface(world::IID_IWeaponObject);
            if (weapon == 0)
                continue;
            world::IPlayer* owner = weapon->method_0xc8();
            if (owner == 0)
                continue;
            if (owner->getTeam() == player->getTeam())
                continue;
            world::Container* veh = player->getVehicle();
            world::IPlayerControlObjectTemplate* tmpl = (world::IPlayerControlObjectTemplate*)veh->m_template->queryInterface(world::IID_IPlayerControlObjectTemplate);
            if (tmpl == 0)
                continue;
            int tmplId = tmpl->method_0x48();
            int kind = weapon->method_0x260();
            bool skipKind = false;
            if (kind == 3) {
                if (tmplId == 2 || tmplId == 3)
                    skipKind = true;
            }
            bool skipId = (kind == 1) && (tmplId == 0);
            if (!skipKind && !skipId)
                ai::BFSingletonServer::m_iaiEventCourier->sendEvent(veh->m_handle, &msg);
        } else {
            if (!player->getIsRemote()) {
                eventManager->sendEvent(2, 0x2c, &msg, 0.0f);
            } else {
                game->sendEventToPlayer(player->getId(), new PostRemoteEvent(EC_2, 0x2c, false, &msg, 0x10, 0.0f));
            }
        }
    }
}

} }
