// FUNCTION: BF2 0x8d3de0
#include <sstream>
#include <string>
#include <new>

extern "C" float g_0x10f0024;

static void __attribute__((noinline)) kill_iss_0x8d3de0(std::istringstream* p) {
    p->~basic_istringstream();
}

extern "C" void fn_0x8d3de0(void* self, int count, const std::string& value) {
    if (count != 1) return;
    char buf[sizeof(std::istringstream)] __attribute__((aligned(8)));
    std::istringstream* ss = new (buf) std::istringstream(value);
    *ss >> g_0x10f0024;
    *(void**)((char*)self + 0x38) = &g_0x10f0024;
    kill_iss_0x8d3de0(ss);
}
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass332_setArgFromString_int_std_string_constref (0x8d3de0)
