// FUNCTION: BF2 0x71be50
namespace dice { namespace hfe { namespace world {

struct MeshLod { char pad[0xec]; float radius; };

class CollisionMeshTemplate {
public:
    float getBoundingRadius(int a, int lod) const;
    MeshLod* getValidLod(int a, int lod) const;
};

MeshLod* __attribute__((noinline)) CollisionMeshTemplate::getValidLod(int a, int lod) const { (void)a; (void)lod; return 0; }

float CollisionMeshTemplate::getBoundingRadius(int a, int lod) const
{
    MeshLod* l = getValidLod(a, lod);
    if (lod == 4 && l->radius < 0.01f)
        return 0.3f;
    return l->radius;
}

}}}
