// FUNCTION: BF2 0x608560
namespace dice { namespace hfe { namespace world {
void fn_0x608560(void* self, unsigned state) {
    void* p = *(void**)((char*)self+0x78);
    if (*(int*)((char*)p+0x54) != 3) return;
    *(char*)((char*)self+0x50) = (--state == 0);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_TargetComp_setWeaponState_unsigned_int (0x608560)
