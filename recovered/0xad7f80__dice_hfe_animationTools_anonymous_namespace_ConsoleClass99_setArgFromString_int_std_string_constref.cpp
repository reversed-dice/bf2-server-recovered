// FUNCTION: BF2 0xad7f80
#include <sstream>
#include <string>
#include <new>

extern "C" bool g_0x1140861;

static void __attribute__((noinline)) kill_iss_0xad7f80(std::istringstream* p) {
    p->~basic_istringstream();
}

extern "C" void fn_0xad7f80(void* self, int count, const std::string& value) {
    if (count != 1) return;
    char buf[sizeof(std::istringstream)] __attribute__((aligned(8)));
    std::istringstream* ss = new (buf) std::istringstream(value);
    *ss >> g_0x1140861;
    *(void**)((char*)self + 0x38) = &g_0x1140861;
    kill_iss_0xad7f80(ss);
}
// REVERSED_FUNCTION: dice_hfe_animationTools_anonymous_namespace_ConsoleClass99_setArgFromString_int_std_string_constref (0xad7f80)
