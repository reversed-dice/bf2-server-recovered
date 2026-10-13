// FUNCTION: BF2 0x55e390
typedef bool (*BoolFn)(void*);
typedef void* (*PtrFn)(void*);
typedef int (*IdFn)(void*);

extern "C" void* dice_hfe_world_playerManager;
extern "C" void* getRootParent(void* obj);
extern "C" void healAndReload(void* self, void* obj);

extern "C" void fn_0x55e390(void* self) {
    void* mgr = dice_hfe_world_playerManager;
    void* list = ((PtrFn)(*(void***)mgr)[0x78 / 8])(mgr);
    char* end = (char*)list;
    for (char* node = *(char**)list; node != end; node = *(char**)node) {
        void* pl = *(void**)(node + 0x10);
        if (!((BoolFn)(*(void***)pl)[0xd8 / 8])(pl))
            continue;
        void* r = ((PtrFn)(*(void***)pl)[0x148 / 8])(pl);
        if (r == 0)
            continue;
        if (*(void**)((char*)r + 0x50) != 0) {
            if (getRootParent(r) != getRootParent(self))
                continue;
        }
        int id = ((IdFn)(*(void***)pl)[0x1d0 / 8])(pl);
        if (id == *(int*)((char*)self + 0x240) || *(int*)((char*)self + 0x240) == 0)
            healAndReload(self, r);
    }
}
