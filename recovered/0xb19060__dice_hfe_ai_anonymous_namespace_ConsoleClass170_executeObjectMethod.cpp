// FUNCTION: BF2 0xb19060
namespace dice { namespace hfe { namespace ai {
extern void* g_010adf60;
extern void* fn_h_00795db0(void* self);
typedef int (*vfn_18)(void*);
void* cb_b19060(void* p) {
    if (*(int*)((char*)p + 0x30) != 2)
        return 0;
    int idx = **(int**)((char*)p + 0x38);
    int val = **(int**)((char*)p + 0x40);
    *(char*)((char*)p + 0x108) = 0;
    void* r = 0;
    if (g_010adf60 != 0) {
        void* q = fn_h_00795db0(g_010adf60);
        if (q != 0) {
            if ((*(vfn_18*)((char*)*(void**)q + 0x18))(q) == 0x5)
                r = q;
        }
    }
    int* arr = *(int**)((char*)r + 0x18);
    arr[idx] = val;
    return 0;
}
} } }
