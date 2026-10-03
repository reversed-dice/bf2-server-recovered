// FUNCTION: BF2 0xaf8020
#include <sstream>
#include <string>
#include <new>

extern "C" bool g_0x1143d9a;

static void __attribute__((noinline)) kill_iss_0xaf8020(std::istringstream* p) {
    p->~basic_istringstream();
}

extern "C" void fn_0xaf8020(void* self, int count, const std::string& value) {
    if (count != 1) return;
    char buf[sizeof(std::istringstream)] __attribute__((aligned(8)));
    std::istringstream* ss = new (buf) std::istringstream(value);
    *ss >> g_0x1143d9a;
    *(void**)((char*)self + 0x38) = &g_0x1143d9a;
    kill_iss_0xaf8020(ss);
}
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass182_setArgFromString_int_std_string_constref (0xaf8020)
