// FUNCTION: BF2 0x87ad60
#include <sstream>
#include <string>
#include <new>

extern "C" int g_0x10c0c64;

static void __attribute__((noinline)) kill_iss_0x87ad60(std::istringstream* p) {
    p->~basic_istringstream();
}

extern "C" void fn_0x87ad60(void* self, int count, const std::string& value) {
    if (count != 1) return;
    char buf[sizeof(std::istringstream)] __attribute__((aligned(8)));
    std::istringstream* ss = new (buf) std::istringstream(value);
    *ss >> g_0x10c0c64;
    *(void**)((char*)self + 0x38) = &g_0x10c0c64;
    kill_iss_0x87ad60(ss);
}
// REVERSED_FUNCTION: dice_hfe_anonymous_namespace_ConsoleClass256_setArgFromString_int_std_string_constref (0x87ad60)
