// FUNCTION: BF2 0x7f9d20
namespace dice { namespace hfe { namespace io {
struct V6g {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void* v0x30();
};
extern V6g* g_mgr_10b4038;
struct IM2 {
    unsigned char _pad[0x30];
    void* m_30;
    bool setGameControlMap_0x7f9d20();
};
bool IM2::setGameControlMap_0x7f9d20() {
    void* r = g_mgr_10b4038->v0x30();
    m_30 = r;
    return r != 0;
}
} } }
