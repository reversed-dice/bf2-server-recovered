// FUNCTION: BF2 0x6853a0
namespace dice { namespace hfe { namespace world {

typedef void (*vfn2)(void*, void*, void*);
void fn_0x6853a0(void* self, void* vec, float f) {
    void* p = *(void**)((char*)self+8);
    void** vt = *(void***)p;
    ((vfn2)vt[0x48/8])(p, self, vec);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_CullerObject_updateObject_dice_hfe_Vec3_constref_float (0x6853a0)
