// FUNCTION: BF2 0x601970
namespace dice { namespace hfe { namespace world {
extern bool fn_601910(void* self);
typedef void (*vfn_20)(void*);
void cb_601970(void* self) {
    if (fn_601910(self)) {
        void* q = *(void**)((char*)self + 0x68);
        if (q != 0)
            (*(vfn_20*)((char*)*(void**)q + 0x20))(q);
    }
    *(int*)((char*)self + 0xa0) = 0;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_DefaultSoundComp_postSwitchFireRate_dice_hfe_float (0x601970)
