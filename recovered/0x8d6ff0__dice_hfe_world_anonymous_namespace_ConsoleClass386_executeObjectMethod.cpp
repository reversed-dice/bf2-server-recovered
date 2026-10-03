// FUNCTION: BF2 0x8d6ff0
namespace dice { namespace hfe { namespace world { namespace anonymous_namespace {
extern void* func_0x00699ee0(unsigned int, unsigned int);  // getActiveTemplateComponent
extern void func_0x005f9030(float, void*);  // setter
extern int g_iid_IWeaponFireCompTemplate;  // 0x00c75e34
extern int g_cid_SpringTemplate;          // 0x00c7d004
long executeObjectMethod_0x8d6ff0(void* p) {
    if (__builtin_expect(*(int*)((char*)p + 0x30) == 0, 1)) {
        *(char*)((char*)p + 0x108) = 1;
        void* t = func_0x00699ee0(g_iid_IWeaponFireCompTemplate, g_cid_SpringTemplate);
        *(int*)((char*)p + 0x10c) = *(int*)((char*)t + 0x90);
        return (long)((char*)p + 0x10c);
    } else {
        if (*(int*)((char*)p + 0x30) == 1) {
            int cid = g_cid_SpringTemplate;
            float u = **(float**)((char*)p + 0x38);
            *(char*)((char*)p + 0x108) = 0;
            void* t2 = func_0x00699ee0(g_iid_IWeaponFireCompTemplate, cid);
            func_0x005f9030(u, t2);
            return 0;
        }
        return 0;
    }
}
} } } }
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass386_executeObjectMethod (0x8d6ff0)
