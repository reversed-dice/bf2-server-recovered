// FUNCTION: BF2 0x42aac0
typedef void* (*vfn1)(void*, unsigned int);
typedef void* (*vfn2)(void*, int);
typedef char (*vfn3)(void*);
typedef void (*vfn4)(void*, unsigned char, unsigned char, unsigned char, unsigned char);

extern "C" void* g_game_42aac0;
extern "C" void* g_playerManager_42aac0;
extern "C" void* g_g2_42aac0;
extern "C" unsigned int g_iid_42aac0;

extern "C" int fn_42aac0(void* self, int param2)
{
    void* p = ((vfn1)(*(void***)g_game_42aac0)[0x18/8])(g_game_42aac0, g_iid_42aac0);
    if (p) {
        if (*(unsigned char*)((char*)self + 0x11) != param2) {
            void* q = ((vfn2)(*(void***)g_playerManager_42aac0)[0x40/8])(g_playerManager_42aac0, param2);
            if (q && ((vfn3)(*(void***)q)[0x278/8])(q)) {
                goto l12;
            }
            return 0;
        }
l12:
        if (g_g2_42aac0) {
            ((vfn4)(*(void***)g_g2_42aac0)[0x68/8])(g_g2_42aac0,
                *(unsigned char*)((char*)self + 0x10),
                *(unsigned char*)((char*)self + 0x12),
                *(unsigned char*)((char*)self + 0x11),
                *(unsigned char*)((char*)self + 0x13));
        }
        return 1;
    }
    return 0;
}
