// FUNCTION: BF2 0x6f2980
// 0x6f2980 dice_hfe_world_SoldierResponsePhysics_impulseOn_dice_hfe_Vec3_constref_dice_hfe_Vec3_constref_dice_hfe_Vec3_constref_float_int_int
extern "C" void impulseOn_internal(void*, void*, void*, float, int, int, int);

void impulseOn(void* self, void* a1, void* a2, void* a3, float force, int a5, int a6)
{
    if (*(char*)((char*)self + 0x20) == 0) return;
    impulseOn_internal(self, a2, a3, force, a5, a6, 0);
}
