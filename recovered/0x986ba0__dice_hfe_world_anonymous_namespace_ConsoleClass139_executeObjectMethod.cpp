// FUNCTION: BF2 0x986ba0
namespace dice { namespace hfe {
extern void* fn_69de30(int g1);
void* cb_986ba0(void* p) {
    if (*(int*)((char*)p + 0x30) == 0) {
        *(char*)((char*)p + 0x108) = 1;
        void* q = fn_69de30(*(int*)0x00c7d078);
        char v = *(unsigned char*)((char*)q + 0xe8) & 1;
        *(char*)((char*)p + 0x10a) = v;
        return (char*)p + 0x10a;
    }
    if (*(int*)((char*)p + 0x30) != 1)
        return 0;
    char v = **(char**)((char*)p + 0x38);
    *(char*)((char*)p + 0x108) = 0;
    void* q = fn_69de30(*(int*)0x00c7d078);
    *(unsigned char*)((char*)q + 0xe8) = (*(unsigned char*)((char*)q + 0xe8) & 0xfe) | (v & 1);
    return 0;
}
} }
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass139_executeObjectMethod (0x986ba0)
