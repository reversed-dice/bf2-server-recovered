// FUNCTION: BF2 0x522000
namespace dice { namespace hfe {
long eom_522000(char* self, int* out) {
    int* src = (int*)(self + 0x3f4);
    int c = src[2];
    int b = src[1];
    int a = src[0];
    out[0] = a;
    out[1] = b;
    out[2] = c;
    return 1;
}
} }
// REVERSED_FUNCTION: test (0x522000)
