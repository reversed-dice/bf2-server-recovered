// FUNCTION: BF2 0xad9ba0
namespace dice { namespace hfe {
extern void* g_010935c8;
typedef void* (*vfn_OBJ)(void*);
extern char fn_g_006b16c0(void* self);
extern void fn_s_006b1650(void* self, unsigned char v);
void* cb_ad9ba0(void* p) {
    if (*(int*)((char*)p + 0x30) == 0) {
        *(char*)((char*)p + 0x108) = 1;
        void* q = (*(vfn_OBJ*)((char*)*(void**)g_010935c8 + 0x48))(g_010935c8);
        char v = fn_g_006b16c0(q);
        *(char*)((char*)p + 0x10a) = v;
        return (char*)p + 0x10a;
    }
    if (*(int*)((char*)p + 0x30) != 1)
        return 0;
    unsigned char v = **(unsigned char**)((char*)p + 0x38);
    *(char*)((char*)p + 0x108) = 0;
    void* q = (*(vfn_OBJ*)((char*)*(void**)g_010935c8 + 0x48))(g_010935c8);
    fn_s_006b1650(q, v);
    return 0;
}
} }
