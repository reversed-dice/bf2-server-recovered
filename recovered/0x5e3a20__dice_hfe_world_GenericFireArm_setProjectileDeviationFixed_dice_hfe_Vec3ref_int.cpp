// FUNCTION: BF2 0x5e3a20
namespace dice { namespace hfe { namespace world {

typedef void (*vfn0)(void*);
void fn_0x5e3a20(void* self) {
    void* p = *(void**)((char*)self+0x2c8);
    if (p) {
        void** vt = *(void***)p;
        ((vfn0)vt[0x130/8])(p);
    }
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_GenericFireArm_setProjectileDeviationFixed_dice_hfe_Vec3ref_int (0x5e3a20)
