// FUNCTION: BF2 0x81ed20
extern "C" int real_0x4071d8(const void* a, const void* b, ...);
extern "C" int BucketCompare(void** a, void** b) {
    return real_0x4071d8(*a, *b);
}
// REVERSED_FUNCTION: BucketCompare (0x81ed20)
