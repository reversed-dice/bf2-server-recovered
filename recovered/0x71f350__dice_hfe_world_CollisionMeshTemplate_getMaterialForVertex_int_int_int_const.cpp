// FUNCTION: BF2 0x71f350
namespace dice { namespace hfe { namespace world {

struct Lod { char pad[0x110]; unsigned short* m_110; };

class CollisionMeshTemplate {
public:
    int getMaterialForVertex(int a, int lod, int idx) const;
    Lod* getValidLod(int a, int lod) const;
    char pad[0x28];
    unsigned short* m_28;   // +0x28
};

Lod* __attribute__((noinline)) CollisionMeshTemplate::getValidLod(int a, int lod) const { (void)a; (void)lod; return 0; }

int CollisionMeshTemplate::getMaterialForVertex(int a, int lod, int idx) const
{
    Lod* l = getValidLod(a, lod);
    if (m_28) {
        unsigned short t = l->m_110[idx];
        return m_28[t];
    }
    return l->m_110[idx];
}

}}}
