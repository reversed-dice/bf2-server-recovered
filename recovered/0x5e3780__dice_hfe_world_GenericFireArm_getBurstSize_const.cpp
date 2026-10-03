// FUNCTION: BF2 0x5e3780
extern "C" void* f_5e3780(char* self) {
    char* p = *(char**)(self + 0x290);
    if (p == 0) return 0;
    return (*(void* (**)(void*))(*(char**)p + 0x200))(p);
}
// REVERSED_FUNCTION: dice_hfe_world_GenericFireArm_getBurstSize_const (0x5e3780)
