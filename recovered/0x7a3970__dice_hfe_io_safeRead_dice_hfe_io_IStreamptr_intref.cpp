// FUNCTION: BF2 0x7a3970
namespace dice { namespace hfe { namespace io {
struct IStream {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual int vslot0x20(void* out, int n);
};
bool sr_7a3970(IStream* s, void* out) {
    return s->vslot0x20(out, 0x4) == 0x4;
}
} } }
