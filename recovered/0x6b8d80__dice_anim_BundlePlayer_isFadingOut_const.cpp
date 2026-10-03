// FUNCTION: BF2 0x6b8d80
namespace dice { namespace anim {
long eom_6b8d80(char* self) {
    if (*(char*)(self + 0x44) == 0) return 0;
    char* p = *(char**)(self + 0x10);
    if (*(char*)(p + 0x35) != 0) return 1;
    if (*(char*)(p + 0x37) != 0) return 1;
    float t = *(float*)(self + 0x20);
    float d = *(float*)(p + 0x28) - *(float*)(p + 0x30);
    if (d < t) return 1;
    return 0;
}
} }
// REVERSED_FUNCTION: test (0x6b8d80)
