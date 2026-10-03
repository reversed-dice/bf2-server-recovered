// FUNCTION: BF2 0xadc810
namespace dice { namespace hfe { namespace animationTools { namespace anonymous_namespace {
extern "C" void* g_10936a0;
extern "C" void fn_6c0a80(void* p, int a, int* v3);
long eom_adc810(char* self) {
    if (*(int*)(self + 0x30) != 2) {
        return 0;
    }
    int a = **(int**)(self + 0x38);
    int* b = *(int**)(self + 0x40);
    int c2 = b[2];
    int b2 = b[1];
    int a2 = b[0];
    int v[3];
    v[0] = a2;
    v[1] = b2;
    v[2] = c2;
    *(char*)(self + 0x108) = 0;
    fn_6c0a80(g_10936a0, a, v);
    return 0;
}
} } } }
// REVERSED_FUNCTION: test (0xadc810)
