// FUNCTION: BF2 0x942eb0
namespace dice { namespace hfe {
extern void fn_8c1b60(int a);
void* cb_942eb0(void* p) {
    if (*(int*)((char*)p + 0x30) != 1)
        return 0;
    int v = **(int**)((char*)p + 0x38);
    *(char*)((char*)p + 0x108) = 0;
    fn_8c1b60(v);
    return 0;
}
} }
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass204_executeObjectMethod (0x942eb0)
