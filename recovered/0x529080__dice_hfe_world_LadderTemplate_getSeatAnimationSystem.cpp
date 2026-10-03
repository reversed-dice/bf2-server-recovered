// FUNCTION: BF2 0x529080
namespace dice { namespace hfe { namespace world {
struct GM {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void* vslot0x38(void* a);
};
extern GM* g_mgr_010935c8;
struct Obj {
    unsigned char _pad[464];
    void* m_1d0;
    void* f_529080();
};
void* Obj::f_529080() {
    return g_mgr_010935c8->vslot0x38(m_1d0);
}
} } }
