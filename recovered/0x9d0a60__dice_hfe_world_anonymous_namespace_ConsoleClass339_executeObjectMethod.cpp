// FUNCTION: BF2 0x9d0a60
namespace dice { namespace hfe {
extern void* fn_69de30(unsigned id);
extern float fn_getter(void* obj);
extern void fn_setter(void* obj, float v);

long dice_hfe_world_anonymous_namespace_ConsoleClass339_executeObjectMethod(long param_1) {
    int sel = *(int*)(param_1 + 0x30);
    if (sel != 0) goto not_zero;
    {
        *(char*)(param_1 + 0x108) = 1;
        void* obj = fn_69de30(*(unsigned*)(0x00c7ce88));
        float r = fn_getter(obj);
        *(float*)(param_1 + 0x10c) = r;
        return param_1 + 0x10c;
    }
    not_zero:
    if (sel != 1) return 0;
    {
        float v = **(float**)(param_1 + 0x38);
        *(char*)(param_1 + 0x108) = 0;
        void* obj = fn_69de30(*(unsigned*)(0x00c7ce88));
        fn_setter(obj, v);
        return 0;
    }
}
} }
