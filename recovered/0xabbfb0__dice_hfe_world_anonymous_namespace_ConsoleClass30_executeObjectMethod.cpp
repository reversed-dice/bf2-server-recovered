// FUNCTION: BF2 0xabbfb0
namespace dice { namespace hfe {
extern void* g_01133c00;
extern char fn_g_006a3b30(void* self);
extern void fn_s_006a3b20(void* self, unsigned char v);
void* cb_abbfb0(void* p) {
    if (*(int*)((char*)p + 0x30) == 0) {
        *(char*)((char*)p + 0x108) = 1;
        char v = fn_g_006a3b30(g_01133c00);
        *(char*)((char*)p + 0x10a) = v;
        return (char*)p + 0x10a;
    }
    if (*(int*)((char*)p + 0x30) != 1)
        return 0;
    unsigned char v = **(unsigned char**)((char*)p + 0x38);
    *(char*)((char*)p + 0x108) = 0;
    fn_s_006a3b20(g_01133c00, v);
    return 0;
}
} }
