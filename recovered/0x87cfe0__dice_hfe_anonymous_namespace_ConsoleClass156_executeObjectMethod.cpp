// FUNCTION: BF2 0x87cfe0
namespace dice { namespace hfe {
extern void* g_010b8c08;
typedef char (*vfn_get)(void*);
extern void fn_set_475700(void* self, unsigned char v);
void* cb_87cfe0(void* p) {
    if (*(int*)((char*)p + 0x30) == 0) {
        *(char*)((char*)p + 0x108) = 1;
        char v = (*(vfn_get*)((char*)*(void**)g_010b8c08 + 0x458))(g_010b8c08);
        *(char*)((char*)p + 0x10a) = v;
        return (char*)p + 0x10a;
    }
    if (*(int*)((char*)p + 0x30) != 1)
        return 0;
    unsigned char v = **(unsigned char**)((char*)p + 0x38);
    *(char*)((char*)p + 0x108) = 0;
    fn_set_475700(g_010b8c08, v);
    return 0;
}
} }
// REVERSED_FUNCTION: dice_hfe_anonymous_namespace_ConsoleClass317_executeObjectMethod (0x87cfe0)
