// FUNCTION: BF2 0xa85140
#include <sstream>
#include <string>
#include <new>

extern "C" bool g_0x112eccc;

static void __attribute__((noinline)) kill_iss_0xa85140(std::istringstream* p) {
    p->~basic_istringstream();
}

extern "C" void fn_0xa85140(void* self, int count, const std::string& value) {
    if (count != 1) return;
    char buf[sizeof(std::istringstream)] __attribute__((aligned(8)));
    std::istringstream* ss = new (buf) std::istringstream(value);
    *ss >> g_0x112eccc;
    *(void**)((char*)self + 0x38) = &g_0x112eccc;
    kill_iss_0xa85140(ss);
}
// REVERSED_FUNCTION: dice_hfe_anonymous_namespace_ConsoleClass706_setArgFromString_int_std_string_constref (0xa85140)
