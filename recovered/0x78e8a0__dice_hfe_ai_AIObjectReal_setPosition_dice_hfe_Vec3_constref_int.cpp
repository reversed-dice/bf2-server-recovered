// FUNCTION: BF2 0x78e8a0
namespace dice { namespace hfe { namespace ai {
struct V {
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
    virtual bool v0xe0();
};
struct AO {
    unsigned char _pad[0x14];
    int m_14;
    unsigned char _pad2[0x20 - 0x18];
    V* m_obj;
    bool setPosition_0x78e8a0(void* v, int x);
};
bool AO::setPosition_0x78e8a0(void* v, int x) {
    if (m_14 != x)
        return false;
    m_obj->v0xe0();
    return true;
}
} } }
