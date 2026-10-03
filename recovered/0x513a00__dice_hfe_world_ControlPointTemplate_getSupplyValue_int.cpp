// FUNCTION: BF2 0x513a00
namespace dice { namespace hfe { namespace world {
int eom_513a00(char* self, int idx) {
    int i = idx - 1;
    if ((unsigned int)i > 1) {
        return -1;
    }
    return *(int*)(self + (long)i * 4 + 0x288);
}
} } }
// REVERSED_FUNCTION: test (0x513a00)
