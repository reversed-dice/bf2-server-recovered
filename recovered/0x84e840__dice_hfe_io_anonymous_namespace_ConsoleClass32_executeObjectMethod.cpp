// FUNCTION: BF2 0x84e840
namespace dice { namespace hfe { namespace io {
extern void* g_010aebe8;
extern int fn_get_007c6190(void* self);
extern void fn_set_007c6180(void* self, int v);
void* cb_84e840(void* p) {
    if (*(int*)((char*)p + 0x30) == 0) {
        *(char*)((char*)p + 0x108) = 1;
        int v = fn_get_007c6190(g_010aebe8);
        *(int*)((char*)p + 0x10c) = v;
        return (char*)p + 0x10c;
    }
    if (*(int*)((char*)p + 0x30) != 1)
        return 0;
    int v = **(int**)((char*)p + 0x38);
    *(char*)((char*)p + 0x108) = 0;
    fn_set_007c6180(g_010aebe8, v);
    return 0;
}
} } }
