// FUNCTION: BF2 0x8dd830
namespace dice { namespace hfe { namespace world { namespace anonymous_namespace {
extern void* func_0x00699ee0(unsigned int, unsigned int);  // getActiveTemplateComponent
extern void func_0x0060c630(void*, int);  // setRecoilGraphNumFrames
extern int g_iid_IWeaponRecoilCompTemplate;  // 0x00c75e14
extern int g_cid_SoldierBasedRecoilCompTemplate;  // 0x00c7cfec
long executeObjectMethod_0x8dd830(void* p) {
    if (__builtin_expect(*(int*)((char*)p + 0x30) == 0, 1)) {
        *(char*)((char*)p + 0x108) = 1;
        void* t = func_0x00699ee0(g_iid_IWeaponRecoilCompTemplate, g_cid_SoldierBasedRecoilCompTemplate);
        *(int*)((char*)p + 0x10c) = *(int*)((char*)t + 0x50);
        return (long)((char*)p + 0x10c);
    } else {
        if (*(int*)((char*)p + 0x30) == 1) {
            int cidv = g_cid_SoldierBasedRecoilCompTemplate;
            int u = **(int**)((char*)p + 0x38);
            *(char*)((char*)p + 0x108) = 0;
            void* t2 = func_0x00699ee0(g_iid_IWeaponRecoilCompTemplate, cidv);
            func_0x0060c630(t2, u);
            return 0;
        }
        return 0;
    }
}
} } } }
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass504_executeObjectMethod (0x8dd830)
