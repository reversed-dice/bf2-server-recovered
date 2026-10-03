// FUNCTION: BF2 0x40b2b0
extern "C" void _ZN9dice_hfe9BF2Engine10playDemo_boolRKSs(long, int, long);
void BF2_startDemo(long* self, long str) {
    long engine = *self;
    if (__builtin_expect(engine != 0, 1)) {
        _ZN9dice_hfe9BF2Engine10playDemo_boolRKSs(engine, 1, str);
    }
}
