// FUNCTION: BF2 0xa24180
#include <sstream>
#include <string>
#include <new>

extern "C" bool g_0x1118c4c;

static void __attribute__((noinline)) kill_iss_0xa24180(std::istringstream* p) {
    p->~basic_istringstream();
}

extern "C" void fn_0xa24180(void* self, int count, const std::string& value) {
    if (count != 1) return;
    char buf[sizeof(std::istringstream)] __attribute__((aligned(8)));
    std::istringstream* ss = new (buf) std::istringstream(value);
    *ss >> g_0x1118c4c;
    *(void**)((char*)self + 0x38) = &g_0x1118c4c;
    kill_iss_0xa24180(ss);
}
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass85_setArgFromString_int_std_string_constref (0xa24180)
