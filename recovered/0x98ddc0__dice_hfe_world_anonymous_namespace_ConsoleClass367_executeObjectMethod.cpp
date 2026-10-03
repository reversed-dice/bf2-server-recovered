// FUNCTION: BF2 0x98ddc0
namespace dice { namespace hfe {
extern void* fn_69de30(unsigned id);

long dice_hfe_world_anonymous_namespace_ConsoleClass367_executeObjectMethod(long param_1) {
    int sel = *(int*)(param_1 + 0x30);
    if (sel != 0) goto not_zero;
    {
        *(char*)(param_1 + 0x108) = 1;
        void* obj = fn_69de30(*(unsigned*)(0x00c7ce94));
        typedef unsigned (*Fn1)(void*);
        Fn1 f = (Fn1)(*(void***)obj)[0x290 / 8];
        unsigned r = f(obj);
        *(unsigned*)(param_1 + 0x10c) = r;
        return param_1 + 0x10c;
    }
    not_zero:
    if (sel != 1) return 0;
    {
        unsigned v = **(unsigned**)(param_1 + 0x38);
        *(char*)(param_1 + 0x108) = 0;
        void* obj = fn_69de30(*(unsigned*)(0x00c7ce94));
        typedef void (*Fn2)(void*, unsigned);
        Fn2 f = (Fn2)(*(void***)obj)[0x288 / 8];
        f(obj, v);
        return 0;
    }
}
} }
