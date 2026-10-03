typedef void* (*PFn)(void*);
typedef void (*VFn2)(void*, void*);
extern "C" void dice_hfe_ai_BFGameEffector_respawnBot(void* self, void* player) {
    VFn2 fn = ((VFn2)(*(void***)*(void**)0x010b8c08)[0xe0 / 8]);
    void* u = ((PFn)(*(void***)player)[0x18 / 8])(player);
    return fn(*(void**)0x010b8c08, u);
}
