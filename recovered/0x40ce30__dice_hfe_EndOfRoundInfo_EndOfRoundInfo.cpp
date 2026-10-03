// FUNCTION: BF2 0x40ce30
void EndOfRoundInfo_ctor(long self) {
    *(long*)self = 0xf6c6e8;
    *(char*)(self + 0xc) = 1;
    long* p = (long*)(self + 0x10);
    p[0] = 0;
    p[1] = 0;
    p[2] = 0;
}
// REVERSED_FUNCTION: dice_hfe_EndOfRoundInfo_EndOfRoundInfo (0x40ce30)
