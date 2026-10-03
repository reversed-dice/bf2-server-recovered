// FUNCTION: BF2 0x4df0e0
namespace dice { namespace hfe {
struct V8c {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v0x40();
};
extern V8c* g_obj_108da40;
struct OB15 {
    unsigned char _pad[0x18];
    char m_18;
    void f_0x4df0e0();
};
void OB15::f_0x4df0e0() {
    if (__builtin_expect(g_obj_108da40 != 0, 1))
        g_obj_108da40->v0x40();
    m_18 = 0;
}
} }
