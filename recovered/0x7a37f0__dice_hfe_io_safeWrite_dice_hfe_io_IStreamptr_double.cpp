// FUNCTION: BF2 0x7a37f0
namespace dice { namespace hfe { namespace io {
struct VS5b {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual int v0x28(void* out, int n);
};
bool safeWrite_0x7a37f0(VS5b* s, double v) {
    double local = v;
    return s->v0x28(&local, 8) == 8;
}
} } }
