// FUNCTION: BF2 0x85a650
#include <sstream>
#include <string>
#include <new>

extern "C" bool g_0x10b8910;

static void __attribute__((noinline)) kill_iss_0x85a650(std::istringstream* p) {
    p->~basic_istringstream();
}

extern "C" void fn_0x85a650(void* self, int count, const std::string& value) {
    if (count != 1) return;
    char buf[sizeof(std::istringstream)] __attribute__((aligned(8)));
    std::istringstream* ss = new (buf) std::istringstream(value);
    *ss >> g_0x10b8910;
    *(void**)((char*)self + 0x38) = &g_0x10b8910;
    kill_iss_0x85a650(ss);
}
// REVERSED_FUNCTION: dice_hfe_io_anonymous_namespace_ConsoleClass435_setArgFromString_int_std_string_constref (0x85a650)
