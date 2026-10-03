// FUNCTION: BF2 0xabc040
namespace dice { namespace hfe { namespace io {
extern void* g_01133c00;
extern int fn_get_006a3b50(void* self);
extern void fn_set_006a3b40(void* self, int v);
void* cb_abc040(void* p) {
    if (*(int*)((char*)p + 0x30) == 0) {
        *(char*)((char*)p + 0x108) = 1;
        int v = fn_get_006a3b50(g_01133c00);
        *(int*)((char*)p + 0x10c) = v;
        return (char*)p + 0x10c;
    }
    if (*(int*)((char*)p + 0x30) != 1)
        return 0;
    int v = **(int**)((char*)p + 0x38);
    *(char*)((char*)p + 0x108) = 0;
    fn_set_006a3b40(g_01133c00, v);
    return 0;
}
} } }
