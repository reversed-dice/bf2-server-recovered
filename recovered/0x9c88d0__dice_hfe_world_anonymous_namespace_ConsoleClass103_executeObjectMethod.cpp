// FUNCTION: BF2 0x9c88d0
namespace dice { namespace hfe {
extern void* fn_69de30(unsigned id);
extern void fn_setter(void* obj, float v);

long dice_hfe_world_anonymous_namespace_ConsoleClass103_executeObjectMethod(long param_1) {
    if (*(int*)(param_1 + 0x30) != 1) return 0;
    float v = **(float**)(param_1 + 0x38);
    *(char*)(param_1 + 0x108) = 0;
    void* obj = fn_69de30(*(unsigned*)(0x00c7d05c));
    fn_setter(obj, v);
    return 0;
}
} }
