// FUNCTION: BF2 0x5ea180
namespace dice { namespace hfe {
long eom_5ea180(char* self) {
    int v = *(int*)(*(char**)(self + 0x80) + 0x3c);
    return (v == 1) || (v + 1 == 0);
}
} }
// REVERSED_FUNCTION: test (0x5ea180)
