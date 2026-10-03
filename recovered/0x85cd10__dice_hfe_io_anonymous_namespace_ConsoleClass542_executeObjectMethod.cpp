// FUNCTION: BF2 0x85cd10
namespace dice { namespace hfe { namespace io {
extern void* fn_h_00850890();
typedef void (*vfn_set)(void*, int, float);
void* cb_85cd10(void* p) {
    if (*(int*)((char*)p + 0x30) != 0x2)
        return 0;
    int a1 = **(int**)((char*)p + 0x38);
    float a2 = **(float**)((char*)p + 0x40);
    *(char*)((char*)p + 0x108) = 0;
    void* q = fn_h_00850890();
    (*(vfn_set*)((char*)*(void**)q + 0x130))(q, a1, a2);
    return 0;
}
} } }
