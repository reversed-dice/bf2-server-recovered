// FUNCTION: BF2 0xac03e0
namespace dice { namespace hfe { namespace tool { namespace anonymous_namespace {
extern "C" void fn_6af600(int a, unsigned char b, unsigned char c, unsigned char d);
long eom_ac03e0(char* self) {
    if (*(int*)(self + 0x30) != 3) {
        return 0;
    }
    unsigned char a = **(unsigned char**)(self + 0x38);
    unsigned char b = **(unsigned char**)(self + 0x40);
    unsigned char c = **(unsigned char**)(self + 0x48);
    *(char*)(self + 0x108) = 0;
    fn_6af600(0x1092d80, a, b, c);
    return 0;
}
} } } }
// REVERSED_FUNCTION: test (0xac03e0)
