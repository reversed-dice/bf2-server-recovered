// FUNCTION: BF2 0x4bbaa0
namespace dice { namespace hfe {

extern "C" void dice_hfe_world_Object_updateFlags_unsigned_int_unsigned_int(void*, unsigned, unsigned);
extern "C" int dice_hfe_SpawnManager_makeAverageGroupPositionDirty_int(void*, int);
void fn_0x4bbaa0(void* self, unsigned a, unsigned b) {
    dice_hfe_world_Object_updateFlags_unsigned_int_unsigned_int(self, a, b);
    void** vt = *(void***)self;
    int r = ((int(*)(void*))vt[0x340/8])(self);
    void* g = *(void**)0x10c42c0;
    dice_hfe_SpawnManager_makeAverageGroupPositionDirty_int(g, r);
}

} }
// REVERSED_FUNCTION: dice_hfe_SpawnPoint_updateFlags_unsigned_int_unsigned_int (0x4bbaa0)
