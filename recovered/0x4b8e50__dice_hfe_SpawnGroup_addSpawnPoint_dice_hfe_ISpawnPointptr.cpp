// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x4b8e50
#include <vector>

namespace dice { namespace hfe {

class ISpawnPoint {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual bool getOnlyForAI() const;
};

class ISpawnGroup {
public:
    virtual ~ISpawnGroup();
};

namespace io {
class NetworkableBase {
public:
    virtual ~NetworkableBase();
};
}

class SpawnGroup : public ISpawnGroup, public io::NetworkableBase {
public:
    void addSpawnPoint(ISpawnPoint* point);

private:
    char m_pad[0x70];
    std::vector<ISpawnPoint*> m_spawnPoints; // +0x80
    bool m_dirty;                           // +0x98
    char m_pad2;                            // +0x99
    bool m_onlyForAI;                       // +0x9a
    char m_pad3[5];
    bool m_hasPoints;                       // +0xa0
};

void SpawnGroup::addSpawnPoint(ISpawnPoint* point) {
    if (m_spawnPoints.empty()) {
        if (point->getOnlyForAI())
            m_onlyForAI = true;
    }
    if (m_onlyForAI) {
        if (!point->getOnlyForAI())
            m_onlyForAI = false;
    }
    m_spawnPoints.push_back(point);
    m_dirty = true;
    m_hasPoints = true;
}

} }
