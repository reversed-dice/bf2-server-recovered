// FUNCTION: BF2 0xaa8db0
namespace dice { namespace hfe {

long dice_hfe_world_anonymous_namespace_ConsoleClass247_executeObjectMethod(long param_1) {
    int sel = *(int*)(param_1 + 0x30);
    if (sel != 0) goto not_zero;
    {
        *(char*)(param_1 + 0x108) = 1;
        void* mgr = *(void**)(0x0112ee48);
        typedef void* (*Fm)(void*);
        void* obj = ((Fm)(*(void***)mgr)[0x120 / 8])(mgr);
        typedef unsigned* (*Fn1)(void*);
        Fn1 f = (Fn1)(*(void***)obj)[0xd8 / 8];
        unsigned* p = f(obj);
        unsigned z = p[2];
        unsigned y = p[1];
        unsigned* out = (unsigned*)(param_1 + 0x10c);
        unsigned x = p[0];
        out[0] = x;
        out[1] = y;
        out[2] = z;
        return (long)out;
    }
    not_zero:
    if (sel != 1) return 0;
    {
        unsigned* q = *(unsigned**)(param_1 + 0x38);
        unsigned c = q[2];
        unsigned b = q[1];
        unsigned a = q[0];
        unsigned buf[3];
        buf[1] = b;
        buf[2] = c;
        buf[0] = a;
        *(char*)(param_1 + 0x108) = 0;
        void* mgr = *(void**)(0x0112ee48);
        typedef void* (*Fm)(void*);
        void* obj = ((Fm)(*(void***)mgr)[0x120 / 8])(mgr);
        typedef void (*Fn2)(void*, unsigned*);
        Fn2 f = (Fn2)(*(void***)obj)[0xe0 / 8];
        f(obj, buf);
        return 0;
    }
}
} }
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass247_executeObjectMethod (0xaa8db0)
