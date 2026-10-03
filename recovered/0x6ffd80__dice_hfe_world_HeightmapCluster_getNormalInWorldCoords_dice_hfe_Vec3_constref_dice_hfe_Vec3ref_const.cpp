// FUNCTION: BF2 0x6ffd80
// 0x6ffd80 dice_hfe_world_HeightmapCluster_getNormalInWorldCoords_dice_hfe_Vec3_constref_dice_hfe_Vec3ref_const
void getNormalInWorldCoords(void* self, void* pos, void* out)
{
    float x = *(float*)pos;
    float z = *(float*)((char*)pos + 8);
    void** vtbl = *(void***)self;
    ((void(*)(float, float, void*, void*))vtbl[0xf8/8])(x, z, self, out);
}
