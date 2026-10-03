// FUNCTION: BF2 0x60fde0
namespace dice { namespace hfe { namespace world {
extern "C" void dice_hfe_world_Bundle_enableCachedObject(void*);
typedef void (*vfn0)(void*);
void fn_0x60fde0(void* self) {
    *(char*)((char*)self+0x369) = 0;
    dice_hfe_world_Bundle_enableCachedObject(self);
    void** vt = *(void***)self;
    ((vfn0)vt[0x300/8])(self);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_GenericProjectile_enableCachedObject (0x60fde0)
