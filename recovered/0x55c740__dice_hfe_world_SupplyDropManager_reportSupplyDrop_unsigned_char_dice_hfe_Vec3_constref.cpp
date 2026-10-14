// FUNCTION: BF2 0x55c740
// BF2_FLAGS: -fno-strict-aliasing
#include <list>

namespace dice { namespace hfe {

struct Vec3 {
    float x, y, z;
    void set(float ax, float ay, float az) { x = ax; y = ay; z = az; }
    Vec3& operator=(const Vec3& o) { set(o.x, o.y, o.z); return *this; }
    Vec3() {}
    Vec3(const Vec3& o) { set(o.x, o.y, o.z); }
};

class PostRemoteEvent {
public:
    PostRemoteEvent(int cat, unsigned int a, bool b, void* p, unsigned int c, float f);
    char _pad[88];
};

struct IPlayerStub {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20();
    virtual unsigned int getId() const;
    virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25();
    virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
    virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33();
    virtual void v34(); virtual void v35(); virtual void v36(); virtual void v37();
};

struct GameStub {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35();
    virtual void v36(); virtual void v37();
    virtual void notify(unsigned int id, PostRemoteEvent* ev);
};

struct IPlayerManagerStub {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void slot60();
    virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16();
    virtual void v17();
    virtual std::list<IPlayerStub*>* slot90(unsigned char c);
};

extern GameStub* game;

namespace world {
extern IPlayerManagerStub* playerManager;
}

} }

namespace dice { namespace hfe { namespace world {

class SupplyDropManager {
public:
    virtual ~SupplyDropManager();
    void reportSupplyDrop(unsigned char cat, const Vec3& pos);
};

void SupplyDropManager::reportSupplyDrop(unsigned char cat, const Vec3& pos)
{
    dice::hfe::world::playerManager->slot60();
    std::list<dice::hfe::IPlayerStub*>* players = dice::hfe::world::playerManager->slot90(cat);
    dice::hfe::Vec3 tmp; tmp = pos;
    for (std::list<dice::hfe::IPlayerStub*>::iterator it = players->begin(); it != players->end(); ++it) {
        dice::hfe::game->notify((*it)->getId(),
            new dice::hfe::PostRemoteEvent(2, 0x53, false, &tmp, 0xc, 0.0f));
    }
}

} } }
