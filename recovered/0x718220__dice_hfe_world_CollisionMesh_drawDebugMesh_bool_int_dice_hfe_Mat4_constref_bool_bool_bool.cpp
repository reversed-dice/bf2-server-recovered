// FUNCTION: BF2 0x718220
namespace dice { namespace hfe { class Mat4; } }

namespace dice { namespace hfe { namespace world {

class CollisionMeshTemplate;

class CollisionMesh {
public:
    int getGeometryCount() const;
    void drawDebugMesh(bool b, int p3, const Mat4& m, bool e, bool f, bool g);
    char _pad0[0x18];
    CollisionMeshTemplate* m_template;
};

class CollisionMeshTemplate {
public:
    void drawDebugMesh(int p3, int b, const Mat4& m, bool e, bool f, bool g);
};

}}}

void dice::hfe::world::CollisionMesh::drawDebugMesh(bool b, int p3, const Mat4& m, bool e, bool f, bool g)
{
    if (getGeometryCount() <= 1)
    {
        if (b == 1)
            return;
    }
    m_template->drawDebugMesh(b == 1, p3, m, e, f, g);
}
