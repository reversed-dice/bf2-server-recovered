// FUNCTION: BF2 0x5f3510
namespace dice { namespace hfe { namespace world {
extern "C" int real_0x74aaa0(void* self, int state);
void fn_0x5f3510(void* self, int state) {
    *((char*)self+0x1c0) = 1;
    *(int*)((char*)self+0x1bc) = real_0x74aaa0(self, state);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_ExplosivesFireComp_reload_dice_hfe_world_ReloadState (0x5f3510)
