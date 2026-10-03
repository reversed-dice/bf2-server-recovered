// FUNCTION: BF2 0x551640
typedef void* (*vfn)(void*);
void fn_0x509240(void* self, void* strParam) {
    void* g = *(void**)(0x010935c8);
    void* r = ((vfn)(*(void***)g)[0x18/8])(g);
    *(void**)((char*)self + 0x2b0) = (void*)r;
}
// REVERSED_FUNCTION: dice_hfe_world_AnimatedBundleTemplate_animationSystem1P_std_string_constref (0x509240)
