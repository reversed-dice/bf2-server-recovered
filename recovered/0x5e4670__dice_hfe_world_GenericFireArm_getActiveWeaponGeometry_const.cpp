// FUNCTION: BF2 0x5e4670
namespace dice { namespace hfe { namespace world {
void* fn_0x5e4670(void* self) {
    void* m = *(void**)((char*)self+0x2e0);
    char* addr = m ? (char*)m+0x70 : (char*)self+0x70;
    return *(void**)addr;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_GenericFireArm_getActiveWeaponGeometry_const (0x5e4670)
