// FUNCTION: BF2 0x8d6000
namespace dice { namespace hfe { namespace world { namespace anonymous_namespace {
extern void* func_0x00699ee0(unsigned int, unsigned int);  // getActiveTemplateComponent
extern void func_0x005fd0d0(void*, int, float, int);  // addWeaponTimeEvent
extern int g_iid_IWeaponFireCompTemplate;  // 0x00c75e34
extern int g_cid_SingleFireCompTemplate;  // 0x00c7d00c
long executeObjectMethod_0x8d6000(void* p) {
    if (*(int*)((char*)p + 0x30) != 3) {
        return 0;
    }
    int cidv = g_cid_SingleFireCompTemplate;
    int d0 = **(int**)((char*)p + 0x38);
    int d1 = **(int**)((char*)p + 0x40);
    float d2 = **(float**)((char*)p + 0x48);
    *(char*)((char*)p + 0x108) = 0;
    void* t = func_0x00699ee0(g_iid_IWeaponFireCompTemplate, cidv);
    func_0x005fd0d0(t, d0, d2, d1);
    return 0;
}
} } } }
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass368_executeObjectMethod (0x8d6000)
