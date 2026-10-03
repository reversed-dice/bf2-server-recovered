// FUNCTION: BF2 0x8eaee0
namespace dice { namespace hfe {
extern void* fn_69de30(unsigned id);

long dice_hfe_world_anonymous_namespace_ConsoleClass932_executeObjectMethod(long param_1) {
    int sel = *(int*)(param_1 + 0x30);
    if (sel != 0) goto not_zero;
    {
        *(char*)(param_1 + 0x108) = 1;
        void* obj = fn_69de30(*(unsigned*)(0x00c7cf68));
        typedef float (*Fn1)(void*);
        Fn1 f = (Fn1)(*(void***)obj)[0x300 / 8];
        float r = f(obj);
        *(float*)(param_1 + 0x10c) = r;
        return param_1 + 0x10c;
    }
    not_zero:
    if (sel != 1) return 0;
    {
        float v = **(float**)(param_1 + 0x38);
        *(char*)(param_1 + 0x108) = 0;
        void* obj = fn_69de30(*(unsigned*)(0x00c7cf68));
        typedef void (*Fn2)(void*, float);
        Fn2 f = (Fn2)(*(void***)obj)[0x2f8 / 8];
        f(obj, v);
        return 0;
    }
}
} }
