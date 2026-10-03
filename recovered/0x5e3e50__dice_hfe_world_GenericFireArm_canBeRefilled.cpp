// FUNCTION: BF2 0x5e3e50
extern "C" bool f_5e3e50(char* self) {
    char* p = *(char**)(self + 0x2b0);
    if (p == 0) return false;
    return (*(bool (**)(void*))(*(char**)p + 0x138))(p);
}
// REVERSED_FUNCTION: dice_hfe_world_GenericFireArm_canBeRefilled (0x5e3e50)
