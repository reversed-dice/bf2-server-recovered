// FUNCTION: BF2 0x7854d0
// dice::hfe::ai::AIObjectCover::init() -- 0x7854d0
//
// Initialises the cover from its object unless the template at +0x10 is
// already marked initialised at +0x18, then hands the object's mesh (vtable
// +0x40) to getPortalMesh.

extern "C" void initFromObject_7854d0(void* tmpl, void* obj);
extern "C" void getPortalMesh_7854d0(void* mesh, void** out);

typedef void* (*FnMesh_7854d0)(void*);

extern "C" void init_7854d0(char* self)
{
    char* tmpl = *(char**)(self + 0x10);
    if (*(char*)(tmpl + 0x18) != 0) {
        void* obj = *(void**)(self + 8);
        getPortalMesh_7854d0((*(FnMesh_7854d0*)(*(char**)obj + 0x40))(obj), 0);
        return;
    }
    initFromObject_7854d0(tmpl, *(void**)(self + 8));
    void* obj = *(void**)(self + 8);
    getPortalMesh_7854d0((*(FnMesh_7854d0*)(*(char**)obj + 0x40))(obj), 0);
}
// REVERSED_FUNCTION: dice_hfe_ai_AIObjectCover_init (0x7854d0)
