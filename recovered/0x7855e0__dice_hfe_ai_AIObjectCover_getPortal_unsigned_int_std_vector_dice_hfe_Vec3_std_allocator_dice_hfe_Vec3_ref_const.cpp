// FUNCTION: BF2 0x7855e0
typedef void* (*F0b)(void*);
typedef void (*VFn2b)(void*, unsigned int, void*);
extern "C" void* getPortalMesh_0(void*, void*);
extern "C" void dice_hfe_ai_AIObjectCover_getPortal(void* self, unsigned int a, void* out) {
    void* m = ((F0b)(*(void***)*(void**)((char*)self + 8))[0x40 / 8])(*(void**)((char*)self + 8));
    void* pl = getPortalMesh_0(m, 0);
    ((VFn2b)(*(void***)pl)[0x30 / 8])(pl, a, out);
}
