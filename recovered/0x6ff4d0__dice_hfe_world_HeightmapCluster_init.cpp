// FUNCTION: BF2 0x6ff4d0
namespace dice { namespace hfe {
struct V11 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v0x58(int a, void* b, int c);
};
extern V11* g_10b3730;
struct OB33 {
    unsigned char _pad[0x8];
    void* m_8;
    unsigned char _pad2[0x18 - 0x10];
    void* m_18;
    void* m_20;
    int m_28;
    void* m_30;
    int m_38;
    void f_0x6ff4d0();
};
void OB33::f_0x6ff4d0() {
    g_10b3730->v0x58(5, (char*)this + 0x8, 0);
    m_18 = 0;
    m_20 = 0;
    m_28 = 0;
    m_30 = 0;
    m_38 = 0;
}
} }
