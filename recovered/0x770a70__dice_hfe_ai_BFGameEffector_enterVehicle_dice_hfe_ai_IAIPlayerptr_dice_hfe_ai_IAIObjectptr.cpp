// FUNCTION: BF2 0x770a70
#define V(n) virtual void _v##n();
#define V10(a) V(a##0) V(a##1) V(a##2) V(a##3) V(a##4) V(a##5) V(a##6) V(a##7) V(a##8) V(a##9)

namespace dice { namespace hfe {

class Game {
public:
    V10(0) V10(1) V10(2) V10(3) V(40)
    virtual bool enterVehicle(void* player, void* object, int seat);
};

extern Game* game;

namespace ai {

class IAIPlayer {
public:
    virtual void _v0();
    virtual void _v1();
    virtual void _v2();
    virtual void* getPlayer();
};

class IAIObject {
public:
    virtual void _v0();
    virtual void _v1();
    virtual void _v2();
    virtual void _v3();
    virtual void _v4();
    virtual void _v5();
    virtual void _v6();
    virtual void _v7();
    virtual void* getObject();
};

class BFGameEffector {
public:
    virtual ~BFGameEffector();
    virtual void _v1();
    virtual bool enterVehicle(IAIPlayer* player, IAIObject* object);
};

bool BFGameEffector::enterVehicle(IAIPlayer* player, IAIObject* object) {
    return game->enterVehicle(player->getPlayer(), object->getObject(), 0);
}

} } }
