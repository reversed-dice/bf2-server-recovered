// FUNCTION: BF2 0x5ffa90
namespace dice { namespace hfe { namespace world {
extern "C" int dice_hfe_WorldPref_getTickCount(void*);
void fn_0x5ffa90(void* self, int) {
    *(char*)((char*)self+0x175) = 1;
    int r = dice_hfe_WorldPref_getTickCount(self);
    *(int*)((char*)self+0x170) = r;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_ThrownFireComp_reload_dice_hfe_world_ReloadState (0x5ffa90)
