// FUNCTION: BF2 0x8ddb30
namespace dice { namespace hfe { namespace world { namespace anonymous_namespace {
extern void* func_0x00699ee0(unsigned int, unsigned int);  // getActiveTemplateComponent
extern void func_0x0060c650(float, void*);  // setRecoilGraphExponent
extern int g_iid_IWeaponRecoilCompTemplate;  // 0x00c75e14
extern int g_cid_SoldierBasedRecoilCompTemplate;  // 0x00c7cfec
long executeObjectMethod_0x8dd9d0(void* p) {
    if (__builtin_expect(*(int*)((char*)p + 0x30) == 0, 1)) {
        *(char*)((char*)p + 0x108) = 1;
        void* t = func_0x00699ee0(g_iid_IWeaponRecoilCompTemplate, g_cid_SoldierBasedRecoilCompTemplate);
        *(int*)((char*)p + 0x10c) = *(int*)((char*)t + 0x58);
        return (long)((char*)p + 0x10c);
    } else {
        if (*(int*)((char*)p + 0x30) == 1) {
            int cidv = g_cid_SoldierBasedRecoilCompTemplate;
            float u = **(float**)((char*)p + 0x38);
            *(char*)((char*)p + 0x108) = 0;
            void* t2 = func_0x00699ee0(g_iid_IWeaponRecoilCompTemplate, cidv);
            func_0x0060c650(u, t2);
            return 0;
        }
        return 0;
    }
}
} } } }
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass505_executeObjectMethod (0x8dd9d0)
