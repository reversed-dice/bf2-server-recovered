// FUNCTION: BF2 0x77f590
// dice_hfe_ai_BFCommander_retireAsCommander
// 12 instructions, 1 call + 1 tail call, gcc34
extern "C" {
extern long dice_hfe_squadManager;

void dice_hfe_ai_BFCommander_retireAsCommander_dice_hfe_ai_IAIPlayerptr(
    long param_1, long param_2)
{
    long singleton = dice_hfe_squadManager;
    long vtable = *(long*)singleton;
    void (*fn)(long, int) = *(void(**)(long, int))(vtable + 0xd0);
    long vtable2 = *(long*)param_2;
    int result = (*(int(**)(long))(vtable2 + 0xd8))((long)param_2);
    fn(dice_hfe_squadManager, result);
}

}
