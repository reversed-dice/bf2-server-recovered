// FUNCTION: BF2 0x7d7350

namespace dice { namespace hfe { namespace io {

class BitStream {
public:
    void writeBits(void const* data, unsigned int nbits);
    void readBits(void* data, unsigned int nbits);
    char m_pad[0x20];
    bool m_error;
    int m_errorCode;
};

bool readBasicHeader(BitStream* bs, unsigned char& a, unsigned int& b)
{
    unsigned int t;
    t = 0;
    bs->readBits(&t, 4);
    b = t;
    t = 0;
    bs->readBits(&t, 8);
    a = (unsigned char)t;
    if (bs->m_error) {
        bs->m_errorCode = 0;
        bs->m_error = false;
        return false;
    }
    return true;
}

}}}
