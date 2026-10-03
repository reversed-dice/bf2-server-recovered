// FUNCTION: BF2 0x985eb0
#include <sstream>
#include <string>
#include <new>

extern "C" bool g_0x10fe37c;

static void __attribute__((noinline)) kill_iss_0x985eb0(std::istringstream* p) {
    p->~basic_istringstream();
}

extern "C" void fn_0x985eb0(void* self, int count, const std::string& value) {
    if (count != 1) return;
    char buf[sizeof(std::istringstream)] __attribute__((aligned(8)));
    std::istringstream* ss = new (buf) std::istringstream(value);
    *ss >> g_0x10fe37c;
    *(void**)((char*)self + 0x38) = &g_0x10fe37c;
    kill_iss_0x985eb0(ss);
}
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass121_setArgFromString_int_std_string_constref (0x985eb0)
