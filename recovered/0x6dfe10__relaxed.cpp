// FUNCTION: BF2 0x6dfe10
namespace dice { namespace hfe {
unsigned char eom_6f2600(char* self, int* out) {
    int* src = (int*)(self + 0x120);
    int c = src[2];
    int b = src[1];
    int a = src[0];
    out[0] = a;
    out[1] = b;
    out[2] = c;
    return *(unsigned char*)(self + 0x12c);
}
} }
// REVERSED_FUNCTION: test (0x6f2600)
