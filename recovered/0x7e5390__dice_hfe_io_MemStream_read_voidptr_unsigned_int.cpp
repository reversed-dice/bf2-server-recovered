// FUNCTION: BF2 0x7e5390
extern "C" void* memcpy(void*, void const*, unsigned long);
namespace dice { namespace hfe { namespace io {

class MemStream {
public:
    char pad00[0x18];
    char* m_data;
    unsigned int m_size;
    unsigned int pad24;
    unsigned int m_pos;

    unsigned int read(void* dest, unsigned int n);
};

unsigned int MemStream::read(void* dest, unsigned int n)
{
    if (n == 0)
        return 0;
    unsigned int cnt = n;
    if (m_pos + n > m_size)
        cnt = m_size - m_pos;
    memcpy(dest, m_data + m_pos, cnt);
    m_pos += cnt;
    return cnt;
}

} } }
