// FUNCTION: BF2 0x8de490
namespace dice { namespace hfe { namespace world { namespace anonymous_namespace {
extern void* func_0x00699ee0(unsigned int, unsigned int);  // getActiveTemplateComponent
extern int g_iid_IWeaponAnimationCompTemplate;  // 0x00c75de4
extern int g_cid;  // 0x00c7cfd8
typedef char (*fn70_t)(void*);
typedef void (*fn68_t)(void*, unsigned char);
long executeObjectMethod_0x8de490(void* p) {
    if (__builtin_expect(*(int*)((char*)p + 0x30) == 0, 1)) {
        *(char*)((char*)p + 0x108) = 1;
        void* t = func_0x00699ee0(g_iid_IWeaponAnimationCompTemplate, g_cid);
        void** v = *(void***)t;
        char b = ((fn70_t)v[0x70/8])(t);
        *(char*)((char*)p + 0x10a) = b;
        return (long)((char*)p + 0x10a);
    } else {
        if (*(int*)((char*)p + 0x30) == 1) {
            int cidv = g_cid;
            unsigned char u = **(unsigned char**)((char*)p + 0x38);
            *(char*)((char*)p + 0x108) = 0;
            void* t2 = func_0x00699ee0(g_iid_IWeaponAnimationCompTemplate, cidv);
            void** v2 = *(void***)t2;
            ((fn68_t)v2[0x68/8])(t2, u);
            return 0;
        }
        return 0;
    }
}
} } } }
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass517_executeObjectMethod (0x8de490)
