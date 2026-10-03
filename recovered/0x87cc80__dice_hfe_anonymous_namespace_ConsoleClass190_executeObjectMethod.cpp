// FUNCTION: BF2 0x87cc80
namespace dice { namespace hfe { namespace tool { namespace anonymous_namespace {
extern "C" void* g_10b8c08;
extern "C" void fn_4757e0(void* p, unsigned char b);
long eom_87cc80(char* self) {
    if (*(int*)(self + 0x30) != 1) {
        return 0;
    }
    unsigned char b = **(unsigned char**)(self + 0x38);
    *(char*)(self + 0x108) = 0;
    fn_4757e0(g_10b8c08, b);
    return 0;
}
} } } }
// REVERSED_FUNCTION: test (0x87cc80)
