// FUNCTION: BF2 0xad92b0
namespace dice { namespace hfe { namespace animationTools { namespace anonymous_namespace {
extern "C" void* g_10936a0;
extern "C" void fn_6bb020(void* p, int a, int b, float c);
long eom_ad92b0(char* self) {
    if (*(int*)(self + 0x30) != 3) {
        return 0;
    }
    int a = **(int**)(self + 0x38);
    int b = **(int**)(self + 0x40);
    float c = **(float**)(self + 0x48);
    *(char*)(self + 0x108) = 0;
    fn_6bb020(g_10936a0, a, b, c);
    return 0;
}
} } } }
// REVERSED_FUNCTION: test (0xad92b0)
