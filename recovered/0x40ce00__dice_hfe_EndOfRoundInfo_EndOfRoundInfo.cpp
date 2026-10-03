// FUNCTION: BF2 0x40ce00
void EndOfRoundInfo_ctor(long self) {
    *(long*)self = 0xf6c6e8;
    *(char*)(self + 0xc) = 1;
    long* p = (long*)(self + 0x10);
    p[0] = 0;
    p[1] = 0;
    p[2] = 0;
}
