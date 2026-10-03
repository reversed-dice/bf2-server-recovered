// FUNCTION: BF2 0xa836a0
namespace dice { namespace hfe {
extern "C" void* g_00000000;
long eom_a836a0(char* self) {
    if (__builtin_expect(*(int*)(self + 0x30) == 0, 1)) {
        *(char*)(self + 0x108) = 1;
        int r = ((int(*)(void*))((char**)g_00000000)[0xb])(0);
        *(int*)(self + 0x10c) = r;
        return (long)(self + 0x10c);
    }
    if (__builtin_expect(*(int*)(self + 0x30) != 1, 0)) return 0;
    int v = *(int*)(*(char**)(self + 0x38));
    *(char*)(self + 0x108) = 0;
    ((void(*)(void*, int))((char**)g_00000000)[0xc])(0, v);
    return 0;
}
} }
// REVERSED_FUNCTION: test (0xa836a0)
