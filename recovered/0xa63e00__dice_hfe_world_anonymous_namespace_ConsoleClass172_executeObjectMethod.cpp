// FUNCTION: BF2 0xa63e00
#include <cstddef>

extern "C" int g_c7ce7c;
extern "C" float DAT_b2f234;
extern "C" void* fn_69de30(int g);

namespace dice { namespace hfe {
long eom_a63e00(char* self) {
    if (__builtin_expect(*(int*)(self + 0x30) == 0, 1)) {
        *(char*)(self + 0x108) = 1;
        void* o = fn_69de30(g_c7ce7c);
        float f = *(float*)((char*)o + 0x1f8);
        *(float*)(self + 0x10c) = f + f;
        return (long)(self + 0x10c);
    }
    if (__builtin_expect(*(int*)(self + 0x30) != 1, 0)) {
        return 0;
    }
    float v = *(float*)(*(char**)(self + 0x38));
    *(char*)(self + 0x108) = 0;
    void* o = fn_69de30(g_c7ce7c);
    *(float*)((char*)o + 0x1f8) = v * DAT_b2f234;
    return 0;
}
} }
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass172_executeObjectMethod (0xa63e00)
