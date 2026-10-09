// FUNCTION: BF2 0x7dbbe0
// BF2_FLAGS: -fno-strict-aliasing
namespace dice { namespace hfe { namespace io {

typedef void (*VF)(void*);
typedef char (*VF30)(void*, unsigned int);

class BufferedStream {
public:
    char pad[0x20];
    void* m_stream;
    char pad28[0x3c - 0x28];
    unsigned int m_end;
    unsigned int m_pos;
    bool skip(unsigned int n);
};

bool BufferedStream::skip(unsigned int n)
{
    ((VF*)(*(void***)this))[0x58 / 8](this);
    unsigned int avail = m_end - m_pos;
    if (n < avail) {
        m_pos += n;
        return true;
    }
    m_pos = 0;
    m_end = 0;
    return ((VF30*)(*(void***)m_stream))[0x30 / 8](m_stream, n - avail) != 0;
}

} } }
