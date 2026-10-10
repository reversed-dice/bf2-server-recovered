// FUNCTION: BF2 0x6f9b50
// BF2_FLAGS: -fno-strict-aliasing

namespace dice { namespace hfe { namespace world {

struct Vec3 { float x; float y; float z; };

class Heightmap {
public:
    bool getSquareInLocalCoords(float, float, Vec3*, bool&) const;
    void getSquareInWorldCoords(float, float, Vec3*, bool&) const;
private:
    char m_pad[0x20];
    int m_gridSizeX;
    int m_gridSizeZ;
};

void Heightmap::getSquareInWorldCoords(float x, float y, Vec3* out, bool& valid) const
{
    getSquareInLocalCoords(x - (float)m_gridSizeX, y - (float)m_gridSizeZ, out, valid);
    Vec3* p = out;
    int i = 4;
    do {
        p->x += (float)m_gridSizeX;
        p->z += (float)m_gridSizeZ;
        ++p;
    } while (--i);
}

}}}
