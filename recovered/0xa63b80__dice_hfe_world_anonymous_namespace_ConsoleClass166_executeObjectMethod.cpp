// FUNCTION: BF2 0xa63b80
namespace dice { namespace hfe {
extern void* fn_69de30(int g1);
extern unsigned char g_010928dc;
void* cb_a63b80(void* p) {
    if (*(int*)((char*)p + 0x30) == 0) {
        *(char*)((char*)p + 0x108) = 1;
        void* q = fn_69de30(*(int*)0x00c7cf34);
        *(char*)((char*)p + 0x10a) = *(char*)&g_010928dc;
        return (char*)p + 0x10a;
    }
    if (*(int*)((char*)p + 0x30) != 1)
        return 0;
    unsigned char v = **(unsigned char**)((char*)p + 0x38);
    *(char*)((char*)p + 0x108) = 0;
    void* q = fn_69de30(*(int*)0x00c7cf34);
    g_010928dc = v;
    return 0;
}
} }
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass252_executeObjectMethod (0xa63b80)
