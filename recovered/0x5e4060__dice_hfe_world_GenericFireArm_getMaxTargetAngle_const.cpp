// FUNCTION: BF2 0x5e4060
namespace dice { namespace hfe { namespace world {
typedef void* (*vfn_640)(void*);
typedef void* (*vfn_c0)(void*, int);
extern float fn_621fe0(void* p);
float cb_5e4060(void* self) {
    void* q = (*(vfn_640*)((char*)*(void**)self + 0x640))(self);
    if (q != 0) {
        void* r = (*(vfn_c0*)((char*)*(void**)q + 0xc0))(q, *(int*)0x00c7cf98);
        if (r != 0)
            return fn_621fe0(r);
    }
    return 0.0f;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_GenericFireArm_getMaxTargetAngle_const (0x5e4060)
