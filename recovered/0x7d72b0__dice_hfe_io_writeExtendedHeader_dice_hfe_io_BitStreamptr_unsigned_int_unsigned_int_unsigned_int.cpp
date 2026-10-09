// FUNCTION: BF2 0x7d72b0

namespace dice { namespace hfe { namespace io {

class BitStream {
public:
    void writeBits(void const* data, unsigned int nbits);
    void readBits(void* data, unsigned int nbits);
    char m_pad[0x20];
    bool m_error;
    int m_errorCode;
};

bool writeExtendedHeader(BitStream* bs, unsigned int a, unsigned int b, unsigned int c)
{
    unsigned int t;
    t = a & 0x3f;
    bs->writeBits(&t, 6);
    t = b & 0x3f;
    bs->writeBits(&t, 6);
    t = c;
    bs->writeBits(&t, 32);
    if (bs->m_error) {
        bs->m_errorCode = 0;
        bs->m_error = false;
        return false;
    }
    return true;
}

}}}
