// FUNCTION: BF2 0x7a2db0
namespace dice { namespace hfe { namespace io {
struct VStream2 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual int vread0x20(void* out, int n);
};
struct File2 {
    VStream2* m_stream;
    bool read_0x7a2db0(unsigned char& out);
};
bool File2::read_0x7a2db0(unsigned char& out) {
    return m_stream->vread0x20(&out, 1) == 1;
}
} } }
