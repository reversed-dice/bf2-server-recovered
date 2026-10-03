// FUNCTION: BF2 0x77ba00
namespace dice { namespace hfe { namespace ai {

typedef void* (*vfn2f)(void*, float, float);
void* fn_0x77ba00(void* self, void* pos) {
    void** vt = *(void***)self;
    float z = *(float*)((char*)pos+8);
    float x = *(float*)pos;
    return ((vfn2f)vt[0x28/8])(self, x, z);
}

} } }
// REVERSED_FUNCTION: dice_hfe_ai_BFTerrain_getTerrainAltitude_dice_hfe_Vec3_constref_const (0x77ba00)
