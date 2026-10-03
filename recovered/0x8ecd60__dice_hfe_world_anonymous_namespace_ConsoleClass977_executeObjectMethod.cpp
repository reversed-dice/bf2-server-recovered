// FUNCTION: BF2 0x8ecd60
namespace dice { namespace hfe { namespace world { namespace anonymous_namespace {
extern void* func_0x0069de30(unsigned int);  // getActiveTemplate
extern void func_0x00558e60(void*, int, float, float);  // setter
extern int g_cid;  // 0x00c7cf5c
long executeObjectMethod_0x8ecd60(void* p) {
    if (*(int*)((char*)p + 0x30) != 3) {
        return 0;
    }
    int a = **(int**)((char*)p + 0x38);
    float b = **(float**)((char*)p + 0x40);
    float c = **(float**)((char*)p + 0x48);
    *(char*)((char*)p + 0x108) = 0;
    void* t = func_0x0069de30(g_cid);
    func_0x00558e60(t, a, b, c);
    return 0;
}
} } } }
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass977_executeObjectMethod (0x8ecd60)
