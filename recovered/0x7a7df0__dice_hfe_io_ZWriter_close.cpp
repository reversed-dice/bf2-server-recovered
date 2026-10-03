// FUNCTION: BF2 0x7a7df0
namespace dice { namespace hfe { namespace io {
extern void fn_7a7b70(void* self);
typedef void (*vfn_10)(void*);
extern void fn_407f68(void* p, int a, int b);
void cb_7a7df0(void* self) {
    if (*(void**)((char*)self + 0x8) != 0) {
        fn_7a7b70(self);
        void* q = *(void**)((char*)self + 0x8);
        (*(vfn_10*)((char*)*(void**)q + 0x10))(q);
        *(void**)((char*)self + 0x8) = 0;
    }
    fn_407f68(*(void**)((char*)self + 0x0), 0, 0x70);
}
} } }
// REVERSED_FUNCTION: dice_hfe_io_ZWriter_close (0x7a7df0)
