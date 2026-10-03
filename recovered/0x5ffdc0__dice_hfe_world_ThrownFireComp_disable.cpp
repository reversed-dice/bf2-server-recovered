// FUNCTION: BF2 0x5ffdc0
namespace dice { namespace hfe { namespace world {
typedef void (*vfn0)(void*);
void fn_0x5ffdc0(void* self) {
    void** vt = *(void***)self;
    ((vfn0)vt[0x130/8])(self);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_ThrownFireComp_disable (0x5ffdc0)
