// FUNCTION: BF2 0x7713b0
#define V(n) virtual void _v##n();
#define V10(a) V(a##0) V(a##1) V(a##2) V(a##3) V(a##4) V(a##5) V(a##6) V(a##7) V(a##8) V(a##9)
namespace dice { namespace hfe {
namespace world {
class IPlayer {
public:
    V10(0) V10(1) V10(2) V10(3) V10(4) V10(5) V10(6) V(70)
    virtual bool isAwake();
};
class IObject {
public:
    char _pad0[0x88];
    IPlayer* m_player;
};
class ObjectManager {
public:
    V10(0) V(10) V(11)
    virtual IObject* getObject(unsigned int id);
};
extern ObjectManager* objectManager;
}
namespace ai {
class BFObjectEnvironment {
public:
    bool isAsleep(unsigned int id) const;
};
bool BFObjectEnvironment::isAsleep(unsigned int id) const {

    dice::hfe::world::IObject* o = dice::hfe::world::objectManager->getObject(id);
    if (!o) return false;
    dice::hfe::world::IPlayer* p = o->m_player;
    if (!p) goto ret_true;
    if (p->isAwake()) goto ret_true;
    return false;
ret_true:
    return true;
    
}
}}}
