// FUNCTION: BF2 0x87c920
namespace dice { namespace hfe {
extern void* g_010b8c08;
typedef int (*vfn_get)(void*, int, int);
void* cb_87c920(void* p) {
    if (*(int*)((char*)p + 0x30) != 0x2)
        return 0;
    int a = **(int**)((char*)p + 0x38);
    int b = **(int**)((char*)p + 0x40);
    *(char*)((char*)p + 0x108) = 1;
    int v = (*(vfn_get*)((char*)*(void**)g_010b8c08 + 0x140))(g_010b8c08, a, b);
    *(int*)((char*)p + 0x10c) = v;
    return (char*)p + 0x10c;
}
} }
