// FUNCTION: BF2 0x4a4660
namespace dice { namespace hfe {
void eom_4a4660(char* self, float v, unsigned int idx) {
    if ((idx - 1) > 1) {
        return;
    }
    *(float*)(self + (long)(idx - 1) * 4 + 0x4cc) = v;
}
} }
// REVERSED_FUNCTION: test (0x4a4660)
