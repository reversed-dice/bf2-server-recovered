// FUNCTION: BF2 0xa84b60
#include <sstream>
#include <string>
#include <new>

extern "C" int g_0x112ecb0;

static void __attribute__((noinline)) kill_iss_0xa84b60(std::istringstream* p) {
    p->~basic_istringstream();
}

extern "C" void fn_0xa84b60(void* self, int count, const std::string& value) {
    if (count != 1) return;
    char buf[sizeof(std::istringstream)] __attribute__((aligned(8)));
    std::istringstream* ss = new (buf) std::istringstream(value);
    *ss >> g_0x112ecb0;
    *(void**)((char*)self + 0x38) = &g_0x112ecb0;
    kill_iss_0xa84b60(ss);
}
// REVERSED_FUNCTION: dice_hfe_anonymous_namespace_ConsoleClass693_setArgFromString_int_std_string_constref (0xa84b60)
