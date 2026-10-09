// FUNCTION: BF2 0x7d7230

namespace dice { namespace hfe { namespace io {

class BitStream {
public:
    void writeBits(void const* data, unsigned int nbits);
    void readBits(void* data, unsigned int nbits);
    char m_pad[0x20];
    bool m_error;
    int m_errorCode;
};

bool writeBasicHeader(BitStream* bs, unsigned char a, unsigned int b)
{
    unsigned int t;
    t = b;
    bs->writeBits(&t, 4);
    t = a;
    bs->writeBits(&t, 8);
    if (bs->m_error) {
        bs->m_errorCode = 0;
        bs->m_error = false;
        return false;
    }
    return true;
}

}}}
