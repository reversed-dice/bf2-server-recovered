// FUNCTION: BF2 0x6ff750
namespace dice { namespace hfe { namespace world {
extern "C" void* dice_hfe_Vec3_getZero();
void* fn_0x6ff750(void* self) {
    void* m = *(void**)((char*)self+0x20);
    if (!m) return dice_hfe_Vec3_getZero();
    void** vt = *(void***)m;
    typedef void*(*vfn)(void*);
    return ((vfn)vt[0xb0/8])(m);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_HeightmapCluster_getPrimaryScale_const (0x6ff750)
