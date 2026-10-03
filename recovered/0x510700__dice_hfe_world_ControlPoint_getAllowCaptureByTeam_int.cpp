// FUNCTION: BF2 0x510700
namespace dice { namespace hfe { namespace world {
unsigned char eom_510700(char* self, int idx) {
    if ((unsigned int)(idx - 1) > 1) {
        return 0;
    }
    return *(char*)(self + (long)(idx - 1) + 0x288);
}
} } }
// REVERSED_FUNCTION: test (0x510700)
