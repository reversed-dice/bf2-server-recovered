// FUNCTION: BF2 0x6a9090
struct Vec3 {
    float x, y, z;
    Vec3() {}
    Vec3(float a, float b, float c) : x(a), y(b), z(c) {}
    Vec3(const Vec3&) {}
    ~Vec3() {}
};
struct ObjectTemplateAdm { Vec3 getGroundPos(Vec3 const&) const; };
Vec3 ObjectTemplateAdm::getGroundPos(Vec3 const& v) const {
    return Vec3(v.x, v.y, v.z);
}
