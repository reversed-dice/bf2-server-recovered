// FUNCTION: BF2 0x5ec230
extern "C" int fn_5ec230(long p) {
    if (*(int*)(p + 0x68) > 2 || *(char*)(p + 0x6f) != 0) return 1;
    return 0;
}