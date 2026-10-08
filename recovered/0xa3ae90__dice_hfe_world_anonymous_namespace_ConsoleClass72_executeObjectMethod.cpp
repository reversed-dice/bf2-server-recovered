// FUNCTION: BF2 0xa3ae90
namespace dice { namespace hfe { namespace world { namespace anonymous_namespace {
extern void* func_0x0069de30(unsigned int);
extern int g_iid_0xc75d28;
typedef void (*fn_t)(void*, void*);
struct VA { int a, b, c; };
struct VB { int a, b, c, d; };
long executeObjectMethod(void* p) {
    int idx = *(int*)((char*)p + 0x30);
    if (__builtin_expect(idx == 0, 1)) {
        *(char*)((char*)p + 0x108) = 1;
        void* t = func_0x0069de30(g_iid_0xc75d28);
        VA locals;
        void** v = *(void***)t;
        ((fn_t)v[0x120/8])(&locals, t);
        char* d = (char*)p + 0x10c;
        *(int*)d = locals.a;
        *(int*)(d + 4) = locals.b;
        return (long)d;
    } else {
        if (idx == 1) {
            int* src = *(int**)((char*)p + 0x38);
            int b = src[1];
            int a = src[0];
            VB locals2;
            locals2.b = b;
            locals2.a = a;
            *(char*)((char*)p + 0x108) = 0;
            void* t2 = func_0x0069de30(g_iid_0xc75d28);
            void** v2 = *(void***)t2;
            ((fn_t)v2[0x118/8])(t2, &locals2);
            return 0;
        }
        return 0;
    }
}
} } } }
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass72_executeObjectMethod (0xa3ae90)
