// FUNCTION: BF2 0x780720
// BF2_FLAGS: -fno-tree-ter
extern "C" {
extern long dice_hfe_squadManager;
extern void* fn_407508(int a);
extern void fn_42e460(void* a, int b, int c, int d);
}

extern "C" void dice_hfe_ai_BFSquad_declineCommanderOrder_int_dice_hfe_ai_IAIPlayerptr_dice_hfe_SquadOrderType(
    long self, int squadId, long player, int orderType)
{
    char* sm = (char*)dice_hfe_squadManager;
    typedef bool (*vfn7)(char*, int, int, int, int, int, int);
    vfn7 fn = *(vfn7 volatile*)(*(char**)sm + 0x48);
    unsigned b = ((unsigned (*)(long))(*(long**)player)[27])(player);
    fn((char*)dice_hfe_squadManager, b, squadId, 0, 1, orderType, 0);
    if (!((bool (*)(long))(*(long**)player)[34])(player))
        return;
    unsigned b2 = ((unsigned (*)(long))(*(long**)player)[27])(player);
    void* e = fn_407508(0x18);
    fn_42e460(e, b2, squadId, 3);
    void* fn2 = (*(void***)e)[0xa];
    unsigned a = ((unsigned (*)(long))(*(long**)player)[7])(player);
    ((void (*)(void*, int))fn2)(e, a);
    ((void (*)(void*))(*(void***)e)[0x2])(e);
}
