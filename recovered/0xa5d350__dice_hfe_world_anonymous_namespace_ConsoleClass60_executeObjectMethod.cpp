// FUNCTION: BF2 0xa5d350
namespace dice { namespace hfe {
extern "C" unsigned int g_c7d090;
extern "C" void* fn_69de30(unsigned int cid);
long eom_a5d350(char* self) {
    if (__builtin_expect(*(int*)(self + 0x30) == 0, 1)) {
        *(char*)(self + 0x108) = 1;
        void* o = fn_69de30(g_c7d090);
        *(int*)(self + 0x10c) = *(int*)((char*)o + 0x448);
        return (long)(self + 0x10c);
    }
    if (__builtin_expect(*(int*)(self + 0x30) != 1, 0)) return 0;
    int v = *(int*)(*(char**)(self + 0x38));
    *(char*)(self + 0x108) = 0;
    void* o = fn_69de30(g_c7d090);
    if (v <= 0) v = 1;
    else if (v >= 6) v = 5;
    *(int*)((char*)o + 0x448) = v;
    return 0;
}
} }
// REVERSED_FUNCTION: test (0xa5d350)
