// FUNCTION: BF2 0x7fa880
namespace dice { namespace hfe { namespace io {
struct V4e {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual int v0x20(void* a);
};
extern V4e* g_mgr_10b4040;
bool init_0x7fa880(void* unused, unsigned int x) {
    unsigned int local = x;
    g_mgr_10b4040->v0x20(&local);
    return local != 0;
}
} } }
