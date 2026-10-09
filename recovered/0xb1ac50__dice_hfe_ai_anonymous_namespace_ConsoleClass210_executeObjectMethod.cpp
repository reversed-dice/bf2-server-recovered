// FUNCTION: BF2 0xb1ac50
namespace dice { namespace hfe { namespace ai {
extern void* g_010adf60;
extern void* fn_h_00795db0(void* self);
typedef int (*vfn_18)(void*);
struct Vec3_b1ac50 { float x; float y; float z; };
extern void fn_0x00784610(void*, Vec3_b1ac50 const&);
void* cb_b1ac50(void* p) {
    if (*(int*)((char*)p + 0x30) != 1)
        return 0;
    Vec3_b1ac50 const* s = *(Vec3_b1ac50 const**)((char*)p + 0x38);
    float bz = s->z;
    float by = s->y;
    float bx = s->x;
    Vec3_b1ac50 v;
    float* d = (float*)&v;
    d[0] = bx;
    d[1] = by;
    d[2] = bz;
    *(char*)((char*)p + 0x108) = 0;
    void* r = 0;
    if (g_010adf60 != 0) {
        void* q = fn_h_00795db0(g_010adf60);
        if (q != 0) {
            if ((*(vfn_18*)((char*)*(void**)q + 0x18))(q) == 1)
                r = q;
        }
    }
    fn_0x00784610(r, v);
    return 0;
}
} } }
