// FUNCTION: BF2 0x5e13c0
namespace dice { namespace hfe {
long eom_5e13c0(char* self, unsigned int idx) {
    char* base = *(char**)(self + 0x78);
    if (base == 0 || idx > 3) {
        return 0;
    }
    return (long)(base + (long)idx * 0x28);
}
} }
// REVERSED_FUNCTION: test (0x5e13c0)
