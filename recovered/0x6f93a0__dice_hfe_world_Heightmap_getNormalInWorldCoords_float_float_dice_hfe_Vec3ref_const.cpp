// FUNCTION: BF2 0x6f93a0
// 0x6f93a0 - Heightmap_getNormalInWorldCoords (7 ins, 0 calls)
namespace dice { namespace hfe { namespace world {
void dice_hfe_world_Heightmap_getNormalInWorldCoords_float_float_dice_hfe_Vec3ref_const(long self, float x, float y) {
    float dx = x - (float)(int)(*(long*)(self + 0x20));
    float dy = y - (float)*(int*)(self + 0x24);
    typedef void (*Fn)(long, float, float);
    Fn f = (Fn)(*(long*)(*(long*)self + 0x138));
    f(self, dx, dy);
}
} } }

// REVERSED_FUNCTION: dice_hfe_world_Heightmap_getNormalInWorldCoords_float_float_dice_hfe_Vec3ref_const (0x6f93a0)
