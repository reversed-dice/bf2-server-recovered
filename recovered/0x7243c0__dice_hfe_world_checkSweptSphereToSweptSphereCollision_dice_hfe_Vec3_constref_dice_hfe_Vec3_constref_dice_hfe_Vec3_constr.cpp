// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x7243c0
struct Vec3 { float x, y, z; };
extern float func_0x00723cf0(Vec3 const&, Vec3 const&, Vec3 const&, Vec3 const&, float&, float&);

bool checkSweptSphereToSweptSphereCollision(Vec3 const& p1, Vec3 const& p2, Vec3 const& p3, Vec3 const& p4,
                                            float r1, float r2, float& t1, float& t2, float& dist)
{
    float d = func_0x00723cf0(p1, p2, p3, p4, t1, t2);
    dist = d;
    return d <= r1 + r2;
}
