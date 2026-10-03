// FUNCTION: BF2 0x59e140
namespace dice { namespace hfe { namespace world {

extern "C" void* getEmptyString(void*);
typedef void* (*vfn0)(void*);
void* fn_0x5aa5f0(void* self) {
    void* p = *(void**)((char*)self+0x80);
    if (!p) return getEmptyString(p);
    void** vt = *(void***)p;
    return ((vfn0)vt[0x3a0/8])(p);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_SpriteParticleSystemTemplate_getTextureName_const (0x5aa5f0)
