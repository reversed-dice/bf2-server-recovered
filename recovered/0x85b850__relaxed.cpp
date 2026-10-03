// FUNCTION: BF2 0x85b850
namespace dice { namespace hfe { namespace io {
extern void* fn_h_0074eef0();
typedef void (*vfn_setf)(void*, float);
void* cb_754180(void* p) {
    if (*(int*)((char*)p + 0x30) != 1)
        return 0;
    float v = **(float**)((char*)p + 0x38);
    *(char*)((char*)p + 0x108) = 0;
    void* q = fn_h_0074eef0();
    (*(vfn_setf*)((char*)*(void**)q + 0xc0))(q, v);
    return 0;
}
} } }
