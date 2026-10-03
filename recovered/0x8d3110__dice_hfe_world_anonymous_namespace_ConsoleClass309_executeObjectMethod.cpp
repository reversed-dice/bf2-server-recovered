// FUNCTION: BF2 0x8d3110
namespace dice { namespace hfe {
extern void* fn_69de30(unsigned id);

long dice_hfe_world_anonymous_namespace_ConsoleClass309_executeObjectMethod(long param_1) {
    int sel = *(int*)(param_1 + 0x30);
    if (sel != 0) goto not_zero;
    {
        *(char*)(param_1 + 0x108) = 1;
        fn_69de30(*(unsigned*)(0x00c7d040));
        *(unsigned*)(param_1 + 0x10c) = 0;
        return param_1 + 0x10c;
    }
    not_zero:
    if (sel != 1) return 0;
    {
        *(char*)(param_1 + 0x108) = 0;
        fn_69de30(*(unsigned*)(0x00c7d040));
        return 0;
    }
}
} }
