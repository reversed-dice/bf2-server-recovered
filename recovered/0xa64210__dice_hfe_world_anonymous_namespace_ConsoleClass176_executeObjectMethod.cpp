// FUNCTION: BF2 0xa64210
#include <cstddef>

extern "C" int g_c7ce7c;
extern "C" void* fn_69de30(int g);
extern "C" void fn_63ac90(void* o, int v);
namespace dice { namespace hfe {
long eom_a64210(char* self) {
    if (__builtin_expect(*(int*)(self + 0x30) == 0, 1)) {
        *(char*)(self + 0x108) = 1;
        void* o = fn_69de30(g_c7ce7c);
        *(int*)(self + 0x10c) = *(int*)((char*)o + 0x210);
        return (long)(self + 0x10c);
    }
    if (__builtin_expect(*(int*)(self + 0x30) != 1, 0)) {
        return 0;
    }
    int v = *(int*)(*(char**)(self + 0x38));
    *(char*)(self + 0x108) = 0;
    void* o = fn_69de30(g_c7ce7c);
    fn_63ac90(o, v);
    return 0;
}
} }
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass176_executeObjectMethod (0xa64210)
