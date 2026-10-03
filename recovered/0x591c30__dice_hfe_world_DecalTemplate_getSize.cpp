// FUNCTION: BF2 0x591c30
extern "C" float f_591c30(char* self) {
    char* p = *(char**)(self + 0x70);
    if (p == 0) return 0.0f;
    return (*(float (**)(void*))(*(char**)p + 0x18))(p);
}
// REVERSED_FUNCTION: dice_hfe_world_DecalTemplate_getSize (0x591c30)
