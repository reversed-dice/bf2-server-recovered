// FUNCTION: BF2 0x7f9cd0
namespace dice { namespace hfe { namespace io {
struct V1b {
    virtual void v0();
    virtual void v1();
    virtual void v10();
};
extern V1b* g_mgr_10b4040;
int shutdown_0x7f9cd0() {
    if (__builtin_expect(g_mgr_10b4040 != 0, 1))
        g_mgr_10b4040->v10();
    return 1;
}
} } }
