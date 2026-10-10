// FUNCTION: BF2 0x4b8950
// BF2_FLAGS: -fno-strict-aliasing
#include <list>
#include <map>

namespace dice { namespace hfe {

class ISpawnGroup {
public:
    virtual void g0();
    virtual void g1();
    virtual void g2();
    virtual void g3();
    virtual void g4();
    virtual void g5();
    virtual void g6();
    virtual int getTeam();
    char _pad[0xa0 - 0x8];
    char m_flagA0;
};

class SpawnManager {
public:
    virtual void s0();
    virtual void s1();
    virtual void s2();
    virtual void s3();
    virtual void s4();
    virtual void s5();
    virtual void s6();
    virtual void s7();
    virtual void s8();
    virtual void s9();
    virtual void s10();
    virtual void s11();
    virtual void s12();
    virtual void s13();
    virtual void s14();
    virtual void s15();
    virtual void s16();
    virtual void s17();
    virtual void s18();
    virtual void s19();
    virtual void s20();
    char _pad0[0x18];
    std::map<unsigned int, ISpawnGroup*> m_groups;
    int m_nextId;
    std::map<std::pair<int, int>, int> m_map;
    std::list<int> m_list;
    std::list<int>& getGroupsForTeam(int team);
};

std::list<int>& SpawnManager::getGroupsForTeam(int team)
{
    m_list.clear();
    std::map<unsigned int, ISpawnGroup*>::iterator it = m_groups.begin();
    std::map<unsigned int, ISpawnGroup*>::iterator last = m_groups.end();
    for (; it != last; ++it)
    {
        ISpawnGroup* g = it->second;
        if (g->getTeam() == team && g->m_flagA0 != 0)
            m_list.push_back(it->first);
    }
    return m_list;
}

} }
