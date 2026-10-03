// FUNCTION: BF2 0x59e190
namespace dice { namespace hfe { namespace world {

typedef void* (*vfn0)(void*, void*);
void* fn_0x59e190(void* ret, void* self2) {
    void* obj = *(void**)((char*)self2+0x80);
    void** vt = *(void***)obj;
    ((vfn0)vt[0x3f0/8])(ret, obj);
    return ret;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_MeshParticleSystemTemplate_getRandomRotationSpeed_const (0x59e190)
