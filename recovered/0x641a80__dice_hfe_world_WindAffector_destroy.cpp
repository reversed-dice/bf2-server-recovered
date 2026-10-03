// FUNCTION: BF2 0x641a80
namespace dice { namespace hfe { namespace world {

typedef void (*vfn1)(void*, void*);
void fn_0x641a80(void* self) {
    void* g = *(void**)0x112ee30;
    if (!g) return;
    void** vt = *(void***)g;
    ((vfn1)vt[0x88/8])(g, self);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_WindAffector_destroy (0x641a80)
