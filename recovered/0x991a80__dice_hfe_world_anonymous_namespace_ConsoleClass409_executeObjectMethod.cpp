// FUNCTION: BF2 0x991a80
namespace dice { namespace hfe { namespace world { namespace anonymous_namespace {
extern void* func_0x00699ea0(unsigned int);  // getActiveTemplate
extern int g_cid_PlayerControlObjectTemplate;  // 0x00c7ce5c
typedef void (*fn300_t)(void*, void*);
typedef void (*fn2f8_t)(void*, void*);
struct V3b { int a, b, c; };
long executeObjectMethod_0x8ff590(void* p) {
    int idx = *(int*)((char*)p + 0x30);
    if (__builtin_expect(idx == 0, 1)) {
        *(char*)((char*)p + 0x108) = 1;
        void* t = func_0x00699ea0(g_cid_PlayerControlObjectTemplate);
        int locals[3];
        void** v = *(void***)t;
        ((fn300_t)v[0x70/8])(&locals, t);
        char* d = (char*)p + 0x10c;
        *(int*)d = locals[0];
        *(int*)(d + 4) = locals[1];
        *(int*)(d + 8) = locals[2];
        return (long)d;
    } else {
        if (idx == 1) {
            int* src = *(int**)((char*)p + 0x38);
            int c2 = src[2];
            int c1 = src[1];
            int c0 = src[0];
            V3b locals2;
            locals2.b = c1;
            locals2.c = c2;
            locals2.a = c0;
            *(char*)((char*)p + 0x108) = 0;
            void* t2 = func_0x00699ea0(g_cid_PlayerControlObjectTemplate);
            void** v2 = *(void***)t2;
            ((fn2f8_t)v2[0x68/8])(t2, &locals2);
            return 0;
        }
        return 0;
    }
}
} } } }
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass1040_executeObjectMethod (0x8ff590)
