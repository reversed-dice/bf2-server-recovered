// FUNCTION: BF2 0x4b9890
#include <map>
class SpawnGroup;

struct SpawnManager {
    char pad0[0x20];
    std::map<int, SpawnGroup*> m_groups;
    bool createAllSpawnGroupsOnClient(int clientId);
    void createSpawnGroupOnClients(int clientId, SpawnGroup* g);
};

bool SpawnManager::createAllSpawnGroupsOnClient(int clientId) {
    for (std::map<int, SpawnGroup*>::iterator it = m_groups.begin(); it != m_groups.end(); ++it)
        createSpawnGroupOnClients(clientId, it->second);
    return true;
}
