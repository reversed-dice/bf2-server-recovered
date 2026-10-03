// FUNCTION: BF2 0x74a9a0
extern "C" void setWorldMapSizeZ(float v) {
    *(float*)0xf68c60 = v;
    *(int*)0xf68c58 = (int)v;
}
// REVERSED_FUNCTION: dice_hfe_WorldPref_setWorldMapSizeZ_float (0x74a9a0)
