// FUNCTION: BF2 0x7db9c0
namespace dice { namespace hfe { namespace io {

class IStream {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void write(const void* buf);
};

class BufferedStream {
public:
    char _pad0[0x20];
    IStream* m_stream;
    char _pad1[0x2c];
    unsigned int m_pending;
    char _pad2[0x8];
    void* m_buf;

    void flushWrite();
    void dummy_pad_0();
};

void BufferedStream::dummy_pad_0() { if (m_pending == 0) return; m_stream->write(m_buf); m_pending = 0; }

void BufferedStream::flushWrite() {
    if (m_pending == 0)
        return;
    m_stream->write(m_buf);
    m_pending = 0;
}

} } }
