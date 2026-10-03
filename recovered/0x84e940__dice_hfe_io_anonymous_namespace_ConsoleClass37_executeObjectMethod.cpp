// FUNCTION: BF2 0x84e940
namespace dice { namespace hfe { namespace io {
struct V8e {
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
extern void* fn_84d9e0();
struct CCXd {
    unsigned char _pad[0x30];
    int m_30;
    unsigned char _pad2[0x38 - 0x34];
    int* m_38;
    unsigned char _pad3[0x108 - 0x40];
    char m_108;
    int execute_0x84e940();
};
int CCXd::execute_0x84e940() {
    if (m_30 == 1) {
        int x = *m_38;
        m_108 = 0;
        void* p = fn_84d9e0();
        ((V8e*)p)->v0x40(x);
    }
    return 0;
}
} } }
