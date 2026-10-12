// FUNCTION: BF2 0x7a2aa0
namespace dice { namespace hfe { namespace io {

class Crc32 {
public:
    static unsigned int* m_crc32Table;
    static void initCrc32();
    static void crc32(unsigned int* out, unsigned char* data, int len);
};

void Crc32::crc32(unsigned int* out, unsigned char* data, int len) {
    if (m_crc32Table == 0) {
        initCrc32();
    }
    unsigned int crc = 0;
    if (len > 0) {
        crc = 0xffffffffu;
        unsigned int i = 0;
        do {
            crc = (crc << 8) ^ m_crc32Table[((crc >> 24) ^ data[i]) & 0xff];
            i++;
        } while ((int)i < len);
        crc = ~crc;
    }
    *out = crc;
}

} } }
