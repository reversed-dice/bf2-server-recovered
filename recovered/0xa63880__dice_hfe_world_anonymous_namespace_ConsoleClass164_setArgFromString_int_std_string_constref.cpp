// FUNCTION: BF2 0xa63880
#include <sstream>
#include <string>
#include <new>

extern "C" float g_0x1127fc8;

static void __attribute__((noinline)) kill_iss_0xa63880(std::istringstream* p) {
    p->~basic_istringstream();
}

extern "C" void fn_0xa63880(void* self, int count, const std::string& value) {
    if (count != 1) return;
    char buf[sizeof(std::istringstream)] __attribute__((aligned(8)));
    std::istringstream* ss = new (buf) std::istringstream(value);
    *ss >> g_0x1127fc8;
    *(void**)((char*)self + 0x38) = &g_0x1127fc8;
    kill_iss_0xa63880(ss);
}
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass164_setArgFromString_int_std_string_constref (0xa63880)
