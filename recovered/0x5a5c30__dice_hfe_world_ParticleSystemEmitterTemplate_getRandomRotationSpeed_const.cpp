// FUNCTION: BF2 0x5a5c30
namespace dice { namespace hfe { namespace world {

typedef void* (*vfn0)(void*, void*);
void* fn_0x5a5c30(void* ret, void* self2) {
    void* obj = *(void**)((char*)self2+0x80);
    void** vt = *(void***)obj;
    ((vfn0)vt[0x2f8/8])(ret, obj);
    return ret;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_ParticleSystemEmitterTemplate_getRandomRotationSpeed_const (0x5a5c30)
