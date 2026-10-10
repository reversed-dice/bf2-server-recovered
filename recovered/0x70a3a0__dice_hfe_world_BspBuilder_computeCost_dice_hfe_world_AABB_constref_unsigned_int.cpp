// FUNCTION: BF2 0x70a3a0
struct Vec3 { float x, y, z; };
struct AABB { Vec3 m_min; Vec3 m_max; };

struct BspBuilder {
    float computeCost(AABB const& aabb, unsigned int numFaces);
};

float BspBuilder::computeCost(AABB const& aabb, unsigned int numFaces)
{
    Vec3 const& mn = aabb.m_min;
    Vec3 const& mx = aabb.m_max;
    float dx = mx.x - mn.x;
    float dy = mx.y - mn.y;
    float dz = mx.z - mn.z;
    return (dx * dy + dx * dz + dy * dz) * (float)numFaces;
}
