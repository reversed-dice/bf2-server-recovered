// FUNCTION: BF2 0x8df7f0
namespace dice { namespace hfe { namespace world { namespace anonymous_namespace {
extern void* func_0x00699ee0(unsigned int, unsigned int);  // getActiveTemplateComponent
extern void func_0x00603920(float, void*);  // setUpdateInterval
extern int g_iid_IWeaponTargetCompTemplate;  // 0x00c75dc4
extern int g_cid_LPTargetCompTemplate;  // 0x00c7cfcc
long executeObjectMethod_0x8df7f0(void* p) {
    if (__builtin_expect(*(int*)((char*)p + 0x30) == 0, 1)) {
        *(char*)((char*)p + 0x108) = 1;
        void* t = func_0x00699ee0(g_iid_IWeaponTargetCompTemplate, g_cid_LPTargetCompTemplate);
        *(int*)((char*)p + 0x10c) = *(int*)((char*)t + 0x70);
        return (long)((char*)p + 0x10c);
    } else {
        if (*(int*)((char*)p + 0x30) == 1) {
            int cidv = g_cid_LPTargetCompTemplate;
            float u = **(float**)((char*)p + 0x38);
            *(char*)((char*)p + 0x108) = 0;
            void* t2 = func_0x00699ee0(g_iid_IWeaponTargetCompTemplate, cidv);
            func_0x00603920(u, t2);
            return 0;
        }
        return 0;
    }
}
} } } }
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass541_executeObjectMethod (0x8df7f0)
