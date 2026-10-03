// FUNCTION: BF2 0x5ece20
namespace dice { namespace hfe {
struct V24b {
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
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v0xc0(int a, int b);
};
extern void fn_5ea9a0(void* a);
struct OB62 {
    unsigned char _pad[0x18];
    V24b* m_18;
    unsigned char _pad2[0xa8 - 0x20];
    char m_a8;
    unsigned char _pad3[0xb0 - 0xa9];
    void* m_b0;
    void f_0x5ece20();
};
void OB62::f_0x5ece20() {
    fn_5ea9a0(this);
    m_18->v0xc0(2, 0);
    if (*(char*)((char*)m_b0 + 0x7c))
        m_a8 = 1;
}
} }
