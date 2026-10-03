// FUNCTION: BF2 0x7a7900
namespace dice { namespace hfe { namespace io {
typedef void (*vfn_10)(void*);
extern void fn_4084c8(void* p);
extern void fn_407f68(void* p, int a, int b);
void cb_7a7900(void* self) {
    void* q = *(void**)((char*)self + 0x10);
    if (q != 0) {
        (*(vfn_10*)((char*)*(void**)q + 0x10))(q);
        *(void**)((char*)self + 0x10) = 0;
        fn_4084c8(*(void**)((char*)self + 0x8));
    }
    fn_407f68(*(void**)((char*)self + 0x8), 0, 0x70);
}
} } }
// REVERSED_FUNCTION: dice_hfe_io_ZReader_close (0x7a7900)
