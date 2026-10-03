// FUNCTION: BF2 0x81eb80
extern "C" void* real_0x81e660();
extern "C" void* real_0x81e3e0(void* arg);
extern "C" void* BucketGet() {
    void* r = real_0x81e660();
    return real_0x81e3e0(r);
}
// REVERSED_FUNCTION: BucketGet (0x81eb80)
