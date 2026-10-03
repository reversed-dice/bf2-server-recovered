// FUNCTION: BF2 0x706ad0
// 0x706ad0 - HeightmapEditable_setWorldScaledHeightInWorldCoords (8 ins, 0 calls)
// Same pattern + MULSS for scale factor
namespace dice { namespace hfe { namespace world {
void dice_hfe_world_HeightmapEditable_setWorldScaledHeightInWorldCoords_float_float_float_int(long self, float x, float y, float scale, int a) {
    float dx = x - (float)(int)(*(long*)(self + 0x20));
    float dy = y - (float)*(int*)(self + 0x24);
    float scaled = scale * *(float*)(self + 0x4c);
    typedef void (*Fn)(long, int, float, float, float);
    Fn f = (Fn)(*(long*)(*(long*)self + 0x220));
    f(self, a, dx, dy, scaled);
}
} } }

// REVERSED_FUNCTION: dice_hfe_world_HeightmapEditable_setWorldScaledHeightInWorldCoords_float_float_float_int (0x706ad0)
