// FUNCTION: BF2 0xac0cd0
#include <sstream>
#include <string>
#include <new>

extern "C" int g_0x11394ac;

static void __attribute__((noinline)) kill_iss_0xac0cd0(std::istringstream* p) {
    p->~basic_istringstream();
}

extern "C" void fn_0xac0cd0(void* self, int count, const std::string& value) {
    if (count != 1) return;
    char buf[sizeof(std::istringstream)] __attribute__((aligned(8)));
    std::istringstream* ss = new (buf) std::istringstream(value);
    *ss >> g_0x11394ac;
    *(void**)((char*)self + 0x38) = &g_0x11394ac;
    kill_iss_0xac0cd0(ss);
}
// REVERSED_FUNCTION: dice_hfe_tool_anonymous_namespace_ConsoleClass220_setArgFromString_int_std_string_constref (0xac0cd0)
