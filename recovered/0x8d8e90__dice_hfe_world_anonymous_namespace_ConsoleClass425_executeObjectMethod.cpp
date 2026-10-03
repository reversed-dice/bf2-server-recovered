// FUNCTION: BF2 0x8d8e90
namespace dice { namespace hfe { namespace world { namespace anonymous_namespace {
extern void* func_0x00699ee0(unsigned int, unsigned int);  // getActiveTemplateComponent
extern void func_0x005ecf30(float, void*);  // setAbilityDrain
extern int g_iid_IWeaponAmmoCompTemplate;  // 0x00c75e24
extern int g_cid_ReplenishingAmmoCompTemplate;  // 0x00c7cfc4
long executeObjectMethod_0x8d8e90(void* p) {
    if (__builtin_expect(*(int*)((char*)p + 0x30) == 0, 1)) {
        *(char*)((char*)p + 0x108) = 1;
        void* t = func_0x00699ee0(g_iid_IWeaponAmmoCompTemplate, g_cid_ReplenishingAmmoCompTemplate);
        *(int*)((char*)p + 0x10c) = *(int*)((char*)t + 0x5c);
        return (long)((char*)p + 0x10c);
    } else {
        if (*(int*)((char*)p + 0x30) == 1) {
            int cidv = g_cid_ReplenishingAmmoCompTemplate;
            float u = **(float**)((char*)p + 0x38);
            *(char*)((char*)p + 0x108) = 0;
            void* t2 = func_0x00699ee0(g_iid_IWeaponAmmoCompTemplate, cidv);
            func_0x005ecf30(u, t2);
            return 0;
        }
        return 0;
    }
}
} } } }
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass425_executeObjectMethod (0x8d8e90)
