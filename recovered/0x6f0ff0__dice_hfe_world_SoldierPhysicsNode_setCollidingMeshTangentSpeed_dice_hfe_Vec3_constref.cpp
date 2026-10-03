// FUNCTION: BF2 0x6f0ff0
namespace dice { namespace hfe { namespace world {

struct Vec3 { float x,y,z; };

void fn_0x6f0ff0(void* self, const Vec3& v) {
    Vec3* dst = (Vec3*)((char*)self + 0xbc);
    float z = v.z, y = v.y, x = v.x;
    *(volatile float*)&dst->x = x;
    dst->y = y;
    dst->z = z;
    *(volatile int*)((char*)self + 0xc8) = 0x14;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_SoldierPhysicsNode_setCollidingMeshTangentSpeed_dice_hfe_Vec3_constref (0x6f0ff0)
