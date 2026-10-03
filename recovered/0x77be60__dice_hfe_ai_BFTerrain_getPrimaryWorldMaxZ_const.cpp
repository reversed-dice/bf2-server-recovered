// FUNCTION: BF2 0x77be60
extern "C" float ceilf(float);

namespace dice { namespace hfe { namespace ai {

typedef void* (*vfn1)(void*);
typedef float (*vfnf)(void*);

int fn_0x77be60(void* self) {
    void* w = *(void**)((char*)self + 0x8);
    void* r1 = ((vfn1)(*(void***)w)[0x88/8])(w);
    float f = ((vfnf)(*(void***)r1)[0x90/8])(r1);
    return (int)ceilf(f);
}

} } }
// REVERSED_FUNCTION: dice_hfe_ai_BFTerrain_getPrimaryWorldMaxZ_const (0x77be60)
