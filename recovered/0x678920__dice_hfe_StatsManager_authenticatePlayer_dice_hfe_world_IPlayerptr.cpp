// FUNCTION: BF2 0x678920
namespace dice { namespace hfe {

typedef int (*vfn0i)(void*);
bool fn_0x678920(void* self, void* player) {
    void** vt = *(void***)self;
    int r = ((vfn0i)vt[0x40/8])(self);
    return (unsigned char)r != 0;
}

} }
// REVERSED_FUNCTION: dice_hfe_StatsManager_authenticatePlayer_dice_hfe_world_IPlayerptr (0x678920)
