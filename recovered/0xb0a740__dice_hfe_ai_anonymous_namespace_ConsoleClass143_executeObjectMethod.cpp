// FUNCTION: BF2 0xb0a740
namespace dice { namespace hfe { namespace ai {
extern void* g_010adf60;
extern void* fn_h_00795db0(void* self);
typedef int (*vfn_18)(void*);
void* cb_b0a740(void* p) {
    if (*(int*)((char*)p + 0x30) == 0) {
        *(char*)((char*)p + 0x108) = 1;
        void* r = 0;
        if (g_010adf60 != 0) {
            void* q = fn_h_00795db0(g_010adf60);
            if (q != 0) {
                if ((*(vfn_18*)((char*)*(void**)q + 0x18))(q) == 0x2)
                    r = q;
            }
        }
        *(int*)((char*)p + 0x10c) = *(int*)((char*)r + 0x10);
        return (char*)p + 0x10c;
    }
    if (*(int*)((char*)p + 0x30) != 1)
        return 0;
    int v = **(int**)((char*)p + 0x38);
    *(char*)((char*)p + 0x108) = 0;
    void* r = 0;
    if (g_010adf60 != 0) {
        void* q = fn_h_00795db0(g_010adf60);
        if (q != 0) {
            if ((*(vfn_18*)((char*)*(void**)q + 0x18))(q) == 0x2)
                r = q;
        }
    }
    *(int*)((char*)r + 0x10) = v;
    return 0;
}
} } }
