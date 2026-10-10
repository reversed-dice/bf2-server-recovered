// FUNCTION: BF2 0x4b88d0
// BF2_FLAGS: -fno-strict-aliasing
#include <map>

namespace dice { namespace hfe {

class SpawnGroup {
public:
    virtual void g0();
    virtual void g1();
    virtual void g2();
    virtual void g3();
    virtual void g4();
    virtual void g5();
    virtual void g6();
    virtual int getTeam();
    char _pad[0x71];
    char m_flag79;
    char _pad2[6];
    void** m_vecBegin;
    void** m_vecEnd;
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
    std::map<int, SpawnGroup*> m_groups;
    int m_flag;
    bool canTeamGetAnySpawnGroup(int team);
};

bool SpawnManager::canTeamGetAnySpawnGroup(int team)
{
    std::map<int, SpawnGroup*>::iterator it = m_groups.begin();
    std::map<int, SpawnGroup*>::iterator last = m_groups.end();
    for (; it != last; ++it)
    {
        SpawnGroup* g = it->second;
        if (g->getTeam() != team && (int)(g->m_vecEnd - g->m_vecBegin) > 0 && g->m_flag79 != 0)
            return true;
    }
    return false;
}

} }
