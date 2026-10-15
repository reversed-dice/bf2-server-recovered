// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x771d30
namespace dice { namespace hfe { namespace ai {

extern void* m_iaiTerrain;

struct Vec2 { float x, y; Vec2(float a, float b) : x(a), y(b) {} };

unsigned char getAllStaticCollisionMeshes_0x771d30(void* self, void* a1, void* a2,
                                                   void* a3, void* a4, void* a5,
                                                   unsigned char a6)
{
    void* t = m_iaiTerrain;
    Vec2 v1((float)((int (*)(void*))(*(void***)t)[0xa8 / 8])(t),
            (float)((int (*)(void*))(*(void***)t)[0xb0 / 8])(t));
    Vec2 v2((float)((int (*)(void*))(*(void***)t)[0xb8 / 8])(t),
            (float)((int (*)(void*))(*(void***)t)[0xc0 / 8])(t));
    typedef unsigned char (*Fn)(void*, const Vec2*, const Vec2*, void*, void*,
                                void*, void*, void*, unsigned char);
    return ((Fn)(*(void***)self)[0xd8 / 8])(self, &v1, &v2, a1, a2, a3, a4, a5, a6);
}
} } }
