// FUNCTION: BF2 0x60c600
namespace dice { namespace hfe { namespace world {
float fn_0x60c600(void* self) {
    float v = 1.0f;
    if (*(char*)((char*)self+0xb0) != 0) {
        void* p = *(void**)((char*)self+0xc0);
        v = *(float*)((char*)p+0x4c);
    }
    return v;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_SoldierBasedRecoilComp_getRecoilForceModifier_const (0x60c600)
