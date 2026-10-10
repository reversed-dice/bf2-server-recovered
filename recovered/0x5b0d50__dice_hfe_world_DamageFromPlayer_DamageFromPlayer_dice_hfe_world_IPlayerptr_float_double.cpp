// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x5b0d50
namespace dice { namespace hfe { namespace world {
class IPlayerStub {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7(void* p);
};
class DamageFromPlayer {
public:
    char pad0[8];
    int m_8;
    char pad1[4];
    long m_10;
    DamageFromPlayer(IPlayerStub* p, float f, double d);
};
DamageFromPlayer::DamageFromPlayer(IPlayerStub* p, float f, double d)
{
    int fi = *(int*)&f;
    long di = *(long*)&d;
    ((void (*)(void*))(*(void***)p)[0x38 / 8])(this);
    m_8 = fi;
    m_10 = di;
}
} } }
