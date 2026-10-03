// FUNCTION: BF2 0x6f9490
// 0x6f9490 - Heightmap_getWaterLevelInWorldCoords (7 ins, 0 calls)
namespace dice { namespace hfe { namespace world {
void dice_hfe_world_Heightmap_getWaterLevelInWorldCoords_float_float_const(long self, float x, float y) {
    float dx = x - (float)(int)(*(long*)(self + 0x20));
    float dy = y - (float)*(int*)(self + 0x24);
    typedef float (*Fn)(long, float, float);
    Fn f = (Fn)(*(long*)(*(long*)self + 0x1b0));
    f(self, dx, dy);
}
} } }

// REVERSED_FUNCTION: dice_hfe_world_Heightmap_getWaterLevelInWorldCoords_float_float_const (0x6f9490)
