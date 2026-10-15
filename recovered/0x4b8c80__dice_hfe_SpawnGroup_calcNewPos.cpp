// BF2_FLAGS: -fno-tree-pre -fno-strict-aliasing
// FUNCTION: BF2 0x4b8c80
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

namespace world { extern int IID_IObject; }

struct Vec3 { float x, y, z; };

class SpawnGroup : public ISpawnGroup, public io::NetworkableBase {
public:
    void calcNewPos();

private:
    char m_pad0[0x54];
    Vec3 m_newPos;
    char m_pad1[0x10];
    std::vector<ISpawnPoint*> m_spawnPoints; // +0x80
    bool m_dirty;                           // +0x98
};

typedef void* (*QueryFn)(void*, int);
typedef void* (*GetPosFn)(void*);

void SpawnGroup::calcNewPos() {
    Vec3* acc = &m_newPos;
    acc->x = 0.0f;
    acc->y = 0.0f;
    acc->z = 0.0f;
    if (m_spawnPoints.size() != 0) {
        for (std::vector<ISpawnPoint*>::iterator it = m_spawnPoints.begin(); it != m_spawnPoints.end(); ++it) {
            ISpawnPoint* p = *it;
            void* q = p ? ((QueryFn)(*(void***)p)[0x18/8])(p, world::IID_IObject) : 0;
            Vec3* pos = (Vec3*)((char*)((GetPosFn)(*(void***)q)[0x108/8])(q) + 0x30);
            acc->x += pos->x;
            acc->y += pos->y;
            acc->z += pos->z;
        }
        unsigned long n = m_spawnPoints.size();
        if (1 < n) {
            float f = 1.0f / (float)n;
            acc->x = f * acc->x;
            acc->y = f * acc->y;
            acc->z = f * acc->z;
        }
    }
    m_dirty = false;
}

} }
