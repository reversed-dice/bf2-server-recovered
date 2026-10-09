// FUNCTION: BF2 0x9d98f0
// BF2_FLAGS: -fno-strict-aliasing
class Vec3 { public: float x, y, z; Vec3() {} Vec3(const Vec3& o) { x=o.x; y=o.y; z=o.z; } };
class PSTB { public: Vec3 getEmitRadius() const; void setEmitRadius(Vec3 v); };
PSTB* getParticleSystemTemplateBase();
void* executeObjectMethod(void* param_1) {
    char* self = (char*)param_1;
    int idx = *(int*)(self + 0x30);
    if (idx == 0) {
        *(char*)(self + 0x108) = 1;
        Vec3 e = getParticleSystemTemplateBase()->getEmitRadius();
        Vec3* out = (Vec3*)(self + 0x10c);
        out->x = e.x; out->y = e.y; out->z = e.z;
        return out;
    }
    if (idx == 1) {
        Vec3* s = *(Vec3**)(self + 0x38);
        Vec3 a;
        a.z = s->z; a.y = s->y; a.x = s->x;
        *(char*)(self + 0x108) = 0;
        getParticleSystemTemplateBase()->setEmitRadius(a);
        return 0;
    }
    return 0;
}
