// FUNCTION: BF2 0x85cdc0
#include <sstream>
#include <string>
#include <new>

extern "C" float g_0x10b89dc;

static void __attribute__((noinline)) kill_iss_0x85cdc0(std::istringstream* p) {
    p->~basic_istringstream();
}

extern "C" void fn_0x85cdc0(void* self, int count, const std::string& value) {
    if (count != 1) return;
    char buf[sizeof(std::istringstream)] __attribute__((aligned(8)));
    std::istringstream* ss = new (buf) std::istringstream(value);
    *ss >> g_0x10b89dc;
    *(void**)((char*)self + 0x38) = &g_0x10b89dc;
    kill_iss_0x85cdc0(ss);
}
// REVERSED_FUNCTION: dice_hfe_io_anonymous_namespace_ConsoleClass544_setArgFromString_int_std_string_constref (0x85cdc0)
