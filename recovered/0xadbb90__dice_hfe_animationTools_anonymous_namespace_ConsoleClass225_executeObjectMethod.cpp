// FUNCTION: BF2 0xadbb90
namespace dice { namespace hfe {
extern void* fn_0xad41c0(int a);
void* cb_adbb90(void* p) {
    if (*(int*)((char*)p + 0x30) == 0) {
        *(char*)((char*)p + 0x108) = 1;
        void* q = fn_0xad41c0(0);
        *(int*)((char*)p + 0x10c) = *(int*)((char*)q + 0x3c);
        return (char*)p + 0x10c;
    }
    if (*(int*)((char*)p + 0x30) != 1)
        return 0;
    int v = **(int**)((char*)p + 0x38);
    *(char*)((char*)p + 0x108) = 0;
    void* q = fn_0xad41c0(0);
    *(int*)((char*)q + 0x3c) = v;
    return 0;
}
} }
// REVERSED_FUNCTION: dice_hfe_animationTools_anonymous_namespace_ConsoleClass99_executeObjectMethod (0xadbb90)
