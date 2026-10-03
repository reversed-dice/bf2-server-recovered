// FUNCTION: BF2 0x6f97d0
namespace dice { namespace hfe { namespace world {
typedef void (*vfn2f)(void*, float, float);
void fn_0x6f97d0(void* self, void* v) {
    void** vt = *(void***)self;
    ((vfn2f)vt[0x1b0/8])(self, *(float*)v, *(float*)((char*)v+8));
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_Heightmap_getWaterLevelInLocalCoords_dice_hfe_Vec3_constref_const (0x6f97d0)
