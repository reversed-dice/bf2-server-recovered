// FUNCTION: BF2 0x9d1b40
namespace dice { namespace hfe {
extern void* fn_69de30(unsigned id);
extern unsigned char fn_getter(void* obj);
extern void fn_setter(void* obj, unsigned char v);

long dice_hfe_world_anonymous_namespace_ConsoleClass354_executeObjectMethod(long param_1) {
    int sel = *(int*)(param_1 + 0x30);
    if (sel != 0) goto not_zero;
    {
        *(char*)(param_1 + 0x108) = 1;
        void* obj = fn_69de30(*(unsigned*)(0x00c7ce80));
        unsigned char r = fn_getter(obj);
        *(unsigned char*)(param_1 + 0x10a) = r;
        return param_1 + 0x10a;
    }
    not_zero:
    if (sel != 1) return 0;
    {
        unsigned char v = **(unsigned char**)(param_1 + 0x38);
        *(char*)(param_1 + 0x108) = 0;
        void* obj = fn_69de30(*(unsigned*)(0x00c7ce80));
        fn_setter(obj, v);
        return 0;
    }
}
} }
