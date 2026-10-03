// FUNCTION: BF2 0x6d1520
namespace dice { namespace anim {
extern "C" void* dice_anim_ValueHolderManager_get_std_string_constref(void*, const void*);
void fn_0x6d1520(void* self, const void* name) {
    *(void**)((char*)self+0x30) = dice_anim_ValueHolderManager_get_std_string_constref(self, name);
}
} }
// REVERSED_FUNCTION: dice_anim_ValueHolderManager_setActiveByName_std_string_constref (0x6d1520)
