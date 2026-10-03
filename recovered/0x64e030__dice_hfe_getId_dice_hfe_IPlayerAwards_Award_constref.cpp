// FUNCTION: BF2 0x64e030
namespace dice { namespace hfe {

long fn_0x64e030(void* self) {
    if (*(int*)self == 1) {
        long lo = *(unsigned*)((char*)self+0x18);
        long hi = *(int*)((char*)self+0x1c);
        return (hi << 32) | lo;
    }
    return *(unsigned*)((char*)self+0x18);
}

} }
// REVERSED_FUNCTION: dice_hfe_getId_dice_hfe_IPlayerAwards_Award_constref (0x64e030)
