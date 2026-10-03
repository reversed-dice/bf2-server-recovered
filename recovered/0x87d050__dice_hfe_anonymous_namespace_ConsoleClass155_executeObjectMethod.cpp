// FUNCTION: BF2 0x87d050
namespace dice { namespace hfe {
extern void* g_010b8c08;
typedef char (*vfn_get)(void*, unsigned char);
void* cb_87d050(void* p) {
    if (*(int*)((char*)p + 0x30) != 0x1)
        return 0;
    char a = **(unsigned char**)((char*)p + 0x38);
    *(char*)((char*)p + 0x108) = 1;
    char v = (*(vfn_get*)((char*)*(void**)g_010b8c08 + 0x4e8))(g_010b8c08, a);
    *(char*)((char*)p + 0x10a) = v;
    return (char*)p + 0x10a;
}
} }
