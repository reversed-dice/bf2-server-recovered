// FUNCTION: BF2 0x725030
struct Vec3 { float x, y, z; };
extern bool func_0x00724ae0(Vec3 const&, Vec3 const&, Vec3 const&, Vec3 const&, Vec3 const&, Vec3 const&,
                            Vec3&, float&, float&, bool, float);

bool checkFaceAndEdgeCollisionDoubleSided(Vec3 const& p1, Vec3 const& p2, Vec3 const& p3, Vec3 const& p4,
                                          Vec3 const& p5, Vec3 const& p6, Vec3& out, float& a7, float& a8)
{
    return func_0x00724ae0(p1, p2, p3, p4, p5, p6, out, a7, a8, 1, 0.0f);
}
