// FUNCTION: BF2 0x5185f0
namespace dice { namespace hfe { namespace world {
struct GM {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6();
    virtual void* vslot0x38(void* a);
};
extern GM* g_mgr_10935c8;
struct GRT {
    unsigned char _pad[0x1d0];
    void* m_1d0;
    void* getSeatAnimation_0x5185f0();
};
void* GRT::getSeatAnimation_0x5185f0() {
    return g_mgr_10935c8->vslot0x38(m_1d0);
}
} } }
