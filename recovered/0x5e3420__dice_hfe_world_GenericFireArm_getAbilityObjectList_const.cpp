// FUNCTION: BF2 0x5e3420
extern "C" void* f_5e3420(char* self) {
    char* p = *(char**)(self + 0x2b0);
    if (p == 0) return 0;
    return (*(void* (**)(void*))(*(char**)p + 0x40))(p);
}
// REVERSED_FUNCTION: dice_hfe_world_GenericFireArm_getAbilityObjectList_const (0x5e3420)
