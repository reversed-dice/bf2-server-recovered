// FUNCTION: BF2 0xac2e20
namespace dice { namespace hfe { namespace tool { namespace anonymous_namespace {
extern "C" void fn_006a9050(void* out, void* src, void* dst);
long eom_ac2e20(char* self) {
    if (*(int*)(self + 0x30) != 1) return 0;
    void* v = *(void**)(*(char**)(self + 0x38));
    *(char*)(self + 0x108) = 1;
    int out[3];
    fn_006a9050(out, (void*)0x1092d80, v);
    char* dst = self + 0x10c;
    *(int*)(dst + 0x0) = out[0];
    *(int*)(dst + 0x4) = out[1];
    *(int*)(dst + 0x8) = out[2];
    return (long)dst;
}
} } } }
// REVERSED_FUNCTION: test (0xac2e20)
