// FUNCTION: BF2 0x6b1430
namespace dice { namespace hfe {
struct V8d {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v0x40(int a);
};
struct G1 {
    unsigned char _pad[0x30];
    void* m_30;
};
struct G2 {
    unsigned char _pad[0x38];
    void* m_38;
};
extern G1* g1_10a3140;
extern G2* g2_1093598;
void hide_0x6b1430(V8d* self) {
    self->v0x40(0);
    g1_10a3140->m_30 = 0;
    g2_1093598->m_38 = 0;
}
} }
