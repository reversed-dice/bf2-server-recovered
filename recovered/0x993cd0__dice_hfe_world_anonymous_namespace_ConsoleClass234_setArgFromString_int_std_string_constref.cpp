// FUNCTION: BF2 0x993cd0
#include <sstream>
#include <string>
#include <new>
extern "C" int __cxa_guard_acquire(char*);
extern "C" void __cxa_guard_release(char*);
namespace dice { namespace hfe {
extern "C" char guard_variable_for_dice_hfe_world_anonymous_namespace_ConsoleClass234_setArgFromString_int_std_string_constref_arg;
extern "C" float dice_hfe_world_anonymous_namespace_ConsoleClass234_setArgFromString_int_std_string_constref_arg[3];
extern "C" void dice_hfe_operator_std_istreamref_dice_hfe_Vec3ref(void*, float*);

static void __attribute__((noinline)) kill_iss_993cd0(std::istringstream* p) {
    p->~basic_istringstream();
}
extern "C" void cb_0x993cd0(long param_1, int param_2, const std::string* param_3) {
    if (param_2 == 1) {
        if (!guard_variable_for_dice_hfe_world_anonymous_namespace_ConsoleClass234_setArgFromString_int_std_string_constref_arg) {
            if (__cxa_guard_acquire(&guard_variable_for_dice_hfe_world_anonymous_namespace_ConsoleClass234_setArgFromString_int_std_string_constref_arg)) {
                dice_hfe_world_anonymous_namespace_ConsoleClass234_setArgFromString_int_std_string_constref_arg[0] = 0;
                dice_hfe_world_anonymous_namespace_ConsoleClass234_setArgFromString_int_std_string_constref_arg[1] = 0;
                dice_hfe_world_anonymous_namespace_ConsoleClass234_setArgFromString_int_std_string_constref_arg[2] = 0;
                __cxa_guard_release(&guard_variable_for_dice_hfe_world_anonymous_namespace_ConsoleClass234_setArgFromString_int_std_string_constref_arg);
            }
        }
        char buf[sizeof(std::istringstream)] __attribute__((aligned(8)));
        std::istringstream* ss = new (buf) std::istringstream(*param_3);
        dice_hfe_operator_std_istreamref_dice_hfe_Vec3ref(ss, dice_hfe_world_anonymous_namespace_ConsoleClass234_setArgFromString_int_std_string_constref_arg);
        *(float**)(param_1 + 0x38) = dice_hfe_world_anonymous_namespace_ConsoleClass234_setArgFromString_int_std_string_constref_arg;
        kill_iss_993cd0(ss);
    }
}
} }
