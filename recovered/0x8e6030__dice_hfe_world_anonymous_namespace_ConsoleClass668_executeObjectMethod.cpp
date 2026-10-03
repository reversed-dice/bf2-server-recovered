// FUNCTION: BF2 0x8e6030
namespace dice { namespace hfe { namespace world { namespace anonymous_namespace {
extern void* func_0x00699ee0(unsigned int, unsigned int);  // getActiveTemplateComponent
extern void func_0x0061c6f0(float, void*);
extern int g_iid;  // 0x00c75d94
extern int g_cid;  // 0x00c7cfac
long executeObjectMethod_0x8e6030(void* p) {
    if (__builtin_expect(*(int*)((char*)p + 0x30) == 0, 1)) {
        *(char*)((char*)p + 0x108) = 1;
        void* t = func_0x00699ee0(g_iid, g_cid);
        *(int*)((char*)p + 0x10c) = *(int*)((char*)t + 0x9c);
        return (long)((char*)p + 0x10c);
    } else {
        if (*(int*)((char*)p + 0x30) == 1) {
            int cidv = g_cid;
            float u = **(float**)((char*)p + 0x38);
            *(char*)((char*)p + 0x108) = 0;
            void* t2 = func_0x00699ee0(g_iid, cidv);
            func_0x0061c6f0(u, t2);
            return 0;
        }
        return 0;
    }
}
} } } }
