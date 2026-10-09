// FUNCTION: BF2 0x780500
// BF2_FLAGS: -fno-tree-ter
extern "C" {
extern long dice_hfe_squadManager;
}

extern "C" bool dice_hfe_ai_BFSquad_retireAsSquadLeader_int_dice_hfe_ai_IAIPlayerptr(
    long self, int squadId, long player)
{
    unsigned a = ((unsigned (*)(long))(*(long**)player)[7])(player);
    long mgr = dice_hfe_squadManager;
    long vfn = *(long*)(*(long*)mgr + 0x78);
    unsigned b = ((unsigned (*)(long))(*(long**)player)[27])(player);
    unsigned leader = ((int (*)(long, int, int))vfn)(dice_hfe_squadManager, b, squadId);
    if (a == leader) {
        long vfn2 = *(long*)(*(long*)dice_hfe_squadManager + 0x70);
        unsigned b2 = ((unsigned (*)(long))(*(long**)player)[27])(player);
        return ((bool (*)(long, int, int, int, int))vfn2)(dice_hfe_squadManager, b2, squadId, -1, 0);
    }
    return true;
}
