// FUNCTION: BF2 0x5e3b40
typedef void* (*vfn48)(void*, void*);
void* fn_0x5e3b40(void* self) {
    void* cached = *(void**)((char*)self + 0x270);
    if (cached) return cached;
    void* g = *(void**)0x112ee40;
    void* r = ((vfn48)(*(void***)g)[0x48/8])(g, (char*)self + 0x260);
    *(void**)((char*)self + 0x270) = r;
    return r;
}
// REVERSED_FUNCTION: dice_hfe_world_GenericFireArmTemplate_getProjectileTemplate (0x5e3b40)
