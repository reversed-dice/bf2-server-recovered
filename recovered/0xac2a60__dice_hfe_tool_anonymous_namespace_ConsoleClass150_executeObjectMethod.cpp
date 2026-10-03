// FUNCTION: BF2 0xac2a60
namespace dice { namespace hfe {
extern void* g_0112ee40;
typedef void* (*vfn_a0)(void*);
extern void fn_6a6eb0(int a, void* b);
void* cb_ac2a60(void* p) {
    if (*(int*)((char*)p + 0x30) == 0) {
        *(char*)((char*)p + 0x108) = 1;
        void* q = (*(vfn_a0*)((char*)*(void**)g_0112ee40 + 0xa0))(g_0112ee40);
        *(void**)((char*)p + 0x110) = q;
        return (char*)p + 0x110;
    }
    if (*(int*)((char*)p + 0x30) != 1)
        return 0;
    void* v = **(void***)((char*)p + 0x38);
    *(char*)((char*)p + 0x108) = 0;
    fn_6a6eb0(0x1092d80, v);
    return 0;
}
} }
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass66_executeObjectMethod (0xac2a60)
