// FUNCTION: BF2 0x706830
#include <string.h>

namespace dice {
namespace hfe {
namespace world {

class Heightmap {
public:
    virtual ~Heightmap();
    char pad[0x28 - 8];
    int m_2c;
    int m_28;
};

class HeightmapEditable : public Heightmap {
public:
    char pad2[0xcc - 0x30];
    int m_cc;
    char* m_data;

    int createMaterialData(int v);
};

int HeightmapEditable::createMaterialData(int v) {
    if (m_data) {
        delete[] m_data;
    }
    int n = m_2c * m_28 * m_cc;
    m_data = new char[n];
    memset(m_data, v, n);
    return 1;
}

} } }
