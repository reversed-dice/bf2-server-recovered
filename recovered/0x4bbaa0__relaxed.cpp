// FUNCTION: BF2 0x4bbaa0
namespace dice { namespace hfe {

extern "C" void dice_hfe_world_Object_setAbsolutePosition_dice_hfe_Vec3_constref(void*, void*);
extern "C" int dice_hfe_SpawnManager_makeAverageGroupPositionDirty_int(void*, int);
void fn_0x4bba60(void* self, void* pos) {
    dice_hfe_world_Object_setAbsolutePosition_dice_hfe_Vec3_constref(self, pos);
    void** vt = *(void***)self;
    int r = ((int(*)(void*))vt[0x340/8])(self);
    void* g = *(void**)0x10c42c0;
    dice_hfe_SpawnManager_makeAverageGroupPositionDirty_int(g, r);
}

} }
// REVERSED_FUNCTION: dice_hfe_SpawnPoint_setAbsolutePosition_dice_hfe_Vec3_constref (0x4bba60)
