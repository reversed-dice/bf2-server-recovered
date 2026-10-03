// FUNCTION: BF2 0x8ec170
namespace dice { namespace hfe { namespace world { namespace anonymous_namespace {
extern void* func_0x0069de30(unsigned int);  // getActiveTemplate
extern void func_0x00526d20(float, void*);  // setter
extern int g_cid_LaserDesignatorCompTemplate;  // 0x00c7d038
long executeObjectMethod_0x8ec170(void* p) {
    if (__builtin_expect(*(int*)((char*)p + 0x30) == 0, 1)) {
        *(char*)((char*)p + 0x108) = 1;
        void* t = func_0x0069de30(g_cid_LaserDesignatorCompTemplate);
        *(int*)((char*)p + 0x10c) = *(int*)((char*)t + 0x260);
        return (long)((char*)p + 0x10c);
    } else {
        if (*(int*)((char*)p + 0x30) == 1) {
            float u = **(float**)((char*)p + 0x38);
            *(char*)((char*)p + 0x108) = 0;
            void* t2 = func_0x0069de30(g_cid_LaserDesignatorCompTemplate);
            func_0x00526d20(u, t2);
            return 0;
        }
        return 0;
    }
}
} } } }
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass960_executeObjectMethod (0x8ec170)
