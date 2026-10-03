// FUNCTION: BF2 0x87cdb0
namespace dice { namespace hfe {
extern void* g_010b8c08;
typedef int (*vfn_get)(void*);
typedef void (*vfn_set)(void*, int);
void* cb_87cdb0(void* p) {
    if (*(int*)((char*)p + 0x30) == 0) {
        *(char*)((char*)p + 0x108) = 1;
        int v = (*(vfn_get*)((char*)*(void**)g_010b8c08 + 0x4a0))(g_010b8c08);
        *(int*)((char*)p + 0x10c) = v;
        return (char*)p + 0x10c;
    }
    if (*(int*)((char*)p + 0x30) != 1)
        return 0;
    int v = **(int**)((char*)p + 0x38);
    *(char*)((char*)p + 0x108) = 0;
    (*(vfn_set*)((char*)*(void**)g_010b8c08 + 0x498))(g_010b8c08, v);
    return 0;
}
} }
