// FUNCTION: BF2 0x879bd0
#include <sstream>
#include <string>
#include <new>

extern "C" bool g_0x10c0bec;

static void __attribute__((noinline)) kill_iss_0x879bd0(std::istringstream* p) {
    p->~basic_istringstream();
}

extern "C" void fn_0x879bd0(void* self, int count, const std::string& value) {
    if (count != 1) return;
    char buf[sizeof(std::istringstream)] __attribute__((aligned(8)));
    std::istringstream* ss = new (buf) std::istringstream(value);
    *ss >> g_0x10c0bec;
    *(void**)((char*)self + 0x38) = &g_0x10c0bec;
    kill_iss_0x879bd0(ss);
}
// REVERSED_FUNCTION: dice_hfe_anonymous_namespace_ConsoleClass190_setArgFromString_int_std_string_constref (0x879bd0)
