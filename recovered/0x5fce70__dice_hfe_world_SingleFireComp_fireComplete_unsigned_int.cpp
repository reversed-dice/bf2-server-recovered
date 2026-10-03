// FUNCTION: BF2 0x5fce70
// fireComplete - vtable call + function calls
extern "C" void dice_hfe_world_FireComp_fireComplete_unsigned_int(long, int);
extern "C" void dice_hfe_world_SingleFireComp_fireCompleteUpdateStates(long);

extern "C" void dice_hfe_world_SingleFireComp_fireComplete_unsigned_int(long self, int param)
{
    long phys = *(long*)(self + 0x18);
    long vtbl = *(long*)phys;
    ((void(*)(long))(*(long*)(vtbl + 0x380)))(phys);
    dice_hfe_world_FireComp_fireComplete_unsigned_int(self, param);
    dice_hfe_world_SingleFireComp_fireCompleteUpdateStates(self);
}