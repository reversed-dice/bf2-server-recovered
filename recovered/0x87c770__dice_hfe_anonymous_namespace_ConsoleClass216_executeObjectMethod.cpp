// FUNCTION: BF2 0x87c770
namespace dice { namespace hfe {
extern void* g_010b8c08;
typedef float (*vfn_get)(void*, int);
void* cb_87c770(void* p) {
    if (*(int*)((char*)p + 0x30) != 0x1)
        return 0;
    int a = **(int**)((char*)p + 0x38);
    *(char*)((char*)p + 0x108) = 1;
    float v = (*(vfn_get*)((char*)*(void**)g_010b8c08 + 0x170))(g_010b8c08, a);
    *(float*)((char*)p + 0x10c) = v;
    return (char*)p + 0x10c;
}
} }
