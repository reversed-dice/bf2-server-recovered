// FUNCTION: BF2 0x780ab0
// BF2_FLAGS: -fno-strict-aliasing
extern "C" {
extern long dice_hfe_squadManager;
extern long dice_hfe_io_networkManager;
extern void fn_7c62b0(long a, int b);
}

extern "C" void dice_hfe_ai_BFSquad_getCommanderOrder_int_int_dice_hfe_Vec3ref_dice_hfe_ai_IAIObjectptr(
    long param_1, int param_2, int param_3, long out, long param_5)
{
    long mgr = dice_hfe_squadManager;
    long vtable = *(long*)mgr;
    long (*fn1)(long) = *(long(**)(long))(vtable + 0x50);
    long result1 = fn1(mgr);
    long vtable2 = *(long*)result1;
    long (*fn2)(long) = *(long(**)(long))(vtable2 + 0x28);
    long order = fn2(result1);
    int const* p = (int const*)((char*)order + 8);
    int z = p[2];
    int y = p[1];
    int x = *(int*)((char*)order + 8);
    *(int*)out = x;
    *(int*)((char*)out + 4) = y;
    *(int*)((char*)out + 8) = z;
    int mode = *(unsigned short*)((char*)order + 4);
    fn_7c62b0(dice_hfe_io_networkManager, mode);
}
