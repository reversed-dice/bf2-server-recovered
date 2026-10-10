// FUNCTION: BF2 0x6ff6b0

namespace dice { namespace hfe { namespace world {

class IHeightmap;

class HeightmapCluster {
public:
    bool getSectorOfHeightmap(IHeightmap const* hm, int& a, int& b) const;

    char m_pad0[0x28];
    int m_clusterSize;   // +0x28
};

bool HeightmapCluster::getSectorOfHeightmap(IHeightmap const* hm, int& a, int& b) const
{
    typedef IHeightmap* (*get_t)(HeightmapCluster const*, int, int);
    int half = m_clusterSize / 2;
    for (b = -half; b <= half; ++b) {
        for (a = -half; a <= half; ++a) {
            get_t f = *(get_t*)((char*)*(void**)this + 0x90);
            if (f(this, a, b) == hm)
                return true;
        }
    }
    return false;
}

} } }
