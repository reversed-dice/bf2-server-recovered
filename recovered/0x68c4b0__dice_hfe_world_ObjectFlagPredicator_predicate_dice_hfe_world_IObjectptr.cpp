// FUNCTION: BF2 0x68c4b0
namespace dice { namespace hfe {
long eom_68c4b0(char* self, char* other) {
    int a = *(int*)(self + 0x8);
    int b = *(int*)(other + 0x8);
    int r = b & a;
    return a == r;
}
} }
// REVERSED_FUNCTION: test (0x68c4b0)
