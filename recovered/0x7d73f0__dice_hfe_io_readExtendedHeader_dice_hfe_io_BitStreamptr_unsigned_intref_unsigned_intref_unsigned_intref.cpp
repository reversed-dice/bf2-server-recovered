// FUNCTION: BF2 0x7d73f0
namespace dice { namespace hfe { namespace io {

class BitStream {
public:
    int readBits(void* data, unsigned int count);
    char          m_00[0x14];
    unsigned int  m_bitPos;
    unsigned int  m_18;
    unsigned int  m_size;
    unsigned char m_overflow;
    char          m_21[3];
    unsigned int  m_bitsRead;
};

bool readExtendedHeader(BitStream* stream, unsigned int& a, unsigned int& b, unsigned int& c)
{
    unsigned int value = 0;
    stream->readBits(&value, 6);
    a = value;
    value = 0;
    stream->readBits(&value, 6);
    b = value;
    value = 0;
    stream->readBits(&value, 0x20);
    c = value;
    if (stream->m_overflow)
    {
        stream->m_bitsRead = 0;
        stream->m_overflow = 0;
        return false;
    }
    return true;
}

}}}
