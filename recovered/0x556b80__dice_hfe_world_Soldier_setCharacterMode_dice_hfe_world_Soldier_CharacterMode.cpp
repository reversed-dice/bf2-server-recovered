// FUNCTION: BF2 0x556b80
namespace dice { namespace hfe { namespace world {

extern "C" void Soldier_applyAnimationsOnSkeleton_float_bool(void*, float, bool);
void fn_0x556b80(void* self, int mode) {
    if (*(int*)((char*)self+0x470) == mode) return;
    *(int*)((char*)self+0x470) = mode;
    Soldier_applyAnimationsOnSkeleton_float_bool(self, 0.0f, true);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_Soldier_setCharacterMode_dice_hfe_world_Soldier_CharacterMode (0x556b80)
