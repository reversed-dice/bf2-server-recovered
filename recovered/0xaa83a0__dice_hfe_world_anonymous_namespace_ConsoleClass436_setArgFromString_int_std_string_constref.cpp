// FUNCTION: BF2 0xaa83a0
#include <sstream>
#include <string>
#include <new>

extern "C" int g_1133918;

static void __attribute__((noinline)) kill_iss_0xaa83a0(std::istringstream* p) {
    p->~basic_istringstream();
}

extern "C" void fn_0xaa83a0(void* self, int count, const std::string& value) {
    if (count != 1) return;
    char buf[sizeof(std::istringstream)] __attribute__((aligned(8)));
    std::istringstream* ss = new (buf) std::istringstream(value);
    *ss >> g_1133918;
    *(void**)((char*)self + 0x38) = &g_1133918;
    kill_iss_0xaa83a0(ss);
}
// REVERSED_FUNCTION: dice_hfe_anonymous_namespace_ConsoleClass130_setArgFromString_int_std_string_constref (0xaa83a0)
