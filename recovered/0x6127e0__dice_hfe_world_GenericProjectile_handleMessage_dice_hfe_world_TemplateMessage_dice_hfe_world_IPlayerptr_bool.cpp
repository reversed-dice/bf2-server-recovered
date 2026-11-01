// FUNCTION: BF2 0x6127e0
// BF2_FLAGS: -fcrossjumping -fno-strict-aliasing

#include <cmath>
extern "C" void _ZdlPv(void*);

namespace dice { namespace hfe { namespace world {

extern void startStartEffect_6127e0(void*);
extern void hideProjectile_6127e0(void*);
extern bool getDetonateAfter_6127e0(void*);
extern unsigned int getTickCount_6127e0();

typedef bool  (*FnB)(void*);
typedef void* (*FnP)(void*);
typedef void  (*FnVI)(void*, int);
typedef void  (*FnVII)(void*, int, int);
typedef void  (*FnMsg)(void*, int, void*, bool);
typedef void  (*FnVP)(void*, void*);

struct Vec3f { float x, y, z; };
struct Row4  { float x, y, z, w; };
struct Mat4m { Row4 r[4]; };

class GenericProjectile {
public:
    void handleMessage(int msg, void* player, bool flag);

    char pad_000[0x88];
    void* m_88;                                 // 0x88
    char pad_090[0x258 - 0x90];
    void* m_template;                           // 0x258
    char pad_260[0x2c5 - 0x260];
    char m_2c5;                                 // 0x2c5
    char pad_2c6[0x30c - 0x2c6];
    int  m_30c;                                 // 0x30c
    int  m_310;                                 // 0x310
    float m_314;                                // 0x314
    float m_318;                                // 0x318
    float m_31c;                                // 0x31c
    int  m_320;                                 // 0x320
    int  m_324;                                 // 0x324
    int  m_328;                                 // 0x328
    void* m_330;                                // 0x330
    char pad_338[0x360 - 0x338];
    char m_360;                                 // 0x360
    char pad_361[0x36a - 0x361];
    char m_36a;                                 // 0x36a
    char pad_36b[0x370 - 0x36b];
    char m_370;                                 // 0x370
};

void GenericProjectile::handleMessage(int msg, void* player, bool flag)
{
    char* self = (char*)this;

    switch (msg) {
    case 0:
        if (!m_2c5) {
            startStartEffect_6127e0(this);
        }
        return;

    case 0x18:
    case 0x1d:
        if (((FnB)(*(void***)this)[0x508 / 8])(this)) {
            if (!((FnB)(*(void***)this)[0x508 / 8])(this)) {
                return;
            }
            if (!m_36a) {
                return;
            }
            ((FnMsg)(*(void***)this)[0x208 / 8])(this, 0x20, player, flag);
            return;
        }
        if (!m_2c5) {
            if (((FnB)(*(void***)*(void**)0x010b8c08)[0x278 / 8])(*(void**)0x010b8c08)
                || !((FnP)(*(void***)this)[0x1b0 / 8])(this)) {
                if (m_88) {
                    const float* s = (const float*)((FnP)(*(void***)m_88)[0xc0 / 8])(m_88);
                    if (sqrtf(s[0] * s[0] + s[1] * s[1] + s[2] * s[2]) > 1.0f) {
                        int t = m_310;
                        if (t + 10 < (int)getTickCount_6127e0()) {
                            m_30c = 0;
                            Mat4m const* m = (Mat4m const*)((FnP)(*(void***)this)[0x108 / 8])(this);
                            Vec3f const& v = *(Vec3f const*)&m->r[2].x;
                            float bz = -v.z;
                            float by = -v.y;
                            float bx = -v.x;
                            float* d = (float*)(self + 0x314);
                            d[0] = bx;
                            d[1] = by;
                            d[2] = bz;

                            void* h = *(void**)(self + 0x330);
                            if (h != 0) {
                                if (--*(int*)h == 0) {
                                    _ZdlPv(h);
                                }
                            }
                            *(void**)(self + 0x330) = 0;

                            unsigned* r = (unsigned*)((FnP)(*(void***)this)[0xd8 / 8])(this);
                            unsigned* o = (unsigned*)(self + 0x320);
                            unsigned a2 = r[2], a1 = r[1], a0 = r[0];
                            o[0] = a0;
                            o[1] = a1;
                            o[2] = a2;
                        }
                    }
                }
            }
        }
        if (*(char*)((char*)m_template + 0x290) != 0 && !m_2c5) {
            ((FnMsg)(*(void***)this)[0x208 / 8])(this, 0x1f, player, flag);
        } else {
            ((FnMsg)(*(void***)this)[0x208 / 8])(this, 0x20, player, flag);
        }
        return;

    case 0x1f:
        if (m_2c5) {
            return;
        }
        if (!getDetonateAfter_6127e0(this)) {
            ((FnVI)(*(void***)this)[0x308 / 8])(this, 0);
            return;
        }
        m_370 = 1;
        ((FnVII)(*(void***)this)[0xc0 / 8])(this, 0x800, 0);
        return;

    case 0x20:
        if (m_360) {
            return;
        }
        if (!((FnB)(*(void***)*(void**)0x010b8c08)[0x278 / 8])(*(void**)0x010b8c08)
            && ((FnP)(*(void***)this)[0x1b0 / 8])(this)) {
            hideProjectile_6127e0(this);
            return;
        }
        ((FnVP)(*(void***)*(void**)0x010c5420)[0x140 / 8])(*(void**)0x010c5420, this);
        return;

    default:
        return;
    }
}

} } }
