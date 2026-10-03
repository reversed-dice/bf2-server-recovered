// FUNCTION: BF2 0x473420
extern "C" void* f_473420(unsigned int* out, char* self) {
    const unsigned int* v = (const unsigned int*)(self + 0x43c);
    unsigned int c = v[2];
    unsigned int b = v[1];
    out[0] = *(const unsigned int*)(self + 0x43c);
    out[1] = b;
    out[2] = c;
    return out;
}
// REVERSED_FUNCTION: dice_hfe_GameLogic_getBeforeSpawnCameraDirection_const (0x473420)
