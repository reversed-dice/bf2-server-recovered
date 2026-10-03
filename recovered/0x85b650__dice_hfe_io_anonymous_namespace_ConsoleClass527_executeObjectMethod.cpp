// FUNCTION: BF2 0x85b650
namespace dice { namespace hfe {
extern void* fn_h_00850890();
typedef void (*vfn_cb)(void*, int);
long cb_85b650(long p) {
    if (*(int*)(p + 0x30) == 0) {
        *(char*)(p + 0x108) = 0;
        void* q = fn_h_00850890();
        (*(vfn_cb*)((char*)*(void**)q + 0x168))(q, (int)0x1);
    }
    return 0;
}
} }
