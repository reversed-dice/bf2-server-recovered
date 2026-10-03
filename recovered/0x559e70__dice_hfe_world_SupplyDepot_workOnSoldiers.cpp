// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x559e70
#include <list>
extern "C" float sqrtf(float);
namespace dice { namespace hfe {

struct Vec3 {
    float x, y, z;
};

namespace world {

extern int IID_IPlayerControlObject;

class IObject {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void* getInterface(int iid);
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

class IPlayerControlObject;
static inline IPlayerControlObject* findPlayerControlObject(IObject* obj);

class IPlayerControlObject {
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
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual void v53();
    virtual void v54();
    virtual void v55();
    virtual void v56();
    virtual int v57(int arg);
};

static inline IPlayerControlObject* findPlayerControlObject(IObject* obj) {
    for (IObject* o = obj; o; o = o->m_parent) {
        IPlayerControlObject* pco = (IPlayerControlObject*)o->getInterface(IID_IPlayerControlObject);
        if (pco)
            return pco;
    }
    return 0;
}

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
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual void v53();
    virtual void v54();
    virtual void v55();
    virtual void v56();
    virtual void v57();
    virtual int getTeam();
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

struct DepotTemplate {
    char m_pad0[0x1c8];
    float m_radius;
};

class SupplyDepot : public IObject {
public:
    void workOnSoldiers();
    void reloadAmmo(IObject* obj);
private:
    char m_pad1[0x230 - 0x58];
    DepotTemplate* m_template;
    int m_team;
    char m_pad2[0x2c5 - 0x23c];
    bool m_active;
};

void SupplyDepot::workOnSoldiers() {
    bool ok = true;
    if (m_parent) {
        IPlayerControlObject* pco = findPlayerControlObject(getRootParent(this));
        pco->v57(1);
        ok = pco->v57(2) != 0;
    }
    std::list<IPlayer*>& players = playerManager->getPlayers();
    for (std::list<IPlayer*>::iterator it = players.begin(); it != players.end(); ++it) {
        IPlayer* player = *it;
        if (!player->v27())
            continue;
        IObject* soldier = player->getControlledObject();
        if (!soldier)
            continue;
        if (soldier->m_parent && getRootParent(soldier) != getRootParent(this))
            continue;
        int team = player->getTeam();
        if (team != m_team && m_team != 0)
            continue;
        const Vec3& a = soldier->getPosition();
        const Vec3& b = getPosition();
        float dx = a.x - b.x;
        float dy = a.y - b.y;
        float dz = a.z - b.z;
        if (sqrtf(dx * dx + dy * dy + dz * dz) > m_template->m_radius)
            continue;
        if (m_active && ok)
            reloadAmmo(soldier);
    }
}

} } }
