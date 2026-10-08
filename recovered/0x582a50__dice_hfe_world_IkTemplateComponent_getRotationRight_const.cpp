// FUNCTION: BF2 0x582a50
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
    Vec3 getRotationRight() const;
};
Vec3 IkTemplateComponent::getRotationRight() const {
    float x, y, z;
    getRotationZXY(*(Mat4 const*)((char const*)this + 0x78), x, y, z);
    return Vec3(-z, -y, -x);
}
}}
}
