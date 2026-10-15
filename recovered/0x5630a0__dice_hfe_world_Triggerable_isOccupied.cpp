// FUNCTION: BF2 0x5630a0
#include <list>
extern "C" float sqrtf(float);
namespace dice { namespace hfe {

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
    virtual bool v27();
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
    virtual IObject* getControlledObject();
};

class IPlayerManager {
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
    virtual std::list<IPlayer*>& getPlayers();
};

extern IPlayerManager* playerManager;

class TriggerableManager {
public:
    char m_pad0[0x208];
    unsigned int m_types;
    float m_radius;
};

class Triggerable : public IObject {
public:
    bool isOccupied();
private:
    char m_pad0[0x248 - 0x58];
    TriggerableManager* m_manager;
};

bool Triggerable::isOccupied() {
    std::list<IPlayer*>& players = playerManager->getPlayers();
    for (std::list<IPlayer*>::iterator it = players.begin(); it != players.end(); ++it) {
        IPlayer* pl = *it;
        if (!pl->v27())
            continue;
        IObject* obj = pl->getControlledObject();
        if (!obj)
            continue;
        if (obj->m_parent && getRootParent(obj) != getRootParent(this))
            continue;
        const Vec3& a = obj->getPosition();
        const Vec3& b = getPosition();
        float dx = a.x - b.x;
        float dy = a.y - b.y;
        float dz = a.z - b.z;
        if (sqrtf(dx * dx + dy * dy + dz * dz) <= m_manager->m_radius)
            return true;
    }
    return false;
}

} } }
