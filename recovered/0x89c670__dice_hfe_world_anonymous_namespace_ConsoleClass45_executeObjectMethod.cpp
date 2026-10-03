// FUNCTION: BF2 0x89c670
namespace dice { namespace hfe {
extern void* fn_h_00899d60();
typedef float (*vfn_get)(void*);
typedef void (*vfn_set)(void*, float);
void* cb_89c670(void* p) {
    if (*(int*)((char*)p + 0x30) == 0) {
        *(char*)((char*)p + 0x108) = 1;
        void* q = fn_h_00899d60();
        float v = (*(vfn_get*)((char*)*(void**)q + 0x58))(q);
        *(float*)((char*)p + 0x10c) = v;
        return (char*)p + 0x10c;
    }
    if (*(int*)((char*)p + 0x30) != 1)
        return 0;
    float v = **(float**)((char*)p + 0x38);
    *(char*)((char*)p + 0x108) = 0;
    void* q = fn_h_00899d60();
    (*(vfn_set*)((char*)*(void**)q + 0x50))(q, v);
    return 0;
}
} }
