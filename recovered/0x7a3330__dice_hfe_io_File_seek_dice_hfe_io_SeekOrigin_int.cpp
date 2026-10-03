// FUNCTION: BF2 0x7a3330
namespace dice { namespace hfe { namespace io {
struct VS3 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual bool v0x60();
};
struct File3 {
    VS3* m_stream;
    bool seek_0x7a3330();
};
bool File3::seek_0x7a3330() {
    return m_stream->v0x60();
}
} } }
