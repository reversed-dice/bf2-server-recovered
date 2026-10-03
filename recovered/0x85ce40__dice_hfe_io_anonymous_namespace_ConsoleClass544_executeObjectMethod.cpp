// FUNCTION: BF2 0x85ce40
namespace dice { namespace hfe { namespace io {
extern void* fn_h_00850890();
typedef void (*vfn_setf)(void*, float);
void* cb_85ce40(void* p) {
    if (*(int*)((char*)p + 0x30) != 1)
        return 0;
    float v = **(float**)((char*)p + 0x38);
    *(char*)((char*)p + 0x108) = 0;
    void* q = fn_h_00850890();
    (*(vfn_setf*)((char*)*(void**)q + 0x140))(q, v);
    return 0;
}
} } }
