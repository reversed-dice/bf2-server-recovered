// FUNCTION: BF2 0xa83400
#include <sstream>
#include <string>
#include <new>
namespace dice { namespace hfe {
extern "C" int dice_hfe_anonymous_namespace_ConsoleClass595_setArgFromString_int_std_string_constref_arg;
extern "C" void* _ZNSirsERi(void*, int*);
extern "C" void* _ZNSirsERi(void*, int*);

static void __attribute__((noinline)) kill_a_a83400(std::istringstream* p) { p->~basic_istringstream(); }
static void __attribute__((noinline)) kill_b_a83400(std::istringstream* p) { p->~basic_istringstream(); }

extern "C" void cb_0xa83400(long param_1, int param_2, const std::string* param_3) {
    if (param_2 == 1) {
        char buf[sizeof(std::istringstream)] __attribute__((aligned(8)));
        std::istringstream* ss = new (buf) std::istringstream(*param_3);
        _ZNSirsERi(ss, (int*)&dice_hfe_anonymous_namespace_ConsoleClass595_setArgFromString_int_std_string_constref_arg);
        *(int**)(param_1 + 0x40) = &dice_hfe_anonymous_namespace_ConsoleClass595_setArgFromString_int_std_string_constref_arg;
        kill_a_a83400(ss);
        return;
    }
    if (param_2 != 2) {
        return;
    }
    char buf2[sizeof(std::istringstream)] __attribute__((aligned(8)));
    std::istringstream* ss2 = new (buf2) std::istringstream(*param_3);
    _ZNSirsERi(ss2, (int*)&dice_hfe_anonymous_namespace_ConsoleClass595_setArgFromString_int_std_string_constref_arg);
    *(int**)(param_1 + 0x38) = &dice_hfe_anonymous_namespace_ConsoleClass595_setArgFromString_int_std_string_constref_arg;
    kill_b_a83400(ss2);
}
} }
