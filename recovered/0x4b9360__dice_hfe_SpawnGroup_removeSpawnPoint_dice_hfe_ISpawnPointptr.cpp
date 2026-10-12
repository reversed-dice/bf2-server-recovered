// BF2_FLAGS: -fcrossjumping -fno-strict-aliasing
// FUNCTION: BF2 0x4b9360
#include <vector>

namespace dice { namespace hfe {

class ISpawnPoint;

class SpawnGroup {
public:
    virtual ~SpawnGroup();
    char _pad[0x80 - 8];
    std::vector<ISpawnPoint*> m_spawnPoints; // 0x80
    char _pad2[0x98 - 0x80 - sizeof(std::vector<ISpawnPoint*>)];
    bool m_dirty;                           // 0x98
    char _pad3[0xa0 - 0x99];
    bool m_hasSpawnPoints;                  // 0xa0

    void removeSpawnPoint(ISpawnPoint* pt);
};

void SpawnGroup::removeSpawnPoint(ISpawnPoint* pt)
{
    for (std::vector<ISpawnPoint*>::iterator it = m_spawnPoints.begin(); it != m_spawnPoints.end(); ++it) {
        if (*it == pt) {
            m_spawnPoints.erase(it);
            m_dirty = true;
            m_hasSpawnPoints = !m_spawnPoints.empty();
            return;
        }
    }
}

} }
