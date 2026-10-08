// FUNCTION: BF2 0x4b8710
#include <map>

namespace dice {
namespace hfe {

class ISpawnGroup {
public:
    char pad0[0x98];
    unsigned char m_avgPosDirty;
};

class SpawnManager {
public:
    virtual void addRef();
    virtual void getRef();
    virtual void release();
    virtual void queryInterface(unsigned int) const;
    virtual ~SpawnManager();
    virtual void addSpawnPoint(void*, int);
    virtual void remove(void const*);
    virtual void removeAll();
    virtual void removeGroup(int);
    virtual ISpawnGroup* getSpawnGroup(int);
    virtual void getGroupsForTeam(int);
    virtual void getGroupsForPlayer(void*);
    virtual void canTeamGetAnySpawnGroup(int);
    virtual void createDynamicSpawnGroup();
    virtual void createExistingDynamicSpawnGroup(int);
    virtual void* getSpawnGroups();

    char pad1[0x18];
    std::map<unsigned int, ISpawnGroup*> m_groups;

    void makeAverageGroupPositionDirty(int id);
};

void SpawnManager::makeAverageGroupPositionDirty(int id) {
    if (getSpawnGroup(id) == 0) return;
    m_groups[id]->m_avgPosDirty = 1;
}

} }
