// FUNCTION: BF2 0x785590
typedef void* (*F0b)(void*);
typedef void (*VFn3)(void*, unsigned int, unsigned int);
extern "C" void* getPortalMesh_0(void*, void*);
extern "C" void dice_hfe_ai_AIObjectCover_getPortalVertex(void* self, unsigned int a, unsigned int b) {
    void* m = ((F0b)(*(void***)*(void**)((char*)self + 8))[0x40 / 8])(*(void**)((char*)self + 8));
    void* pl = getPortalMesh_0(m, 0);
    ((VFn3)(*(void***)pl)[0x38 / 8])(pl, a, b);
}
