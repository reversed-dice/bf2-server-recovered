// FUNCTION: BF2 0x5139d0
namespace dice { namespace hfe { namespace world {
int eom_5139d0(char* self, int idx) {
    int i = idx - 1;
    if ((unsigned int)i > 1) {
        return -1;
    }
    return *(int*)(self + (long)i * 4 + 0x280);
}
} } }
// REVERSED_FUNCTION: test (0x5139d0)
