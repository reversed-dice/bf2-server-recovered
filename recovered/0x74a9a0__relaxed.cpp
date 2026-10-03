// FUNCTION: BF2 0x74a9a0
extern "C" void setWorldMapSizeX(float v) {
    *(float*)0xf68c64 = v;
    *(int*)0xf68c5c = (int)v;
}
// REVERSED_FUNCTION: dice_hfe_WorldPref_setWorldMapSizeX_float (0x74a980)
