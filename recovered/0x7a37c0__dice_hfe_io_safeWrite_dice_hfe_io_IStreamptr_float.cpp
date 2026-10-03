// FUNCTION: BF2 0x7a37c0
namespace dice { namespace hfe { namespace io {
struct VS5 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual int v0x28(void* out, int n);
};
bool safeWrite_0x7a37c0(VS5* s, float v) {
    float local = v;
    return s->v0x28(&local, 4) == 4;
}
} } }
