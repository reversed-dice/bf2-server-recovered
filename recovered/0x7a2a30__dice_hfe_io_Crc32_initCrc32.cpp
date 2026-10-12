// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x7a2a30
namespace dice { namespace hfe { namespace io {

class Crc32 {
public:
    static unsigned int* m_crc32Table;
    static void initCrc32();
};

void Crc32::initCrc32() {
    if (m_crc32Table == 0) {
        m_crc32Table = new unsigned int[0x100];
    }
    for (int i = 0; i != 0x100; i++) {
        long c = (long)(int)(i << 24);
        int k = 8;
        while (k != 0) {
            if (c & 0x80000000L) {
                c = (c << 1) ^ 0x4c11db7;
            } else {
                c <<= 1;
            }
            --k;
        }
        m_crc32Table[i] = (unsigned int)c;
    }
}

} } }
