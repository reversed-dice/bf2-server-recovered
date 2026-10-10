// FUNCTION: BF2 0x4ba170
// BF2_FLAGS: -fno-strict-aliasing
#include <list>
#include <map>
#include <string>
#include <utility>

namespace dice { namespace hfe {

class ISpawnGroup;

class ISpawnManager {
public:
    virtual void b0();
    virtual void b1();
    virtual void b2();
    virtual void b3();
    virtual void b4();
    virtual void b5();
    virtual void b6();
    virtual void b7();
    virtual void b8();
    virtual void b9();
    virtual void b10();
    virtual void b11();
    virtual void b12();
    virtual void b13();
    virtual void b14();
    virtual void b15();
    virtual void b16();
    virtual void b17();
    virtual void b18();
    virtual void b19();
    virtual void b20();
    ISpawnManager();
};

class SpawnManager : public ISpawnManager {
public:
    int m_refCount;
    std::list<void*> m_points;
    std::map<unsigned int, ISpawnGroup*> m_groups;
    int m_nextId;
    std::map<std::pair<int, int>, int> m_map;
    std::list<int> m_list;
    std::string m_nameSoldier;
    std::string m_nameVehicle;
    SpawnManager();
};

SpawnManager::SpawnManager()
    : m_refCount(1), m_groups(), m_nextId(1), m_map(), m_list(),
      m_nameSoldier("soldier_spawn"), m_nameVehicle("vehicle_spawn")
{
}

} }
