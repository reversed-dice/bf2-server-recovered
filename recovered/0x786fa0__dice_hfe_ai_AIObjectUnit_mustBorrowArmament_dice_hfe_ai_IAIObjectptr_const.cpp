// FUNCTION: BF2 0x786fa0
namespace dice { namespace hfe { namespace ai {
struct O3;
struct O2;
struct O1 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual O2* v40();
};
struct O2 {
    virtual void v0(); virtual void v1(); virtual void v2();
    virtual O3* v18(int x);
};
struct O3 {
    virtual void v0(); virtual void v1(); virtual void v2();
    virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6();
    virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10();
    virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
    virtual O3* v78();
    unsigned char _pad[0x20];
    void* m_28;
};
bool mustBorrow_0x786fa0(void* self, O1* o) {
    return o->v40()->v18(*(int*)0xc7ce6c)->v78()->m_28 == 0;
}
} } }
