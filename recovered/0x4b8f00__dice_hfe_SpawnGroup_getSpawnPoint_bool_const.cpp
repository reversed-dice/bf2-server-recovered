// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x4b8f00
#include <vector>
namespace dice { namespace hfe {

extern "C" int rand();

class ISpawnPoint {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual bool getActive(bool isAI, int team) const;
    virtual ~ISpawnPoint();
};

class SpawnGroup {
public:
    virtual void dummy();
    ISpawnPoint* getSpawnPoint(bool isAI) const;
private:
    char _pad[0x54];
    int m_team;
    char _pad2[0x20];
    std::vector<ISpawnPoint*> m_spawnPoints;
};

ISpawnPoint* SpawnGroup::getSpawnPoint(bool isAI) const
{
    std::vector<ISpawnPoint*> v;
    for (std::vector<ISpawnPoint*>::const_iterator it = m_spawnPoints.begin(); it != m_spawnPoints.end(); ++it)
    {
        if ((*it)->getActive(isAI, m_team))
            v.push_back(*it);
    }
    if (v.size() != 0)
        return v[rand() % v.size()];
    return 0;
}

} }
