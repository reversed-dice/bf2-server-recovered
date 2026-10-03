// FUNCTION: BF2 0x8e4ff0
namespace dice { namespace hfe { namespace world { namespace anonymous_namespace {
extern void* func_0x00699ee0(unsigned int, unsigned int);  // getActiveTemplateComponent
extern int g_iid_IWeaponAnimationCompTemplate;  // 0x00c75de4
extern int g_cid;  // 0x00c7cfd8
typedef float (*fna0_t)(void*);
typedef void (*fn98_t)(float, void*);
long executeObjectMethod_0x8de750(void* p) {
    if (__builtin_expect(*(int*)((char*)p + 0x30) == 0, 1)) {
        *(char*)((char*)p + 0x108) = 1;
        void* t = func_0x00699ee0(g_iid_IWeaponAnimationCompTemplate, g_cid);
        void** v = *(void***)t;
        float f = ((fna0_t)v[0x68/8])(t);
        *(float*)((char*)p + 0x10c) = f;
        return (long)((char*)p + 0x10c);
    } else {
        if (*(int*)((char*)p + 0x30) == 1) {
            int cidv = g_cid;
            float u = **(float**)((char*)p + 0x38);
            *(char*)((char*)p + 0x108) = 0;
            void* t2 = func_0x00699ee0(g_iid_IWeaponAnimationCompTemplate, cidv);
            void** v2 = *(void***)t2;
            ((fn98_t)v2[0x60/8])(u, t2);
            return 0;
        }
        return 0;
    }
}
} } } }
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass500_executeObjectMethod (0x8de750)
