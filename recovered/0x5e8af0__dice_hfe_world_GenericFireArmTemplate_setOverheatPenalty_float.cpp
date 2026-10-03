namespace dice { namespace hfe { namespace world {
void fn_0x5e8af0(void* self, float v) {
    float cap = *(volatile float*)0xb2f3cc;
    float clamped = v < cap ? v : cap;
    *(float*)((char*)self+0x240) = clamped;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_GenericFireArmTemplate_setOverheatPenalty_float (0x5e8af0)
