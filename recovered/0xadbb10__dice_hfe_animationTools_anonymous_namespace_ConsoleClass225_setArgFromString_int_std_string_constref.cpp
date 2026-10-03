// FUNCTION: BF2 0xadbb10
#include <sstream>
#include <string>
#include <new>

extern "C" float g_0x1140940;

static void __attribute__((noinline)) kill_iss_0xadbb10(std::istringstream* p) {
    p->~basic_istringstream();
}

extern "C" void fn_0xadbb10(void* self, int count, const std::string& value) {
    if (count != 1) return;
    char buf[sizeof(std::istringstream)] __attribute__((aligned(8)));
    std::istringstream* ss = new (buf) std::istringstream(value);
    *ss >> g_0x1140940;
    *(void**)((char*)self + 0x38) = &g_0x1140940;
    kill_iss_0xadbb10(ss);
}
// REVERSED_FUNCTION: dice_hfe_animationTools_anonymous_namespace_ConsoleClass225_setArgFromString_int_std_string_constref (0xadbb10)
