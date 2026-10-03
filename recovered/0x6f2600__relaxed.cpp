// FUNCTION: BF2 0x6f2600
namespace dice { namespace hfe {
unsigned char eom_6dfe10(char* self, int* out) {
    int* src = (int*)(self + 0x10c);
    int c = src[2];
    int b = src[1];
    int a = src[0];
    out[0] = a;
    out[1] = b;
    out[2] = c;
    return *(unsigned char*)(self + 0x118);
}
} }
// REVERSED_FUNCTION: test (0x6dfe10)
