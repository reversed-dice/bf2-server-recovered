// FUNCTION: BF2 0x7dbb40
#include <string.h>
namespace dice { namespace hfe { namespace io {

class BufferedStream {
public:
    unsigned int write(void const* data, unsigned int size);

    struct Buffer {
        unsigned int m_capacity;
        unsigned int m_used;
        unsigned int m_pad0;
        unsigned int m_pad1;
        char* m_data;
        void allocate();
    };

private:
    char _pad0[0x20];
    void* m_20;
    char _pad1[0x50 - 0x28];
    Buffer m_buffer;
};

unsigned int BufferedStream::write(void const* data, unsigned int size)
{
    m_buffer.allocate();

    if (m_buffer.m_capacity > size) {
        if (m_buffer.m_capacity < m_buffer.m_used + size) {
            ((void (*)(void*))(*(void***)this)[0x58 / 8])(this);
        }
        memcpy(m_buffer.m_data + m_buffer.m_used, data, size);
        m_buffer.m_used += size;
        return size;
    }

    ((void (*)(void*))(*(void***)this)[0x58 / 8])(this);
    return ((unsigned int (*)(void*, void const*, unsigned int))(*(void***)m_20)[0x28 / 8])(m_20, data, size);
}

} } }
