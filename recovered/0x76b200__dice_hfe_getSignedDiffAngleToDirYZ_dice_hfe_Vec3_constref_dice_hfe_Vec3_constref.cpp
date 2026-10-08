// FUNCTION: BF2 0x76b200
struct Vec3 { float x, y, z; };
struct Vec2 { float x, y; Vec2(float a, float b) : x(a), y(b) {} };
extern float func_0x0076b110(Vec2 const&, Vec2 const&);
float f(Vec3 const& a, Vec3 const& b) {
    return func_0x0076b110(Vec2(a.y, a.z), Vec2(b.y, b.z));
}
