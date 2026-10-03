// FUNCTION: BF2 0xb04fc0
#include <sstream>
#include <string>
#include <new>

extern "C" float g_0x114b6f8;

static void __attribute__((noinline)) kill_iss_0xb04fc0(std::istringstream* p) {
    p->~basic_istringstream();
}

extern "C" void fn_0xb04fc0(void* self, int count, const std::string& value) {
    if (count != 1) return;
    char buf[sizeof(std::istringstream)] __attribute__((aligned(8)));
    std::istringstream* ss = new (buf) std::istringstream(value);
    *ss >> g_0x114b6f8;
    *(void**)((char*)self + 0x38) = &g_0x114b6f8;
    kill_iss_0xb04fc0(ss);
}
// REVERSED_FUNCTION: dice_hfe_ai_anonymous_namespace_ConsoleClass200_setArgFromString_int_std_string_constref (0xb04fc0)
