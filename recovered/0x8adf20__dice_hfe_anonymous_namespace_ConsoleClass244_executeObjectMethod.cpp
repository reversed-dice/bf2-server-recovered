// FUNCTION: BF2 0x8adf20
namespace dice { namespace hfe {
extern void* g_0108d9f0;
void* cb_8adf20(void* p) {
    if (*(int*)((char*)p + 0x30) == 0) {
        *(char*)((char*)p + 0x108) = 1;
        char v = *(char*)((char*)g_0108d9f0 + 0xb0);
        *(char*)((char*)p + 0x10a) = v;
        return (char*)p + 0x10a;
    }
    if (*(int*)((char*)p + 0x30) != 1)
        return 0;
    unsigned char v = **(unsigned char**)((char*)p + 0x38);
    *(char*)((char*)p + 0x108) = 0;
    *(char*)((char*)g_0108d9f0 + 0xb0) = v;
    return 0;
}
} }
// REVERSED_FUNCTION: dice_hfe_ai_anonymous_namespace_ConsoleClass36_executeObjectMethod (0x8adf20)
