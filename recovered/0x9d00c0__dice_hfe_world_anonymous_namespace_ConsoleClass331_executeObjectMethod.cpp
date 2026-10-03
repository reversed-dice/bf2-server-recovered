// FUNCTION: BF2 0x9d00c0
namespace dice { namespace hfe {
extern void* fn_69de30(unsigned id);
extern unsigned fn_getter(void* obj);
extern void fn_setter(void* obj, unsigned v);

long dice_hfe_world_anonymous_namespace_ConsoleClass331_executeObjectMethod(long param_1) {
    int sel = *(int*)(param_1 + 0x30);
    if (sel != 0) goto not_zero;
    {
        *(char*)(param_1 + 0x108) = 1;
        void* obj = fn_69de30(*(unsigned*)(0x00c7ce90));
        unsigned r = fn_getter(obj);
        *(unsigned*)(param_1 + 0x10c) = r;
        return param_1 + 0x10c;
    }
    not_zero:
    if (sel != 1) return 0;
    {
        unsigned v = **(unsigned**)(param_1 + 0x38);
        *(char*)(param_1 + 0x108) = 0;
        void* obj = fn_69de30(*(unsigned*)(0x00c7ce90));
        fn_setter(obj, v);
        return 0;
    }
}
} }
