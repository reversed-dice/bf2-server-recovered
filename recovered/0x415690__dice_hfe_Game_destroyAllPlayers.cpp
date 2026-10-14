// FUNCTION: BF2 0x415690
extern void* g_0112ee38;
extern void* g_0112ee48;
typedef void* (*FnL)(void*);
typedef void (*FnV1)(void*);
typedef void (*FnV2)(void*, void*);
void dice_hfe_Game_destroyAllPlayers(void* self)
{
    void* list = ((FnL)(*(void***)g_0112ee38)[0xf])(g_0112ee38);
    void* node = *(void**)list;
    if (list != node) {
        do {
            unsigned long n = 0;
            do { node = *(void**)node; n++; } while (node != list);
            if (n == 0) break;
            FnV2 fn = (FnV2)(*(void***)self)[0x48];
            void* l2 = ((FnL)(*(void***)g_0112ee38)[0xf])(g_0112ee38);
            fn(self, *(void**)((char*)*(void**)l2 + 0x10));
            list = ((FnL)(*(void***)g_0112ee38)[0xf])(g_0112ee38);
            node = *(void**)list;
        } while (list != node);
    }
    void* om = g_0112ee48;
    ((FnV1)(*(void***)om)[0x26])(om);
}
