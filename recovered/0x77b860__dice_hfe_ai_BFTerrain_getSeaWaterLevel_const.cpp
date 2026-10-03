// FUNCTION: BF2 0x77b860
namespace dice { namespace hfe { namespace ai {

typedef void* (*vfn0)(void*);
void* fn_0x77b860(void* self) {
    void* p = *(void**)((char*)self+8);
    void** vt = *(void***)p;
    void* r = ((vfn0)vt[0x88/8])(p);
    void** vt2 = *(void***)r;
    return ((vfn0)vt2[0xd0/8])(r);
}

} } }
// REVERSED_FUNCTION: dice_hfe_ai_BFTerrain_getSeaWaterLevel_const (0x77b860)
