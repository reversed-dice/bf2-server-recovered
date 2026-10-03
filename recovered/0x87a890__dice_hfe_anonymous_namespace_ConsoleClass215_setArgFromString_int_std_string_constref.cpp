// FUNCTION: BF2 0x87a890
#include <sstream>
#include <string>
#include <new>
namespace dice { namespace hfe {
extern "C" int dice_hfe_anonymous_namespace_ConsoleClass215_setArgFromString_int_std_string_constref_arg;
extern "C" void* _ZNSirsERj(void*, unsigned*);
extern "C" void* _ZNSirsERf(void*, float*);

static void __attribute__((noinline)) kill_a_87a890(std::istringstream* p) { p->~basic_istringstream(); }
static void __attribute__((noinline)) kill_b_87a890(std::istringstream* p) { p->~basic_istringstream(); }

extern "C" void cb_0x87a890(long param_1, int param_2, const std::string* param_3) {
    if (param_2 == 1) {
        char buf[sizeof(std::istringstream)] __attribute__((aligned(8)));
        std::istringstream* ss = new (buf) std::istringstream(*param_3);
        _ZNSirsERj(ss, (unsigned*)&dice_hfe_anonymous_namespace_ConsoleClass215_setArgFromString_int_std_string_constref_arg);
        *(int**)(param_1 + 0x40) = &dice_hfe_anonymous_namespace_ConsoleClass215_setArgFromString_int_std_string_constref_arg;
        kill_a_87a890(ss);
        return;
    }
    if (param_2 != 2) {
        return;
    }
    char buf2[sizeof(std::istringstream)] __attribute__((aligned(8)));
    std::istringstream* ss2 = new (buf2) std::istringstream(*param_3);
    _ZNSirsERf(ss2, (float*)&dice_hfe_anonymous_namespace_ConsoleClass215_setArgFromString_int_std_string_constref_arg);
    *(int**)(param_1 + 0x38) = &dice_hfe_anonymous_namespace_ConsoleClass215_setArgFromString_int_std_string_constref_arg;
    kill_b_87a890(ss2);
}
} }
