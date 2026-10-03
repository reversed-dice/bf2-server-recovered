// FUNCTION: BF2 0x494900
extern void* g_01092b00;
typedef void (*F)(void*);
void dice_dice_hfe_Player_doAddTouchItem_dice_hfe_world_IPlayerptr(void)
{
    void* p = g_01092b00;
    if (!p) return;
    void* vt = *(void**)p;
    F fn = *(F*)((char*)vt + 0x38);
    fn(p);
}
