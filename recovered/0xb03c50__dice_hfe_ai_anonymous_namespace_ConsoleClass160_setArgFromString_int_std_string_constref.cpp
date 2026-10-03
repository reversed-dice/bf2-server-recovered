// FUNCTION: BF2 0xb03c50
#include <sstream>
#include <string>
#include <new>

extern "C" int g_114b684;

static void __attribute__((noinline)) kill_iss_0xb03c50(std::istringstream* p) {
    p->~basic_istringstream();
}

extern "C" void fn_0xb03c50(void* self, int count, const std::string& value) {
    if (count != 1) return;
    char buf[sizeof(std::istringstream)] __attribute__((aligned(8)));
    std::istringstream* ss = new (buf) std::istringstream(value);
    *ss >> g_114b684;
    *(void**)((char*)self + 0x38) = &g_114b684;
    kill_iss_0xb03c50(ss);
}
// REVERSED_FUNCTION: dice_hfe_anonymous_namespace_ConsoleClass130_setArgFromString_int_std_string_constref (0xb03c50)
