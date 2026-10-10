// FUNCTION: BF2 0x718b50
#include <vector>

namespace dice { namespace hfe { namespace world {

struct Lod {
    std::vector<void*> v;   // +0x0 begin, +0x8 end
    char rest[0x18];
};

class CollisionMeshTemplate {
public:
    char m_pad[0x8];
    Lod* m_lods;   // +0x8

    void* getValidLodRaw(int lodIdx, int idx);
};

void* CollisionMeshTemplate::getValidLodRaw(int lodIdx, int idx)
{
    Lod& lod = m_lods[lodIdx];
    if (idx < 0 || idx >= (int)lod.v.size())
        return 0;
    return lod.v[idx];
}

}}}
