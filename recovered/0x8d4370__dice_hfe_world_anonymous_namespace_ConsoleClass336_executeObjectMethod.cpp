// FUNCTION: BF2 0x8d4370
namespace dice { namespace hfe { namespace world { namespace anonymous_namespace {
extern void* func_0x0069de30(unsigned int);  // getActiveTemplate
extern void func_0x005e8af0(float, void*);  // GenericFireArmTemplate setOverheatPenalty
extern int g_cid_GenericFireArmTemplate;  // 0x00c7d02c
long executeObjectMethod_0x8d3fa0(void* p) {
    if (__builtin_expect(*(int*)((char*)p + 0x30) == 0, 1)) {
        *(char*)((char*)p + 0x108) = 1;
        void* t = func_0x0069de30(g_cid_GenericFireArmTemplate);
        *(int*)((char*)p + 0x10c) = *(int*)((char*)t + 0x224);
        return (long)((char*)p + 0x10c);
    } else {
        if (*(int*)((char*)p + 0x30) == 1) {
            float u = **(float**)((char*)p + 0x38);
            *(char*)((char*)p + 0x108) = 0;
            void* t2 = func_0x0069de30(g_cid_GenericFireArmTemplate);
            func_0x005e8af0(u, t2);
            return 0;
        }
        return 0;
    }
}
} } } }
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass333_executeObjectMethod (0x8d3fa0)
