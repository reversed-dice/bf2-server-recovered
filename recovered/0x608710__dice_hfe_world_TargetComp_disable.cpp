// FUNCTION: BF2 0x608710
namespace dice { namespace hfe { namespace world {
typedef void (*vfn3)(void*, int, int, int);
void fn_0x608710(void* self) {
    void** vt = *(void***)self;
    ((vfn3)vt[0x160/8])(self, 0, 0, 0);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_TargetComp_disable (0x608710)
