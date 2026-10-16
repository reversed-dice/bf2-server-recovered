// FUNCTION: BF2 0x5e4860
// BF2_FLAGS: -fno-strict-aliasing
namespace dice { namespace hfe { namespace world {
struct WeaponState { int m_0; int m_4; int m_8; int m_c; int m_10; int m_14; };
class GenericFireArm { public: void setStateSync(WeaponState const& s); };
extern void setAsyncFlags(void* self, unsigned int v);
struct Sync24 { long a; long b; long c; };
} } }

static inline bool sameSignOrZero(int a, int b)
{
    return (a < 0 && b < 0) || (a > 0 && b > 0) || a == 0 || b == 0;
}

#define MAXV ((int (*)(void*))((*(void***)this)[0x660 / 8]))(this)
#define MAGS ((int (*)(void*))((*(void***)this)[0x468 / 8]))(this)

void dice::hfe::world::GenericFireArm::setStateSync(WeaponState const& s)
{
    if (s.m_8 <= MAXV && sameSignOrZero(s.m_8, MAXV)
        && s.m_0 <= MAGS && sameSignOrZero(s.m_0, MAGS)
        && (*(void**)((char*)this + 0x290) == 0
            || ((bool (*)(void*, int))((*(void***)*(void**)((char*)this + 0x290))[0x130 / 8]))(*(void**)((char*)this + 0x290), s.m_4)))
    {
        long* d = (long*)((char*)this + 0x340);
        d[0] = ((long const*)&s)[0];
        d[1] = ((long const*)&s)[1];
        long v2 = ((long const*)&s)[2];
        *(char*)((char*)this + 0x338) = 1;
        d[2] = v2;
        ((void (*)(void*, float))((*(void***)this)[0x420 / 8]))(this, *(float*)((char*)this + 0x354));
        setAsyncFlags(this, *(unsigned int*)((char*)this + 0x350));
    }
}
