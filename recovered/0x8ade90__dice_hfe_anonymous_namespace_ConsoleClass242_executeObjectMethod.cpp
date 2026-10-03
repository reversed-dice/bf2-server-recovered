// FUNCTION: BF2 0x8ade90
namespace dice { namespace hfe { namespace io {
extern void* g_0108d9f0;
extern int fn_get_004d3810(void* self);
extern void fn_set_004d3b30(void* self, int v);
void* cb_8ade90(void* p) {
    if (*(int*)((char*)p + 0x30) == 0) {
        *(char*)((char*)p + 0x108) = 1;
        int v = fn_get_004d3810(g_0108d9f0);
        *(int*)((char*)p + 0x10c) = v;
        return (char*)p + 0x10c;
    }
    if (*(int*)((char*)p + 0x30) != 1)
        return 0;
    int v = **(int**)((char*)p + 0x38);
    *(char*)((char*)p + 0x108) = 0;
    fn_set_004d3b30(g_0108d9f0, v);
    return 0;
}
} } }
