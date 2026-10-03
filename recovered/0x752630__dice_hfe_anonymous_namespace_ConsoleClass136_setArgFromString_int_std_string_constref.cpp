// FUNCTION: BF2 0x752630
#include <sstream>
#include <string>
#include <new>

extern "C" float g_0x10ad848;

static void __attribute__((noinline)) kill_iss_0x752630(std::istringstream* p) {
    p->~basic_istringstream();
}

extern "C" void fn_0x752630(void* self, int count, const std::string& value) {
    if (count != 1) return;
    char buf[sizeof(std::istringstream)] __attribute__((aligned(8)));
    std::istringstream* ss = new (buf) std::istringstream(value);
    *ss >> g_0x10ad848;
    *(void**)((char*)self + 0x38) = &g_0x10ad848;
    kill_iss_0x752630(ss);
}
// REVERSED_FUNCTION: dice_hfe_anonymous_namespace_ConsoleClass136_setArgFromString_int_std_string_constref (0x752630)
