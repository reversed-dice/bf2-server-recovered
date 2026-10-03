// FUNCTION: BF2 0x5bf290
namespace dice { namespace hfe { namespace world {

typedef void (*vfn1)(void*, void*);
void fn_0x5bf2b0(void* self) {
    void* g = *(void**)0x10aa288;
    void* p = *(void**)((char*)self+0x10);
    void** vt = *(void***)g;
    ((vfn1)vt[0x58/8])(g, (char*)p+0x48);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_VehicleHudComp_playInjurySound (0x5bf2b0)
