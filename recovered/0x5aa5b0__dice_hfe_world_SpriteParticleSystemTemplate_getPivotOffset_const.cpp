// FUNCTION: BF2 0x5aa5b0
namespace dice { namespace hfe { namespace world {

typedef void* (*vfn1)(void*, void*);
void* fn_0x5aa5b0(void* ret, void* self2) {
    void* obj = *(void**)((char*)self2+0x80);
    void** vt = *(void***)obj;
    ((vfn1)vt[0x3f0/8])(ret, obj);
    return ret;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_SpriteParticleSystemTemplate_getPivotOffset_const (0x5aa5b0)
