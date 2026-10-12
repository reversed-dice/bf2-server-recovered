// FUNCTION: BF2 0x4a3c70
#include <map>
#include <utility>

namespace dice { namespace hfe {

class WorldPref {
public:
    static unsigned int getTickCount();
};

namespace world {

extern unsigned int const IID_IProjectileObject;

class IProjectileObject {
public:
#define V(n) virtual void _v##n();
    V(0) V(1) V(2) V(3) V(4) V(5) V(6) V(7) V(8) V(9) V(10)
    V(11) V(12) V(13) V(14) V(15) V(16) V(17) V(18) V(19) V(20)
    V(21) V(22) V(23) V(24) V(25) V(26) V(27) V(28) V(29) V(30)
    V(31) V(32) V(33) V(34) V(35) V(36) V(37) V(38) V(39) V(40)
    V(41) V(42) V(43) V(44) V(45) V(46) V(47) V(48) V(49) V(50)
    V(51) V(52) V(53) V(54) V(55) V(56) V(57) V(58) V(59) V(60)
    V(61) V(62)
#undef V
    virtual void setTick(unsigned int tick);
    virtual int getTick();
    virtual void _v65();
    virtual bool isNetworkable();
};

class IObject {
public:
    virtual void _v0();
    virtual void _v1();
    virtual void _v2();
    virtual void* queryInterface(unsigned int iid);
};

class PlayerScoreData {
public:
    char _pad[0x90];
    std::map<unsigned int, unsigned short> bulletsGivingDamage;

    void addBulletsGivingDamage(unsigned int id, int count, IObject* obj);
};

void PlayerScoreData::addBulletsGivingDamage(unsigned int id, int count, IObject* obj)
{
    if (obj) {
        IProjectileObject* proj = static_cast<IProjectileObject*>(obj->queryInterface(IID_IProjectileObject));
        if (proj) {
            if (!proj->isNetworkable())
                return;
            if (proj->getTick() != 0)
                return;
            proj->setTick(WorldPref::getTickCount());
        }
    }
    std::map<unsigned int, unsigned short>::iterator it = bulletsGivingDamage.find(id);
    if (it != bulletsGivingDamage.end()) {
        it->second += (unsigned short)count;
    } else {
        bulletsGivingDamage.insert(std::make_pair(id, (unsigned short)1));
    }
}

} } }
