// FUNCTION: BF2 0x60b410
namespace dice { namespace hfe {
struct V6c {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v0x30(int a);
};
struct OB16 {
    unsigned char _pad[0x28];
    V6c* m_28;
    void f_0x60b410();
};
void OB16::f_0x60b410() {
    if (__builtin_expect(m_28 != 0, 1)) {
        m_28->v0x30(0);
        m_28 = 0;
    }
}
} }
