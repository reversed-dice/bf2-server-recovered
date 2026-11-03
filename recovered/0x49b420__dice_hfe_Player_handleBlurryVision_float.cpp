// FUNCTION: BF2 0x49b420
// BF2_FLAGS: -fno-strict-aliasing

#include <string>

namespace dice { namespace hfe {

struct Vec3 {
    float x;
    float y;
    float z;
    void set(float ax, float ay, float az) { x = ax; y = ay; z = az; }
    Vec3& operator=(const Vec3& o) { set(o.x, o.y, o.z); return *this; }
    Vec3() {}
    Vec3(float a, float b, float c) : x(a), y(b), z(c) {}
    Vec3(const Vec3& o) { set(o.x, o.y, o.z); }
};

namespace world {

extern const unsigned int CID_SoldierTemplate;

class IObjectTemplate {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual int getClassID() const;
};

class IObject {
public:
    char m_pad0[0x28];
    IObjectTemplate* m_template;
};

}

extern void* playerManager;
extern void* g_bfSound;
extern void* gameLogic;

typedef bool (*FnBool)(void*);
typedef int (*FnInt)(void*);
typedef void* (*FnPtr)(void*);
typedef void* (*FnStrRet)(void*, std::string);
typedef void (*FnStrVoid)(void*, std::string);
typedef Vec3 const& (*FnVec)(void*);
typedef void (*FnDamage)(void*, void*, float, void*, void*, void*, int, void*, void*,
                         Vec3, Vec3, int, bool, bool, bool);

class Player {
public:
    void handleBlurryVision(float dt);
private:
    char m_pad0[0x41c];
    float m_41c;
    char m_pad1[0x42c - 0x420];
    float m_42c;
    float m_430;
    float m_434;
    float m_438;
    char m_pad2[0x466 - 0x43c];
    unsigned char m_466;
    unsigned char m_467;
    unsigned char m_468;
};

void Player::handleBlurryVision(float dt)
{
    if (((FnBool)(*(void***)this)[0x580 / 8])(this) && !m_467) {
        if (((FnPtr)(*(void***)playerManager)[0x60 / 8])(playerManager) == this) {
            void* h = ((FnStrRet)(*(void***)g_bfSound)[0x80 / 8])(g_bfSound,
                        std::string("S_GasMaskTearGasTransition"));
            if (h != 0 && !((FnBool)(*(void***)h)[0x70 / 8])(h) && !m_468) {
                ((FnStrVoid)(*(void***)g_bfSound)[0x58 / 8])(g_bfSound,
                        std::string("S_HeavyBreathing"));
                m_468 = 1;
            }
        }
    }

    world::IObject* obj = (world::IObject*)((FnPtr)(*(void***)this)[0x148 / 8])(this);

    if (m_434 > 0.0f) {
        m_434 -= dt;
        if (((FnPtr)(*(void***)playerManager)[0x60 / 8])(playerManager) == this) {
            if (obj != 0 && obj->m_template->getClassID() == world::CID_SoldierTemplate
                && m_41c > 0.0f) {
                ((FnDamage)(*(void***)gameLogic)[0x1c8 / 8])(gameLogic, obj, (dt *= m_41c), 0, 0, 0, -1,
                    0, 0, ((FnVec)(*(void***)obj)[0xd8 / 8])(obj), Vec3(0.0f, 1.0f, 0.0f),
                    -1, false, true, false);
            }
        }
        m_438 = 1.0f;
    } else {
        m_42c -= dt;
        if (m_42c > 0.0f) {
            m_438 = m_42c / m_430;
        } else {
            m_438 = 0.0f;
            m_42c = 0.0f;
            m_434 = 0.0f;
            if (((FnPtr)(*(void***)playerManager)[0x60 / 8])(playerManager) == this) {
                if (m_466) {
                    ((FnStrVoid)(*(void***)g_bfSound)[0x60 / 8])(g_bfSound,
                            std::string("S_TearGas"));
                    m_466 = 0;
                }
                if (m_467) {
                    ((FnStrVoid)(*(void***)g_bfSound)[0x60 / 8])(g_bfSound,
                            std::string("S_GasMaskTearGas"));
                    m_467 = 0;
                    ((FnStrVoid)(*(void***)g_bfSound)[0x58 / 8])(g_bfSound,
                            std::string("S_GasMaskTearGasTransition"));
                }
            }
        }
    }
}

} }
