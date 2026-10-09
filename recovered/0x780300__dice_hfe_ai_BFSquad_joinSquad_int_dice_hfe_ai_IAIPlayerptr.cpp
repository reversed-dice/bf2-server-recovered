// FUNCTION: BF2 0x780300
extern "C" {
extern long dice_hfe_squadManager;
}

extern "C" bool dice_hfe_ai_BFSquad_joinSquad_int_dice_hfe_ai_IAIPlayerptr(
    long self, int squadId, long player)
{
    long mgr = dice_hfe_squadManager;
    long vfn = *(long*)(*(long*)mgr + 0x60);
    unsigned a = ((unsigned (*)(long))(*(long**)player)[7])(player);
    unsigned b = ((unsigned (*)(long))(*(long**)player)[27])(player);
    return ((bool (*)(long, int, int, int))vfn)(dice_hfe_squadManager, b, squadId, a);
}
