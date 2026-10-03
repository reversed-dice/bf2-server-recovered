// FUNCTION: BF2 0x788ed0
namespace dice { namespace hfe {
struct V8b {
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
struct OB11 {
    unsigned char _pad[0x8];
    V8b* m_obj;
    int f_0x788ed0();
};
int OB11::f_0x788ed0() {
    m_obj->v0x40();
    return 0;
}
} }
