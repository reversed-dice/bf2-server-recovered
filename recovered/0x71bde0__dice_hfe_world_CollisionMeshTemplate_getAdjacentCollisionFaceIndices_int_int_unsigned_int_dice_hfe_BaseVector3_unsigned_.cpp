// FUNCTION: BF2 0x71bde0
// BF2_FLAGS: -fno-strict-aliasing
namespace dice { namespace hfe {

template <typename T, typename Traits>
struct BaseVector3 {
    T m_v[3];
    T& operator[](int i) { return m_v[i]; }
};

namespace world {

class CollisionMeshTemplate {
public:
    class Lod {
    public:
        char pad[0x108];
        unsigned short* m_indices;   // 0x108
    };
    Lod* getValidLod(int a, int b) const;
    bool getAdjacentCollisionFaceIndices(int a, int b, unsigned int face,
                                         BaseVector3<unsigned short, int>& out) const;
private:
    char pad[0x8];
};

__attribute__((noinline)) CollisionMeshTemplate::Lod*
CollisionMeshTemplate::getValidLod(int a, int b) const
{
    return 0;
}

bool CollisionMeshTemplate::getAdjacentCollisionFaceIndices(
    int a, int b, unsigned int face, BaseVector3<unsigned short, int>& out) const
{
    const Lod* lod = getValidLod(a, b);
    if (!lod->m_indices)
        return false;
    for (int i = 0; i < 3; ++i)
        out[i] = lod->m_indices[face * 3 + i];
    return true;
}

} }
}
