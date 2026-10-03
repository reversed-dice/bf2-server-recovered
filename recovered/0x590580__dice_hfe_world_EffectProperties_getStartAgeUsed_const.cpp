// FUNCTION: BF2 0x590580
namespace dice { namespace hfe { namespace world {
typedef bool (*vfn_used)(void*, int);
bool fn_0x590580(void* self) {
    void** vt = *(void***)self;
    return ((vfn_used)vt[0x348/8])(self, 4);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_EffectProperties_getStartAgeUsed_const (0x590580)
