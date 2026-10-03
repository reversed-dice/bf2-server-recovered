// FUNCTION: BF2 0x6f9740
// 0x6f9740 dice_hfe_world_Heightmap_getNormalInLocalCoords_dice_hfe_Vec3_constref_dice_hfe_Vec3ref_const
void getNormalInLocalCoords(void* self, void* pos, void* out)
{
    float x = *(float*)pos;
    float z = *(float*)((char*)pos + 8);
    void** vtbl = *(void***)self;
    ((void(*)(float, float, void*, void*))vtbl[0x138/8])(x, z, self, out);
}
