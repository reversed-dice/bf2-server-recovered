// FUNCTION: BF2 0x7197d0
namespace dice { namespace hfe { namespace world {

struct RawGeomLod {
    void** m_begin;      // 0x0
    void** m_end;        // 0x8
    char   _pad[0x20];   // to 0x30
};

class CollisionMeshTemplate {
public:
    char _pad0[0x8];
    RawGeomLod* m_geoms;             // 0x8
    void* getValidLodRaw(int geom, int lod) const;
};

void* CollisionMeshTemplate::getValidLodRaw(int geom, int lod) const
{
    RawGeomLod* g = &m_geoms[geom];
    if (lod < 0)
        return 0;
    if (lod >= (int)(g->m_end - g->m_begin))
        return 0;
    return g->m_begin[lod];
}

}}}
