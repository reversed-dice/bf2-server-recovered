// FUNCTION: BF2 0xaf7610
namespace dice { namespace hfe { namespace world {
struct V19c {
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
    virtual void v0x98(int a);
};
extern void* fn_af3820();
struct CCXm {
    unsigned char _pad[0x30];
    int m_30;
    unsigned char _pad2[0x38 - 0x34];
    int* m_38;
    unsigned char _pad3[0x108 - 0x40];
    char m_108;
    int execute_0xaf7610();
};
int CCXm::execute_0xaf7610() {
    if (m_30 == 1) {
        int x = *m_38;
        m_108 = 0;
        void* p = fn_af3820();
        ((V19c*)p)->v0x98(x);
    }
    return 0;
}
} } }
