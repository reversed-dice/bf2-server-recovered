// FUNCTION: BF2 0xada810
#include <sstream>
#include <string>
#include <new>

extern "C" float g_0x114091c;

static void __attribute__((noinline)) kill_iss_0xada810(std::istringstream* p) {
    p->~basic_istringstream();
}

extern "C" void fn_0xada810(void* self, int count, const std::string& value) {
    if (count != 1) return;
    char buf[sizeof(std::istringstream)] __attribute__((aligned(8)));
    std::istringstream* ss = new (buf) std::istringstream(value);
    *ss >> g_0x114091c;
    *(void**)((char*)self + 0x38) = &g_0x114091c;
    kill_iss_0xada810(ss);
}
// REVERSED_FUNCTION: dice_hfe_animationTools_anonymous_namespace_ConsoleClass189_setArgFromString_int_std_string_constref (0xada810)
