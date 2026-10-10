// FUNCTION: BF2 0x4bfe10
long dice_hfe_Squad_getRequest_dice_hfe_SquadOrderType(long param_1, int param_2)
{
    if (param_2 < 0) {
        param_2 = 0;
    }
    if (param_2 > 3) {
        param_2 = 3;
    }
    long lVar1 = 0;
    if (*(char*)((long)param_2 + 0x1b + param_1) != 0) {
        long small = (long)param_2 << 4;
        long big = (long)param_2 << 6;
        lVar1 = big - small + 0x50 + param_1;
    }
    return lVar1;
}
// REVERSED_FUNCTION: dice_hfe_Squad_getRequest_dice_hfe_SquadOrderType (0x4bfe10)
