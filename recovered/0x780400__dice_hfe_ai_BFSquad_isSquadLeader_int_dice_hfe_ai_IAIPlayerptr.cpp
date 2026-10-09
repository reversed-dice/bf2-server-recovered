// FUNCTION: BF2 0x780400
extern "C" {
extern long dice_hfe_squadManager;
}

extern "C" bool dice_hfe_ai_BFSquad_isSquadLeader_int_dice_hfe_ai_IAIPlayerptr(
    long self, int squadId, long player)
{
    unsigned a = ((unsigned (*)(long))(*(long**)player)[7])(player);
    long mgr = dice_hfe_squadManager;
    long vfn = *(long*)(*(long*)mgr + 0x78);
    unsigned b = ((unsigned (*)(long))(*(long**)player)[27])(player);
    return a == ((int (*)(long, int, int))vfn)(dice_hfe_squadManager, b, squadId);
}
