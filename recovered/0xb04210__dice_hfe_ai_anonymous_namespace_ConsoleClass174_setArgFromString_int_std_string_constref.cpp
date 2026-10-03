// FUNCTION: BF2 0xb04210
#include <sstream>
#include <string>
#include <new>

extern "C" bool g_0x114b6a6;

static void __attribute__((noinline)) kill_iss_0xb04210(std::istringstream* p) {
    p->~basic_istringstream();
}

extern "C" void fn_0xb04210(void* self, int count, const std::string& value) {
    if (count != 1) return;
    char buf[sizeof(std::istringstream)] __attribute__((aligned(8)));
    std::istringstream* ss = new (buf) std::istringstream(value);
    *ss >> g_0x114b6a6;
    *(void**)((char*)self + 0x38) = &g_0x114b6a6;
    kill_iss_0xb04210(ss);
}
// REVERSED_FUNCTION: dice_hfe_ai_anonymous_namespace_ConsoleClass174_setArgFromString_int_std_string_constref (0xb04210)
