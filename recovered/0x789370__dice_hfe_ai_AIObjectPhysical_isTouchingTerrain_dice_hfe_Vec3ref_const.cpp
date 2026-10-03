// FUNCTION: BF2 0x789370
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
    virtual void* v0x40();
};
struct V31b {
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
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual bool v0xf8(long a);
};
struct OB57 {
    unsigned char _pad[0x8];
    V8b* m_8;
    bool f_0x789370(long x);
};
bool OB57::f_0x789370(long x) {
    void* p = m_8->v0x40();
    return (*(V31b**)((char*)p + 0x90))->v0xf8(x);
}
} }
