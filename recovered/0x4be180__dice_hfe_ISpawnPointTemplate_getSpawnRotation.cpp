// FUNCTION: BF2 0x4be180
extern "C" void* f_4be180(char* out) {
    float z = 0.0f;
    *(float*)(out + 0x0) = z;
    *(float*)(out + 0x4) = z;
    *(float*)(out + 0x8) = z;
    return out;
}
// REVERSED_FUNCTION: dice_hfe_ISpawnPointTemplate_getSpawnRotation (0x4be180)
