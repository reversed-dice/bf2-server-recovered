// FUNCTION: BF2 0x98eae0
namespace dice { namespace hfe {
extern void* fn_69de30(unsigned id);

long dice_hfe_world_anonymous_namespace_ConsoleClass377_executeObjectMethod(long param_1) {
    int sel = *(int*)(param_1 + 0x30);
    if (sel != 0) goto not_zero;
    {
        *(char*)(param_1 + 0x108) = 1;
        void* obj = fn_69de30(*(unsigned*)(0x00c7ce94));
        typedef unsigned char (*Fn1)(void*);
        Fn1 f = (Fn1)(*(void***)obj)[0x280 / 8];
        unsigned char r = f(obj);
        *(unsigned char*)(param_1 + 0x10a) = r;
        return param_1 + 0x10a;
    }
    not_zero:
    if (sel != 1) return 0;
    {
        unsigned char v = **(unsigned char**)(param_1 + 0x38);
        *(char*)(param_1 + 0x108) = 0;
        void* obj = fn_69de30(*(unsigned*)(0x00c7ce94));
        typedef void (*Fn2)(void*, unsigned char);
        Fn2 f = (Fn2)(*(void***)obj)[0x278 / 8];
        f(obj, v);
        return 0;
    }
}
} }
