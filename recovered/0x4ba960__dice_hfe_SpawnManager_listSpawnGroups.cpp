// FUNCTION: BF2 0x4ba960
#include <map>
#include <vector>

namespace dice { namespace hfe {

class SpawnPoint {
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
    virtual void slot80();
};

class ISpawnGroup {
public:
    virtual void g0();
    virtual void g1();
    virtual void g2();
    virtual void g3();
    virtual void g4();
    virtual void g5();
    virtual void g6();
    virtual void g7();
    virtual void g8();
    virtual void g9();
    virtual void g10();
    virtual void g11();
    virtual void g12();
    virtual void g13();
    virtual void g14();
    virtual void g15();
    virtual std::vector<SpawnPoint*>* getVec();
};

class SpawnManager {
public:
    char _pad0[0x20];
    std::map<int, ISpawnGroup*> m_groups;
    void listSpawnGroups();
};

void SpawnManager::listSpawnGroups()
{
    std::map<int, ISpawnGroup*>::iterator last = m_groups.end();
    for (std::map<int, ISpawnGroup*>::iterator it = m_groups.begin(); it != last; ++it)
    {
        ISpawnGroup* group = it->second;
        if (group->getVec()->size() == 1)
            group->getVec()->front()->slot80();
    }
}

} }
