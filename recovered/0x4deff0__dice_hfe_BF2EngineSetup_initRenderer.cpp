// FUNCTION: BF2 0x4deff0
namespace dice { namespace hfe {
struct V2d {
    virtual void v0();
    virtual void v1();
    virtual bool v0x10();
};
struct OB20 {
    V2d** m_v;
    bool f_0x4deff0();
};
bool OB20::f_0x4deff0() {
    V2d* p = m_v[0x30 / 8];
    if (p && p->v0x10())
        return 1;
    return 0;
}
} }
