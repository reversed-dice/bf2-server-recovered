// FUNCTION: BF2 0x743250
namespace dice { namespace hfe { namespace world {

typedef void* (*vfn0)(void*);
void* fn_0x6ff5c0(void* self) {
    void** vt = *(void***)self;
    ((vfn0)vt[0x48/8])(self);
    void** vt2 = *(void***)self;
    return ((vfn0)vt2[0x50/8])(self);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_HeightmapCluster_reset (0x6ff5c0)
