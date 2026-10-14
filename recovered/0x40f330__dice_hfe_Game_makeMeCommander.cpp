// FUNCTION: BF2 0x40f330
// BF2_FLAGS: -fno-tree-ter
extern void* g_0112ee38;
extern void* g_010b8c00;
typedef void* (*FnP)(void*);
typedef int (*FnI)(void*);
typedef void (*FnV)(void*, int, int);
void dice_hfe_Game_makeMeCommander(void)
{
    void* p = ((FnP)(*(void***)g_0112ee38)[0xc])(g_0112ee38);
    if (p == 0) return;
    if (g_010b8c00 == 0) return;
    FnV f = (FnV)(*(void***)g_010b8c00)[0x1b];
    int a = ((FnI)(*(void***)p)[0x15])(p);
    int b = ((FnI)(*(void***)p)[0x3a])(p);
    f(g_010b8c00, b, a);
}
