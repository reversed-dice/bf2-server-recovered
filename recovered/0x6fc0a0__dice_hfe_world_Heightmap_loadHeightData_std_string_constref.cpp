// FUNCTION: BF2 0x6fc0a0
#include <string>
#include <cstring>
namespace dice { namespace hfe { namespace io {
extern void* fileManager;
} } }
namespace dice { namespace hfe { namespace world {

class Heightmap
{
public:
    void loadHeightData(std::string const& path);
    void createQuadTree(int size);
private:
    char m_pad0[0x10];
    std::string m_name;      // +0x10
    char* m_data;            // +0x18
    char m_pad1[0x28 - 0x20];
    int m_28;                // +0x28
    int m_2c;                // +0x2c
    int m_30;                // +0x30
    char m_pad2[0xcc - 0x34];
    int m_cc;                // +0xcc
    char* m_second;          // +0xd0
};

void Heightmap::loadHeightData(std::string const& path)
{
    if (m_data) {
        delete[] m_data;
    }
    m_name = path;
    void* lector = ((void* (*)(void*, std::string const&, int, int, int))
        (*(void***)dice::hfe::io::fileManager)[0x30/8])
        (dice::hfe::io::fileManager, path, 2, 0, 0);
    int n = m_28 * m_2c * m_30 / 8;
    char* buf = new char[n];
    m_data = buf;
    ((void (*)(void*, void*, int))(*(void***)lector)[0x20/8])(lector, buf, n);
    ((void (*)(void*))(*(void***)lector)[0x10/8])(lector);
    if (m_30 == 0x10) {
        char* buf3 = m_data;
        int count = n / 2;
        if (count > 0) {
            unsigned short* p = (unsigned short*)buf3;
            for (int i = 0; i != count; ++i, ++p) {
                if (*p > 0xff00) {
                    *p = 0xff00;
                }
            }
        }
    }
    createQuadTree(m_28);
    if (m_second == 0) {
        int n2 = m_cc * (m_28 * m_2c * m_cc);
        char* buf2 = new char[n2];
        m_second = buf2;
        memset(buf2, 0, n2);
    }
}

}}}
