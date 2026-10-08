// FUNCTION: BF2 0x582ce0
namespace dice { namespace hfe {
struct Vec3 {
    float x, y, z;
    Vec3() : x(0.0f), y(0.0f), z(0.0f) {}
    Vec3(float a, float b, float c) : x(a), y(b), z(c) {}
    Vec3(Vec3 const& o) : x(o.x), y(o.y), z(o.z) {}
};
struct Mat4 { float m[16]; };
void getRotationZXY(Mat4 const& mat, float& a, float& b, float& c);
namespace world {
class IkTemplateComponent {
public:
    Vec3 getRotationLeft() const;
};
Vec3 IkTemplateComponent::getRotationLeft() const {
    float x, y, z;
    getRotationZXY(*(Mat4 const*)((char const*)this + 0x20), x, y, z);
    return Vec3(-z, -y, -x);
}
}}
}
