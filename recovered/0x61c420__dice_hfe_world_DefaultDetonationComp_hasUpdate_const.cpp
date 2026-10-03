// FUNCTION: BF2 0x61c420
namespace dice { namespace hfe { namespace world {
long eom_61c420(char* self) {
    char* o = *(char**)(self + 0x30);
    float a = *(float*)(o + 0x74);
    if (a > 0.0f) return 1;
    float b = *(float*)(o + 0x70);
    if (b > 0.0f) return 1;
    float c = *(float*)(o + 0xfc);
    if (c > 0.0f) return 1;
    return 0;
}
} } }
// REVERSED_FUNCTION: test (0x61c420)
