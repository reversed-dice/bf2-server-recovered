// FUNCTION: BF2 0xadaa50
#include <sstream>
#include <string>
#include <new>

extern "C" int g_0x1140924;

static void __attribute__((noinline)) kill_iss_0xadaa50(std::istringstream* p) {
    p->~basic_istringstream();
}

extern "C" void fn_0xadaa50(void* self, int count, const std::string& value) {
    if (count != 1) return;
    char buf[sizeof(std::istringstream)] __attribute__((aligned(8)));
    std::istringstream* ss = new (buf) std::istringstream(value);
    *ss >> g_0x1140924;
    *(void**)((char*)self + 0x38) = &g_0x1140924;
    kill_iss_0xadaa50(ss);
}
// REVERSED_FUNCTION: dice_hfe_animationTools_anonymous_namespace_ConsoleClass191_setArgFromString_int_std_string_constref (0xadaa50)
