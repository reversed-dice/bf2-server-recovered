// FUNCTION: BF2 0x53a490
#include <vector>

namespace dice { namespace hfe {

namespace world {
class IObject;
class Template {
public:
    char _pad[0x34c];
    char m_hasSpawnPoints;
};
}

class SpawnPoint {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void setEnabled(bool);
};

SpawnPoint* getSpawnPoint(world::IObject*);

namespace world {

class PlayerControlObject {
public:
    char _pad[0x28];
    Template* m_template;
    char _pad2[0x3b0 - 0x30];
    std::vector<IObject*> m_spawnPoints;

    void enableSpawnPoints(bool enable);
};

void PlayerControlObject::enableSpawnPoints(bool enable) {
    if (m_template->m_hasSpawnPoints) {
        for (int i = 0; i < (int)m_spawnPoints.size(); ++i) {
            SpawnPoint* sp = getSpawnPoint(m_spawnPoints[i]);
            sp->setEnabled(enable);
        }
    }
}

} } }
