// FUNCTION: BF2 0xb1bfc0
namespace dice { namespace hfe {
extern void* g_010adf60;
extern void* fn_h_00795db0(void* self);
typedef int (*vfn_18)(void*);
bool cb_b1bfc0(void* p) {
    void* r = 0;
    if (g_010adf60 != 0) {
        void* q = fn_h_00795db0(g_010adf60);
        if (q != 0) {
            if ((*(vfn_18*)((char*)*(void**)q + 0x18))(q) == 0x1)
                r = q;
        }
    }
    return r != 0;
}
} }
