// FUNCTION: BF2 0x87d4d0
namespace dice { namespace hfe {
extern void* g_0108d650;
extern float fn_get_004ca470(void* self, int a2);
void* cb_87d4d0(void* p) {
    if (*(int*)((char*)p + 0x30) == 0) {
        *(char*)((char*)p + 0x108) = 1;
        float v = fn_get_004ca470(g_0108d650, 0);
        *(float*)((char*)p + 0x10c) = v;
        return (char*)p + 0x10c;
    }
    if (*(int*)((char*)p + 0x30) != 1)
        return 0;
    float v = **(float**)((char*)p + 0x38);
    *(char*)((char*)p + 0x108) = 0;
    *(float*)((char*)g_0108d650 + 0x24) = v;
    return 0;
}
} }
