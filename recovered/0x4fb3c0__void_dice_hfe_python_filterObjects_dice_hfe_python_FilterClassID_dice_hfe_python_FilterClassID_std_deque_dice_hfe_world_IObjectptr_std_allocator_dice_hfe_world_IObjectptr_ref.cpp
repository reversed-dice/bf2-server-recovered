// FUNCTION: BF2 0x4fb3c0
// dice_hfe_python_filterObjects wrapper
// 15 instructions, 1 vtable call + 1 tail call, gcc34
extern "C" {
extern long dice_hfe_world_objectManager;

extern void void_dice_hfe_python_filterObjects_impl(
    int, long, long);

void void_dice_hfe_python_filterObjects(
    int param_1, long param_2)
{
    long mgr = dice_hfe_world_objectManager;
    long vtable = *(long*)mgr;
    long (*fn)(long) = *(long(**)(long))(vtable + 0x68);
    long result = fn(mgr);
    void_dice_hfe_python_filterObjects_impl(param_1, result, param_2);
}

}
