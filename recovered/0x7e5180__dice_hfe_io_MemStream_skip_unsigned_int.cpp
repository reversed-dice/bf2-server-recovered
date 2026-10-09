// FUNCTION: BF2 0x7e5180
namespace dice { namespace hfe { namespace io {

class MemStream {
public:
    char pad00[0x18];
    char* m_data;
    unsigned int m_size;
    unsigned int pad24;
    unsigned int m_pos;

    bool skip(unsigned int n);
};

bool MemStream::skip(unsigned int n)
{
    if (!((int (*)(void*))(*(void***)this)[0x38 / 8])(this))
        return false;
    m_pos += n;
    if (m_pos > m_size)
        m_pos = m_size;
    return true;
}

} } }
