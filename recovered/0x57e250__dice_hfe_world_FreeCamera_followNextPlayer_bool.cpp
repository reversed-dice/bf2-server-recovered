// FUNCTION: BF2 0x57e250
typedef bool (*BoolFn)(void*);
typedef void* (*PtrFn)(void*);
typedef int (*IdFn)(void*);

extern "C" void* dice_hfe_world_playerManager;

extern "C" void fn_0x57e250(void* self, bool)
{
    void* mgr = dice_hfe_world_playerManager;
    void* list = ((PtrFn)(*(void***)mgr)[0x78 / 8])(mgr);
    char* end = (char*)list;
    char* node = *(char**)list;
    if (node == end)
        return;
    int best = -1;
    bool found = false;
    do {
        void** camSlot = (void**)((char*)self + 0x298);
        void* pl = *(void**)(node + 0x10);
        int team = ((IdFn)(*(void***)pl)[0x1d0 / 8])(pl);
        void* cam = *camSlot;
        void* other = cam ? *(void**)((char*)cam + 8) : 0;
        if (team != ((IdFn)(*(void***)other)[0x1d0 / 8])(other))
            continue;
        if (!((BoolFn)(*(void***)pl)[0xd8 / 8])(pl))
            continue;
        if (((BoolFn)(*(void***)pl)[0xc8 / 8])(pl))
            continue;
        int id = ((IdFn)(*(void***)pl)[0xa8 / 8])(pl);
        void* cam2 = *camSlot;
        void* other2 = cam2 ? *(void**)((char*)cam2 + 8) : 0;
        if (id == ((IdFn)(*(void***)other2)[0xa8 / 8])(other2))
            continue;
        if (((IdFn)(*(void***)pl)[0xa8 / 8])(pl) == *(int*)((char*)self + 0x338)) {
            found = true;
            continue;
        }
        if (best == -1)
            best = ((IdFn)(*(void***)pl)[0xa8 / 8])(pl);
        if (found) {
            *(int*)((char*)self + 0x338) = ((IdFn)(*(void***)pl)[0xa8 / 8])(pl);
            return;
        }
    } while ((node = *(char**)node) != end);
    if (best != -1)
        *(int*)((char*)self + 0x338) = best;
}
