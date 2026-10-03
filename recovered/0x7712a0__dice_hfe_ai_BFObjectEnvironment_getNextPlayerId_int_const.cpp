// FUNCTION: BF2 0x7712a0
typedef void* (*GetAllFn1)(void*);
typedef void* (*GetAllFn2)(void*, int);
typedef char (*BoolFn)(void*);
typedef int (*TailFn)(void*);
extern "C" void* g_playerMgr;
extern "C" int dice_hfe_ai_BFObjectEnvironment_getNextPlayerId(void* self, int id) {
    void* first = ((GetAllFn1)(*(void***)g_playerMgr)[0x48 / 8])(g_playerMgr);
    void* p;
    if (first != 0) {
        p = first;
        while (1) {
            if (!((BoolFn)(*(void***)p)[0xc8 / 8])(p)) {
                if (((BoolFn)(*(void***)p)[0xf0 / 8])(p))
                    return ((TailFn)(*(void***)p)[0xa8 / 8])(p);
            }
            p = ((GetAllFn2)(*(void***)g_playerMgr)[0x48 / 8])(g_playerMgr, (unsigned int)id);
            if (p == first) break;
        }
    }
    return 0xffffffff;
}
