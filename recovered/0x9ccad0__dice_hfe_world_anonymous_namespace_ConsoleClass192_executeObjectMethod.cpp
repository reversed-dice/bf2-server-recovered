// FUNCTION: BF2 0x9ccad0
namespace dice { namespace hfe { namespace world {
extern void* fn_69de30(unsigned id);

struct Tmpl_9ccad0 {
    char _pad0[0xe8];
    unsigned char bit0 : 1;
};

long dice_hfe_world_anonymous_namespace_ConsoleClass192_executeObjectMethod(long param_1) {
    int sel = *(int*)(param_1 + 0x30);
    if (sel != 0) goto not_zero;
    {
        *(char*)(param_1 + 0x108) = 1;
        Tmpl_9ccad0* p = (Tmpl_9ccad0*)fn_69de30(*(unsigned*)0xc7d080);
        *(unsigned char*)(param_1 + 0x10a) = p->bit0;
        return param_1 + 0x10a;
    }
    not_zero:
    if (sel != 1) return 0;
    {
        char v = **(char**)(param_1 + 0x38);
        *(char*)(param_1 + 0x108) = 0;
        Tmpl_9ccad0* p = (Tmpl_9ccad0*)fn_69de30(*(unsigned*)0xc7d080);
        p->bit0 = (v != 0);
        return 0;
    }
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass192_executeObjectMethod (0x9ccad0)
