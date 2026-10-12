// FUNCTION: BF2 0x70a330
namespace dice { namespace hfe {

struct Vec3 {
    float x, y, z;
    float& operator[](int i) { return (&x)[i]; }
    const float& operator[](int i) const { return *(const float*)((const char*)this + i * sizeof(float)); }
};

namespace world {

struct AABB {
    Vec3 min;
    Vec3 max;
};

struct BspBuilderNode {
    AABB box;
};

struct BspBuilderFace {
    unsigned char _pad[0x24];
    AABB box;
};

class BspBuilder {
public:
    int classifyFace(const BspBuilderFace& face, const BspBuilderNode& node, float d, int axis);
};

int BspBuilder::classifyFace(const BspBuilderFace& face, const BspBuilderNode& node, float d, int axis)
{
    int r = 0;
    if (face.box.max[axis] > d)
        r |= 2;
    if (face.box.min[axis] < d)
        r |= 1;
    if (d == face.box.min[axis] && face.box.max[axis] == face.box.min[axis]) {
        if (d - (&node.box.min.x)[axis] < (&node.box.max.x)[axis] - d)
            r |= 1;
        else
            r |= 2;
    }
    return r;
}

} } }
