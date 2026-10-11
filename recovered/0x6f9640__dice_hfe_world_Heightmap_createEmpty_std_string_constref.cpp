// FUNCTION: BF2 0x6f9640
#include <string>
#include <cstring>
namespace dice { namespace hfe { namespace world {
class Heightmap {
public:
    void createEmpty(std::string const& name);
private:
    char m_pad0[0x10];
    std::string m_name;      // +0x10
    char* m_data;            // +0x18
    char m_pad1[0x28 - 0x20];
    int m_a;                 // +0x28
    int m_b;                 // +0x2c
    int m_c;                 // +0x30
    char m_pad2[0xd0 - 0x34];
    char* m_second;          // +0xd0
};

void Heightmap::createEmpty(std::string const& name)
{
    if (m_data)
        delete[] m_data;
    m_name = name;
    int count = m_a * m_b * m_c / 8;
    m_data = new char[count];
    memset(m_data, 0, count);
    if (m_second) {
        delete[] m_second;
        m_second = 0;
    }
}
}}}
