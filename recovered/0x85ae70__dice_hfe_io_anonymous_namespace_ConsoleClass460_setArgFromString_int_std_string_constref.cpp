// FUNCTION: BF2 0x85ae70
#include <sstream>
#include <string>
#include <new>

extern "C" bool g_0x10b8920;

static void __attribute__((noinline)) kill_iss_0x85ae70(std::istringstream* p) {
    p->~basic_istringstream();
}

extern "C" void fn_0x85ae70(void* self, int count, const std::string& value) {
    if (count != 1) return;
    char buf[sizeof(std::istringstream)] __attribute__((aligned(8)));
    std::istringstream* ss = new (buf) std::istringstream(value);
    *ss >> g_0x10b8920;
    *(void**)((char*)self + 0x38) = &g_0x10b8920;
    kill_iss_0x85ae70(ss);
}
// REVERSED_FUNCTION: dice_hfe_io_anonymous_namespace_ConsoleClass460_setArgFromString_int_std_string_constref (0x85ae70)
