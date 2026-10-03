// FUNCTION: BF2 0x879600
#include <sstream>
#include <string>
#include <new>

extern "C" int g_0x10c0bcc;

static void __attribute__((noinline)) kill_iss_0x879600(std::istringstream* p) {
    p->~basic_istringstream();
}

extern "C" void fn_0x879600(void* self, int count, const std::string& value) {
    if (count != 1) return;
    char buf[sizeof(std::istringstream)] __attribute__((aligned(8)));
    std::istringstream* ss = new (buf) std::istringstream(value);
    *ss >> g_0x10c0bcc;
    *(void**)((char*)self + 0x38) = &g_0x10c0bcc;
    kill_iss_0x879600(ss);
}
// REVERSED_FUNCTION: dice_hfe_anonymous_namespace_ConsoleClass161_setArgFromString_int_std_string_constref (0x879600)
