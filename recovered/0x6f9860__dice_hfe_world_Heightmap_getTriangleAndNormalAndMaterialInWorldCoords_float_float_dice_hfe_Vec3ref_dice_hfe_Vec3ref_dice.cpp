// FUNCTION: BF2 0x6f9860
// BF2_FLAGS: -fno-strict-aliasing
namespace dice { namespace hfe {

struct Vec3 {
    float x, y, z;
};

namespace world {

class Heightmap {
public:
    virtual void addRef();
    virtual void getRef();
    virtual void release();
    virtual void queryInterface(unsigned int) const;
    virtual ~Heightmap();
    virtual void f6();  virtual void f7();  virtual void f8();  virtual void f9();
    virtual void f10(); virtual void f11(); virtual void f12(); virtual void f13();
    virtual void f14(); virtual void f15(); virtual void f16(); virtual void f17();
    virtual void f18(); virtual void f19(); virtual void f20(); virtual void f21();
    virtual void f22(); virtual void f23(); virtual void f24(); virtual void f25();
    virtual void f26(); virtual void f27(); virtual void f28(); virtual void f29();
    virtual void f30(); virtual void f31(); virtual void f32(); virtual void f33();
    virtual void f34(); virtual void f35(); virtual void f36(); virtual void f37();
    virtual void f38(); virtual void f39(); virtual void f40(); virtual void f41();
    virtual void f42(); virtual void f43(); virtual void f44(); virtual void f45();
    virtual void f46();
    virtual void getTriangleAndNormalAndMaterialInWorldCoords(float x, float y, Vec3& normal, Vec3& v1, Vec3& v2, Vec3& v3, unsigned char& material) const;
    virtual void getTriangleAndNormalAndMaterialInLocalCoords(float x, float y, Vec3& normal, Vec3& v1, Vec3& v2, Vec3& v3, unsigned char& material) const;

    char pad0[0x18];
    int m_posX;
    int m_posZ;
};

void Heightmap::getTriangleAndNormalAndMaterialInWorldCoords(float x, float y, Vec3& normal, Vec3& v1, Vec3& v2, Vec3& v3, unsigned char& material) const {
    getTriangleAndNormalAndMaterialInLocalCoords(x - (float)this->m_posX, y - (float)this->m_posZ, normal, v1, v2, v3, material);
    v1.x += (float)this->m_posX;
    v1.z += (float)this->m_posZ;
    v2.x += (float)this->m_posX;
    v2.z += (float)this->m_posZ;
    v3.x += (float)this->m_posX;
    v3.z += (float)this->m_posZ;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_Heightmap_getTriangleAndNormalAndMaterialInWorldCoords_float_float_dice_hfe_Vec3ref_dice_hfe_Vec3ref_dice_hfe_Vec3ref_dice_hfe_Vec3ref_unsigned_charref_const (0x6f9860)
