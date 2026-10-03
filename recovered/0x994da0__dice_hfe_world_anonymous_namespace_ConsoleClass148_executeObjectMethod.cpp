// FUNCTION: BF2 0x994da0
namespace dice { namespace hfe { namespace world { namespace anonymous_namespace {
extern void* func_0x0069de30(unsigned int);  // getActiveTemplate
extern int g_cid;  // 0x00c7d078
long executeObjectMethod_0x994da0(void* p) {
    if (__builtin_expect(*(int*)((char*)p + 0x30) == 0, 1)) {
        *(char*)((char*)p + 0x108) = 1;
        void* t = func_0x0069de30(g_cid);
        int a1 = *(int*)((char*)t + 0x138);
        int a0 = *(int*)((char*)t + 0x134);
        char* d = (char*)p + 0x10c;
        *(int*)d = a0;
        *(int*)(d + 4) = a1;
        return (long)d;
    } else {
        if (*(int*)((char*)p + 0x30) == 1) {
            int* src = *(int**)((char*)p + 0x38);
            int b1 = src[1];
            int b0 = src[0];
            *(char*)((char*)p + 0x108) = 0;
            void* t2 = func_0x0069de30(g_cid);
            *(int*)((char*)t2 + 0x134) = b0;
            *(int*)((char*)t2 + 0x138) = b1;
            return 0;
        }
        return 0;
    }
}
} } } }
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass148_executeObjectMethod (0x994da0)
