// FUNCTION: BF2 0x9d6f20
namespace dice { namespace hfe {
extern unsigned char g_0108fad5;
void* cb_9d6f20(void* p) {
    if (*(int*)((char*)p + 0x30) == 0) {
        *(char*)((char*)p + 0x108) = 1;
        char v = (char)(g_0108fad5 ^ 1);
        *(char*)((char*)p + 0x10a) = v;
        return (char*)p + 0x10a;
    }
    if (*(int*)((char*)p + 0x30) != 1)
        return 0;
    unsigned char v = **(unsigned char**)((char*)p + 0x38);
    *(char*)((char*)p + 0x108) = 0;
    g_0108fad5 = (unsigned char)(v ^ 1);
    return 0;
}
} }
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass296_executeObjectMethod (0x9d6f20)
