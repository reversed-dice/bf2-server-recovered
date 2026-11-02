// FUNCTION: BF2 0x4c44d0
// BF2_FLAGS: -fcrossjumping -fno-strict-aliasing
#include <vector>
#include <list>
#include <string>

// compile-state padding: 2 unused functions, see trick 407 (not the original source)
extern "C" void padcall();
extern "C" void pad1(int* p) { if (p[0] == 0) padcall(); }
extern "C" void pad2(int* p) { if (p[0] == 0) padcall(); }

extern "C" int IID_ISoldier;
extern "C" int IID_ISpawnPoint;

namespace dice { namespace hfe {

namespace world {

class ITemplate;

class IObject {
public:
    virtual void _v00();
    virtual void _v08();
    virtual void _v10();
    virtual void* queryInterface(unsigned int iid);
    virtual void _v20(); virtual void _v28(); virtual void _v30(); virtual void _v38();
    virtual void _v40(); virtual void _v48(); virtual void _v50(); virtual void _v58();
    virtual void _v60(); virtual void _v68(); virtual void _v70(); virtual void _v78();
    virtual void _v80(); virtual void _v88(); virtual void _v90(); virtual void _v98();
    virtual void _va0(); virtual void _va8(); virtual void _vb0(); virtual void _vb8();
    virtual void _vc0(); virtual void _vc8(); virtual void _vd0(); virtual void _vd8();
    virtual void _ve0(); virtual void _ve8(); virtual void _vf0(); virtual void _vf8();
    virtual void _v100(); virtual void _v108(); virtual void _v110(); virtual void _v118();
    virtual void _v120(); virtual void _v128(); virtual void _v130(); virtual void _v138();
    virtual void _v140(); virtual void _v148(); virtual void _v150(); virtual void _v158();
    virtual void _v160(); virtual void _v168(); virtual void _v170(); virtual void _v178();
    virtual void _v180(); virtual void _v188(); virtual void _v190(); virtual void _v198();
    virtual void _v1a0(); virtual void _v1a8(); virtual void _v1b0(); virtual void _v1b8();
    virtual void _v1c0(); virtual void _v1c8(); virtual void _v1d0(); virtual void _v1d8();
    virtual IObject* getChild();
    virtual void addChild(IObject*);
    virtual void removeChild(IObject*);
};

struct IObjectFields {
    char _pad[0x28];
    ITemplate* m_template;
    char _pad2[0x58 - 0x30];
    IObject* m_nextSibling;
};

class IPlayer {
public:
    virtual void _v00(); virtual void _v08(); virtual void _v10(); virtual void _v18();
    virtual void _v20(); virtual void _v28(); virtual void _v30(); virtual void _v38();
    virtual void _v40(); virtual void _v48(); virtual void _v50(); virtual void _v58();
    virtual void _v60(); virtual void _v68(); virtual void _v70(); virtual void _v78();
    virtual void _v80(); virtual void _v88();
    virtual IObject* getVehicle();
    virtual void _v98(); virtual void _va0(); virtual void _va8(); virtual void _vb0();
    virtual void _vb8(); virtual void _vc0(); virtual void _vc8(); virtual void _vd0();
    virtual void _vd8(); virtual void _ve0(); virtual void _ve8(); virtual void _vf0();
    virtual void _vf8(); virtual void _v100(); virtual void _v108(); virtual void _v110();
    virtual void _v118(); virtual void _v120(); virtual void _v128(); virtual void _v130();
    virtual void _v138(); virtual void _v140();
    virtual IObject* getDefaultVehicle();
};

} // namespace world

class ITemplate {
public:
    virtual void _v00(); virtual void _v08(); virtual void _v10(); virtual void _v18();
    virtual void _v20(); virtual void _v28(); virtual void _v30(); virtual void _v38();
    virtual void _v40(); virtual void _v48(); virtual void _v50(); virtual void _v58();
    virtual void _v60(); virtual void _v68(); virtual void _v70(); virtual void _v78();
    virtual void _v80(); virtual void _v88(); virtual void _v90(); virtual void _v98();
    virtual void _va0();
    virtual dice::hfe::world::IObject* createInstance();
};

class ISpawnPoint {
public:
    virtual void _v00(); virtual void _v08(); virtual void _v10(); virtual void _v18();
    virtual void _v20(); virtual void _v28(); virtual void _v30(); virtual void _v38();
    virtual void _v40(); virtual void _v48(); virtual void _v50(); virtual void _v58();
    virtual void _v60(); virtual void _v68(); virtual void _v70();
    virtual void setIsSquadLeaderSpawnPoint(bool b);
};

class SpawnManager {
public:
    virtual void _v00(); virtual void _v08(); virtual void _v10(); virtual void _v18();
    virtual void _v20(); virtual void _v28();
    virtual void addSpawn(ISpawnPoint* sp, int id);
};

class ObjectTemplateManager {
public:
    virtual void _v00(); virtual void _v08(); virtual void _v10(); virtual void _v18();
    virtual void _v20(); virtual void _v28(); virtual void _v30(); virtual void _v38();
    virtual void _v40();
    virtual ITemplate* getTemplate(const std::string& name);
};

namespace world {
extern ObjectTemplateManager* objectTemplateManager;
}

extern SpawnManager* spawnManager;

ISpawnPoint* getSpawnPoint(dice::hfe::world::IObject* obj);

class Squad {
public:
    char _pad[0x140];
    int m_squadId;
    void addSquadLeaderSpawnPoint(dice::hfe::world::IPlayer* player);
};

void Squad::addSquadLeaderSpawnPoint(dice::hfe::world::IPlayer* player)
{
    if (player == 0) return;
    if (m_squadId < 0) return;
    if (player->getDefaultVehicle()->queryInterface(IID_ISoldier) == 0) return;

    bool isInVehicle = player->getDefaultVehicle() != player->getVehicle();
    std::vector<dice::hfe::world::IObject*> spawnPoints;
    dice::hfe::world::IObject* vehicle = player->getDefaultVehicle();
    if (vehicle != 0) {
        std::list<dice::hfe::world::IObject*> work;
        work.push_back(vehicle);
        if (((world::IObjectFields*)vehicle)->m_template != 0
            && vehicle->queryInterface(IID_ISpawnPoint) != 0)
            spawnPoints.push_back(vehicle);
        while (work.size() > 0) {
            dice::hfe::world::IObject* child = work.front()->getChild();
            work.pop_front();
            while (child != 0) {
                if (((world::IObjectFields*)child)->m_template != 0
                    && child->queryInterface(IID_ISpawnPoint) != 0)
                    spawnPoints.push_back(child);
                work.push_back(child);
                child = ((world::IObjectFields*)child)->m_nextSibling;
            }
        }
    }
    if ((int)spawnPoints.size() > 0) {
        getSpawnPoint(spawnPoints[0])->setIsSquadLeaderSpawnPoint(isInVehicle);
    } else {
        ITemplate* tmpl = world::objectTemplateManager->getTemplate("SquadLeaderSpawnPoint");
        if (tmpl != 0) {
            dice::hfe::world::IObject* obj = tmpl->createInstance();
            player->getDefaultVehicle()->addChild(obj);
            spawnManager->addSpawn(getSpawnPoint(obj), m_squadId);
            getSpawnPoint(obj)->setIsSquadLeaderSpawnPoint(isInVehicle);
        }
    }
}

} }
