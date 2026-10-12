// BF2_FLAGS: -fcrossjumping -fno-strict-aliasing
// FUNCTION: BF2 0x700b80
namespace dice { namespace hfe { namespace world {

class HeightmapCluster {
public:
    void getSectorOfWorldCoords(float x, float z, int* sx, int* sz) const;
    char _pad[0x38];
    float m_size;
};

} } }

void dice::hfe::world::HeightmapCluster::getSectorOfWorldCoords(float x, float z, int* sx, int* sz) const
{
    const float half = 0.5f * m_size;
    *sx = 0;
    if (x < 0.0f)
    {
        while (x < -half) { --*sx; x += m_size; }
    }
    else
    {
        while (x >= half) { ++*sx; x -= m_size; }
    }
    *sz = 0;
    if (z < 0.0f)
    {
        while (z < -half) { --*sz; z += m_size; }
    }
    else
    {
        while (z >= half) { ++*sz; z -= m_size; }
    }
}
