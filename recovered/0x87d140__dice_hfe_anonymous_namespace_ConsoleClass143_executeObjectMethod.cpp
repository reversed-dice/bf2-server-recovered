// FUNCTION: BF2 0x87d140
namespace dice { namespace hfe {
extern void* g_010b8c08;
typedef float (*vfn_get)(void*);
typedef void (*vfn_set)(void*, float);
void* cb_87d140(void* p) {
    if (*(int*)((char*)p + 0x30) == 0) {
        *(char*)((char*)p + 0x108) = 1;
        float v = (*(vfn_get*)((char*)*(void**)g_010b8c08 + 0x190))(g_010b8c08);
        *(float*)((char*)p + 0x10c) = v;
        return (char*)p + 0x10c;
    }
    if (*(int*)((char*)p + 0x30) != 1)
        return 0;
    float v = **(float**)((char*)p + 0x38);
    *(char*)((char*)p + 0x108) = 0;
    (*(vfn_set*)((char*)*(void**)g_010b8c08 + 0x188))(g_010b8c08, v);
    return 0;
}
} }
