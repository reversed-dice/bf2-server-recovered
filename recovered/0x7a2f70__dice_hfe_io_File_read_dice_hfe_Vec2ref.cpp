// FUNCTION: BF2 0x7a2f70
namespace dice { namespace hfe { namespace io {
struct VStream {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual int vslot0x20(void* out, int n);
};
struct File {
    VStream* m_stream;
    bool read_7a2f70(unsigned int& out);
};
bool File::read_7a2f70(unsigned int& out) {
    return m_stream->vslot0x20(&out, 0x8) == 0x8;
}
} } }
