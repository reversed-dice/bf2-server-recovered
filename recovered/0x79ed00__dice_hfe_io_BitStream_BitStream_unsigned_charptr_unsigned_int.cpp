// FUNCTION: BF2 0x79ed00
namespace dice { namespace hfe { namespace io {
struct Vec3 { float x, y, z; };
class BitStream {
public:
    unsigned char _pad0[0x10];
    char m_x10;
    unsigned char _pad1[0x47];
    Vec3 m_x58;
    BitStream(unsigned char* data, unsigned int size);
    void init(unsigned char* data, unsigned int size);
};
BitStream::BitStream(unsigned char* data, unsigned int size)
{
    float* p = &m_x58.x; p[0] = 0.0f; p[1] = 0.0f; p[2] = 0.0f;
    m_x10 = 0;
    init(data, size);
}
}}}
