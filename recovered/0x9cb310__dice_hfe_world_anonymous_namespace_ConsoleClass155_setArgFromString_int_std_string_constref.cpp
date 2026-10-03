// FUNCTION: BF2 0x9cb310
#include <sstream>
#include <string>
#include <new>

extern "C" bool g_0x11141ce;

static void __attribute__((noinline)) kill_iss_0x9cb310(std::istringstream* p) {
    p->~basic_istringstream();
}

extern "C" void fn_0x9cb310(void* self, int count, const std::string& value) {
    if (count != 1) return;
    char buf[sizeof(std::istringstream)] __attribute__((aligned(8)));
    std::istringstream* ss = new (buf) std::istringstream(value);
    *ss >> g_0x11141ce;
    *(void**)((char*)self + 0x38) = &g_0x11141ce;
    kill_iss_0x9cb310(ss);
}
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass155_setArgFromString_int_std_string_constref (0x9cb310)
