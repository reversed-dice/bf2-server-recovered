// FUNCTION: BF2 0x98dd40
#include <sstream>
#include <string>
#include <new>

extern "C" int g_0x10fe4ac;

static void __attribute__((noinline)) kill_iss_0x98dd40(std::istringstream* p) {
    p->~basic_istringstream();
}

extern "C" void fn_0x98dd40(void* self, int count, const std::string& value) {
    if (count != 1) return;
    char buf[sizeof(std::istringstream)] __attribute__((aligned(8)));
    std::istringstream* ss = new (buf) std::istringstream(value);
    *ss >> g_0x10fe4ac;
    *(void**)((char*)self + 0x38) = &g_0x10fe4ac;
    kill_iss_0x98dd40(ss);
}
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass367_setArgFromString_int_std_string_constref (0x98dd40)
