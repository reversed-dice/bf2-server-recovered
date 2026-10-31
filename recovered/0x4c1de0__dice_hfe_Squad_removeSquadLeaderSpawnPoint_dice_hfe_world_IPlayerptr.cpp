// FUNCTION: BF2 0x4c1de0
// BF2_FLAGS: -fno-strict-aliasing
#include <vector>
#include <list>

extern "C" int IID_ISoldier;
extern "C" int IID_ISpawnPoint;

namespace dice { namespace hfe {

namespace world {

class ITemplate;

class IObject {
public:
    virtual void addRef();
    virtual void getRef();
    virtual void release();
    virtual void* queryInterface(unsigned int iid);
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual void d7();
    virtual void d8();
    virtual void d9();
    virtual void d10();
    virtual void d11();
    virtual void d12();
    virtual void d13();
    virtual void d14();
    virtual void d15();
    virtual void d16();
    virtual void d17();
    virtual void d18();
    virtual void d19();
    virtual void d20();
    virtual void d21();
    virtual void d22();
    virtual void d23();
    virtual void d24();
    virtual void d25();
    virtual void d26();
    virtual void d27();
    virtual void d28();
    virtual void d29();
    virtual void d30();
    virtual void d31();
    virtual void d32();
    virtual void d33();
    virtual void d34();
    virtual void d35();
    virtual void d36();
    virtual void d37();
    virtual void d38();
    virtual void d39();
    virtual void d40();
    virtual void d41();
    virtual void d42();
    virtual void d43();
    virtual void d44();
    virtual void d45();
    virtual void d46();
    virtual void d47();
    virtual void d48();
    virtual void d49();
    virtual void d50();
    virtual void d51();
    virtual void d52();
    virtual void d53();
    virtual void d54();
    virtual void d55();
    virtual void d56();
    virtual void d57();
    virtual void d58();
    virtual void d59();
    virtual IObject* getChild();
    virtual void addChild(IObject*);
    virtual void removeChild(IObject*);

    unsigned char m_flags;
    char _pad[0x1f];
    ITemplate* m_template;
    char _pad2[0x20];
    IObject* m_parentRef;
    IObject* m_nextSibling;
};

class IPlayer {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual void d7();
    virtual void d8();
    virtual void d9();
    virtual void d10();
    virtual void d11();
    virtual void d12();
    virtual void d13();
    virtual void d14();
    virtual void d15();
    virtual void d16();
    virtual void d17();
    virtual void d18();
    virtual void d19();
    virtual void d20();
    virtual void d21();
    virtual void d22();
    virtual void d23();
    virtual void d24();
    virtual void d25();
    virtual void d26();
    virtual void d27();
    virtual void d28();
    virtual void d29();
    virtual void d30();
    virtual void d31();
    virtual void d32();
    virtual void d33();
    virtual void d34();
    virtual void d35();
    virtual void d36();
    virtual void d37();
    virtual void d38();
    virtual void d39();
    virtual void d40();
    virtual IObject* getDefaultVehicle();
};

} // namespace world

class IFace {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual void d7();
    virtual void d8();
    virtual void d9();
    virtual void d10();
    virtual void d11();
    virtual void d12();
    virtual void d13();
    virtual void d14();
    virtual void d15();
    virtual void d16();
    virtual void d17();
    virtual void d18();
    virtual void d19();
    virtual void d20();
    virtual void d21();
    virtual void d22();
    virtual void d23();
    virtual void d24();
    virtual void d25();
    virtual void d26();
    virtual void d27();
    virtual void d28();
    virtual void d29();
    virtual void d30();
    virtual void d31();
    virtual void d32();
    virtual void d33();
    virtual void d34();
    virtual void d35();
    virtual void d36();
    virtual void d37();
    virtual void d38();
    virtual void d39();
    virtual void m140(dice::hfe::world::IObject* p);
};

extern IFace* game;

class Squad {
public:
    void removeSquadLeaderSpawnPoint(dice::hfe::world::IPlayer* player);
};

void Squad::removeSquadLeaderSpawnPoint(dice::hfe::world::IPlayer* player)
{
    if (player == 0) return;
    if (player->getDefaultVehicle() == 0) return;
    if (player->getDefaultVehicle()->queryInterface(IID_ISoldier) == 0) return;

    std::vector<dice::hfe::world::IObject*> spawnPoints;
    dice::hfe::world::IObject* vehicle = player->getDefaultVehicle();
    if (vehicle != 0) {
        std::list<dice::hfe::world::IObject*> work;
        work.push_back(vehicle);
        if (vehicle->m_template != 0 && vehicle->queryInterface(IID_ISpawnPoint) != 0)
            spawnPoints.push_back(vehicle);
        while (work.size() > 0) {
            dice::hfe::world::IObject* child = work.front()->getChild();
            work.pop_front();
            while (child != 0) {
                if (child->m_template != 0 && child->queryInterface(IID_ISpawnPoint) != 0)
                    spawnPoints.push_back(child);
                work.push_back(child);
                child = child->m_nextSibling;
            }
        }
    }
    for (int i = 0; i < (int)spawnPoints.size(); ++i) {
        dice::hfe::world::IObject* sp = spawnPoints[i];
        player->getDefaultVehicle()->removeChild(sp);
        dice::hfe::game->m140(sp);
    }
}

} }
