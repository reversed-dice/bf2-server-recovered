// FUNCTION: BF2 0x606d10
#include <string>

namespace dice { namespace hfe {

class Game {
public:
    virtual void v0();  virtual void v1();  virtual void v2();  virtual void v3();
    virtual void v4();  virtual void v5();  virtual void v6();  virtual void v7();
    virtual void v8();  virtual void v9();  virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20();
    virtual void sendEvent(int a, std::string const& b, void* c, int d, int e, int f);
};

extern Game* game;

namespace world {

extern unsigned int IID_IProjectileObject;
class IPlayerManager;
extern IPlayerManager* playerManager;

struct WeaponFireEvent {
    char pad[8];
    void* m_8;      // +0x08
    char pad2[0x38];
    void* m_48;     // +0x48
};

struct TargetComp {
    void postFire(WeaponFireEvent& event);
};

class MultiFireArmTargetComp {
public:
    char pad0[0x18];
    void* m_18;      // +0x18
    char pad1[0x30];
    void* m_48;      // +0x48
    char pad2[0x40];
    int m_8c;        // +0x8c

    void postFire(WeaponFireEvent& event);
};

void MultiFireArmTargetComp::postFire(WeaponFireEvent& event)
{
    ((TargetComp*)this)->postFire(event);
    if (event.m_8 != 0) {
        void* p = ((void* (*)(void*, unsigned int))(*(void***)event.m_8)[0x18 / 8])(event.m_8, IID_IProjectileObject);
        void* m = *(void**)((char*)this + 0x18);
        void* v = ((void* (*)(void*))(*(void***)m)[0x380 / 8])(m);
        void* h = *(void**)((char*)this + 0x48);
        if (h != 0) {
            void* w = *(void**)((char*)h + 8);
            if (w != 0) {
                if (v != 0) {
                    void* u = ((void* (*)(void*))(*(void***)playerManager)[0x60 / 8])(playerManager);
                    if (v == u) {
                        dice::hfe::game->sendEvent(0xe,
                            std::string("missile_away"),
                            ((void* (*)(void*))(*(void***)playerManager)[0x60 / 8])(playerManager),
                            *(int*)((char*)w + 0x24c), 1, 0);
                    }
                }
                *(int*)((char*)this + 0x8c) = -0x46;
            }
        }
        if (((bool (*)(void*))(*(void***)this)[0x170 / 8])(this)) {
            ((void (*)(void*, void*))(*(void***)p)[0x188 / 8])(p, ((void* (*)(void*))(*(void***)this)[0x168 / 8])(this));
        } else {
            ((void (*)(void*, int))(*(void***)p)[0x188 / 8])(p, 0);
        }
    }
}

} } }
