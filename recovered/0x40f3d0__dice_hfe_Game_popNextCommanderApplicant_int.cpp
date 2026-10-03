// FUNCTION: BF2 0x40f3d0
extern void* g_010b8c00;
typedef void (*F)(void*);
void dice_dice_hfe_Game_popNextCommanderApplicant_int(void)
{
    void* p = g_010b8c00;
    if (!p) return;
    void* vt = *(void**)p;
    F fn = *(F*)((char*)vt + 0xb8);
    fn(p);
}
