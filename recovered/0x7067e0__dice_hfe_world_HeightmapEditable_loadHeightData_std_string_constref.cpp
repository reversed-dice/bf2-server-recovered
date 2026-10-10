// FUNCTION: BF2 0x7067e0
#include <string>

namespace dice {
namespace hfe {
namespace world {

class Heightmap {
public:
    virtual ~Heightmap();
    char pad[0x28 - 8];
    int m_28;
    int m_2c;
    int m_30;

    virtual void loadHeightData(std::string const& filename);
};

class HeightmapEditable : public Heightmap {
public:
    char pad2[0x100 - sizeof(Heightmap)];
    char* m_data;

    virtual void loadHeightData(std::string const& filename);
};

void HeightmapEditable::loadHeightData(std::string const& filename) {
    Heightmap::loadHeightData(filename);
    if (m_data != 0) {
        delete[] m_data;
    }
    m_data = new char[(m_28 * m_2c * m_30) / 8];
}

}
}
}
