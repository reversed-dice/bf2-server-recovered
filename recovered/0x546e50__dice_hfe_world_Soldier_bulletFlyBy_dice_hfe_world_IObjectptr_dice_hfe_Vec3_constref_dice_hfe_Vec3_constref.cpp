// FUNCTION: BF2 0x546e50
// bulletFlyBy - vtable call + function call
extern "C" void dice_hfe_SoldierSound_bulletFlyBy_int_dice_hfe_Vec3_constref(long, int, long);

extern "C" void dice_hfe_world_Soldier_bulletFlyBy_dice_hfe_world_IObjectptr_dice_hfe_Vec3_constref_dice_hfe_Vec3_constref(
    long self, long obj, long pos)
{
    long vtbl = *(long*)obj;
    int val = ((int(*)(long))(*(long*)(vtbl + 0x1a0)))(obj);
    dice_hfe_SoldierSound_bulletFlyBy_int_dice_hfe_Vec3_constref(*(long*)(self + 0x4a8), val, pos);
}