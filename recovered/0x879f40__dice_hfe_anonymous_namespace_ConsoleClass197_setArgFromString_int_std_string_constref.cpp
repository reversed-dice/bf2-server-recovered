// FUNCTION: BF2 0x879f40
#include <sstream>
#include <string>
#include <new>

extern "C" bool g_0x10c0c09;

static void __attribute__((noinline)) kill_iss_0x879f40(std::istringstream* p) {
    p->~basic_istringstream();
}

extern "C" void fn_0x879f40(void* self, int count, const std::string& value) {
    if (count != 1) return;
    char buf[sizeof(std::istringstream)] __attribute__((aligned(8)));
    std::istringstream* ss = new (buf) std::istringstream(value);
    *ss >> g_0x10c0c09;
    *(void**)((char*)self + 0x38) = &g_0x10c0c09;
    kill_iss_0x879f40(ss);
}
// REVERSED_FUNCTION: dice_hfe_anonymous_namespace_ConsoleClass197_setArgFromString_int_std_string_constref (0x879f40)
