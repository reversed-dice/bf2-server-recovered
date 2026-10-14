// FUNCTION: BF2 0x7187a0
namespace dice { namespace hfe {
class Mat4;
class Vec3;
namespace world { class CollisionFaceInfo; }
}}

namespace dice { namespace hfe { namespace world {

class CollisionMeshTemplate;

class CollisionMesh {
public:
    void drawDebugMesh(bool b, int p3, const Mat4& m, bool e, bool f, bool g);
    bool getDistance(int a2, bool a3, const Mat4& a4, const Mat4& a5, const Vec3& a6,
                     const Vec3& a7, Vec3& a8, Vec3& a9, float& a10, float& a11,
                     int* a12, CollisionFaceInfo* a13, bool a14, bool a15) const;
    char _pad0[0x18];
    CollisionMeshTemplate* m_template;
    int _pad1;
    int m_24;
};

class CollisionMeshTemplate {
public:
    bool getDistance(int i1, int i2, bool b, const Mat4& a4, const Mat4& a5, const Vec3& a6,
                     const Vec3& a7, Vec3& a8, Vec3& a9, float& a10, float& a11,
                     int* a12, CollisionFaceInfo* a13, bool a14, bool a15) const;
};

}}}

bool dice::hfe::world::CollisionMesh::getDistance(int a2, bool a3, const Mat4& a4, const Mat4& a5,
    const Vec3& a6, const Vec3& a7, Vec3& a8, Vec3& a9, float& a10, float& a11,
    int* a12, CollisionFaceInfo* a13, bool a14, bool a15) const
{
    bool r = m_template->getDistance(m_24, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
    if (a13 != 0)
    {
        *(char*)a13 = (char)a2;
        ((char*)a13)[1] = (char)m_24;
    }
    return r;
}
