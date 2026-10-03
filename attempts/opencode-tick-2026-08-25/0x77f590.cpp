typedef unsigned int (*IFn)(void*);
typedef void (*VFn2)(void*, unsigned int);
extern "C" void dice_hfe_ai_BFCommander_retireAsCommander(void* self, void* player) {
    VFn2 fn = ((VFn2)(*(void***)*(void**)0x010b8c00)[0xd0 / 8]);
    unsigned int u = ((IFn)(*(void***)player)[0xd8 / 8])(player);
    return fn(*(void**)0x010b8c00, u);
}
